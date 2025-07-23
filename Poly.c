#include<stdio.h>
#include<stdlib.h>

struct node {
	int coff;
	int pow;
	struct node *next;
};
struct node *head=NULL,*tail=NULL;

struct node *head1=NULL;
struct node *head2=NULL;
int c,p;
int n;


void pol1();
void pol2();
void polyadd();
struct node *append(struct node *Xtail,int power,int cofficient);
struct node* sort_lst(struct node *Xhead);
void display(struct node *Xtemp);

int main() {

	int option;
	//printf("\n******* MAIN MENU *******");
	printf("\n 1. Enter the first polynomial");
	printf("\n 2. Enter the second polynomial");
	printf("\n 3. Add the polynomials");
	printf("\n 4. EXIT\n");


	do {
		printf("\nEnter option: ");
		scanf("%d",&option);


		switch(option) {
			case 1:
				pol1();
				break;
			case 2:
				pol2();
				break;
			case 3:
				polyadd();
				break;
			default:
				printf("Enter option in the list only\n");
		}

	} while(option!=4);

}

void pol1() {
	printf("Creating the first polynomial\n");
	struct node *tail1,*new_node1;
	head1=NULL;
	tail1=NULL;
	printf("Enter for number of terms:");
	scanf("%d",&n);
	while(n>0) {

		new_node1=(struct node*)malloc(sizeof(struct node));
		printf("Enter cofficient of the term: ");
		scanf("%d",&c);
		printf("Enter power of the term: ");
		scanf("%d",&p);
		new_node1->coff=c;
		new_node1->pow=p;
		new_node1->next=NULL;

		if(head1==NULL) {
			head1=new_node1;
			tail1=new_node1;
		} else {
			tail1->next=new_node1;
			tail1=new_node1;
		}
		n--;
	}
	head1=sort_lst(head1);
	display(head1);

}


void pol2() {
	printf("Creating the second polynomial\n");
	struct node *tail2,*new_node2;
	head2=NULL;
	tail2=NULL;
	printf("Enter for number of terms:");
	scanf("%d",&n);
	while(n>0) {

		new_node2=(struct node*)malloc(sizeof(struct node));
		printf("Enter cofficient of the term: ");
		scanf("%d",&c);
		printf("Enter power of the term: ");
		scanf("%d",&p);
		new_node2->coff=c;
		new_node2->pow=p;
		new_node2->next=NULL;

		if(head2==NULL) {
			head2=new_node2;
			tail2=new_node2;
		} else {
			tail2->next=new_node2;
			tail2=new_node2;
		}
		n--;
	}
	head2=sort_lst(head2);
	display(head2);

}



void polyadd() {
	int cof;
	struct node *p1,*p2;
	p1=head1;
	p2=head2;

	while(p1!=NULL||p2!=NULL) {
		if(p1->pow>p2->pow) {
			tail=append(tail,p1->pow,p1->coff);
			p1=p1->next;
		} else if(p1->pow<p2->pow) {
			tail=append(tail,p2->pow,p2->coff);
			p2=p2->next;
		} else  {
			cof=p1->coff+p2->coff;
			if(cof!=0) {
				tail=append(tail,p1->pow,cof);
			}
			p1=p1->next;
			p2=p2->next;
		}

	}

	while(p1!=NULL) {
		tail=append(tail,p1->pow,p1->coff);
		p1=p1->next;
	}

	while(p2!=NULL) {
		tail=append(tail,p2->pow,p2->coff);
		p2=p2->next;
	}

	display(head);
}

struct node* append(struct node *Xtail,int power,int cofficient) {
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->coff=cofficient;
	new_node->pow=power;
	new_node->next=NULL;
	if(Xtail==NULL) {
		head=new_node;
		Xtail=new_node;
	} else {

		Xtail->next=new_node;
		Xtail=new_node;
	}

	return Xtail;
}

struct node* sort_lst(struct node *Xhead) {
	int x,n;
	printf("After sorting the list:\n");
	struct node *temp1,*temp2;
	for(temp1=Xhead; temp1!=NULL; temp1=temp1->next) {
		for(temp2=temp1->next; temp2!=NULL; temp2=temp2->next) {
			if(temp1->pow<temp2->pow) {
				x=temp1->pow;
				n=temp1->coff;
				temp1->pow=temp2->pow;
				temp1->coff=temp2->coff;
				temp2->pow=x;
				temp2->coff=n;
			}
		}
	}

	return Xhead;
}

void display(struct node *Xtemp) {
	struct node *temp;
	temp=Xtemp;
	printf("\nThe polynomial is\n");
	while(temp!=NULL) {
		printf("%dX^%d+",temp->coff,temp->pow);
		temp=temp->next;
	}
	printf("...\n");

}