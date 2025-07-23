//singly circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
   }*start=NULL,*temp,*p,*p3,*p2,*end,*end2,*start2=NULL;
   
struct node* newNode(struct node*temp){ 
    int x;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
    printf("Memory is not allocated\n");
    exit(1);
    }
    printf("enter data in node:");
    scanf("%d",&x);
    temp->data=x;
    temp->next=NULL;
    return temp;
    }
    
 void display(struct node* start){
   p=start;
   while(p->next!=start){
   printf("%d ",p->data);
   p=p->next;
 }
 printf("%d ",p->data);
 p=p->next;
 
 }   
 
 int length(struct node* start){
   int count=1;
   p=start;
   while(p->next!=start){
   count++;
   p=p->next;
 }
  return count;
 }   
struct node* create_scll(struct node* start){ 
  int n,i;
  printf("Enter no.of nodes:");
  scanf("%d",&n);
  temp=newNode(temp);
  start=temp;
  end=temp;
  end->next=start; 
  for(i=1;i<n;i++){
     temp=newNode(temp);
     end->next=temp;
     end=end->next;
     end->next=start;  
   }
  display(start);
  return start;
 }
 
 struct node* add_beg(struct node* start){
  if(start==NULL){
  	temp=newNode(temp);
  start=end=temp;
  end->next=start; }
   else{
   temp=newNode(temp);
   temp->next=start;
   start=temp;
   end->next=start;
    }  
    display(start);
    return start;
   }
 
struct node* add_end(struct node* start){ 
   if(start==NULL){
     temp=newNode(temp);
     start=end=temp;
     end->next=start; }
     else{
       temp=newNode(temp);
       end->next=temp;
       end=temp;
       end->next=start;
      }
    display(start);
    return start;  
}

struct node* add_cerpos(struct node* start){
  int pos,count=0,i;
  printf("Enter the u want to add a node:");
  scanf("%d",&pos);
  count=length(start);
  if(pos>0 && pos<=count+1){
   if(pos==1)
   start=add_beg(start);
   else if(pos==count+1)
   start=add_end(start);
   else{
    p=start;
    for(i=1;i<pos-1;i++){
    p=p->next; }
    temp=newNode(temp);
    temp->next=p->next;
    p->next=temp;
    display(start);
    } 
   }
   else
   printf("Entered invalid position\n");
   return start;
}

void search(struct node* start){
 int count=0,x,flag=0;
  if(start==NULL)
  printf("The LL is empty\n");
  else {
   printf("enter the value u want to search:");
   scanf("%d",&x);
   p=start;
   while(p->next!=start){
   count++;
   if(p->data==x){
    flag=1;
    break; }
    p=p->next;
    }
    if(p->data==x)
    printf("%d is at %d node\n",x,count);
    else
    printf("%d is not found in ll\n",x);
   }
}

struct node* del_beg(struct node* start){
   if(start==NULL)
   printf("scll is empty");
   else if(start->next==start){
    start=end=temp->next=NULL;
    free(temp);
   }
   else{
    temp=start;
    start=start->next;
    end->next=start;
    free(temp);
   }
  display(start);
  return start;  
}

struct node* del_end(struct node* start){
  if(start==NULL)
   printf("scll is empty");
   else if(start->next==start){
    start=end=temp->next=NULL;
    free(temp);
   }
   else{
     while(p->next->next!=start){
     p=p->next;
      }
    end=p;
    temp=p->next;
    free(temp);
    end->next=start;
   }
   display(start);
   return start; 
}

struct node* del_cerpos(struct node* start,int pos){
  int count=0,i;
  count=length(start);
  if(pos>0 && pos<=count){
   if(pos==1)
   start=del_beg(start);
   else if(pos==count)
   start=del_end(start);
   else{
    p=start;
    for(i=1;i<pos-1;i++){
    p=p->next; }
    temp=p->next;
    p->next=temp->next;
    free(temp);
    display(start);
    } 
   }
   else
   printf("Entered invalid position\n");
   return start;
}

struct node* del_byValue(struct node* start){
 int x,count=0,flag=0,l=0;
 if(start==NULL)
  printf("The LL is empty\n");
  else {
   printf("enter the value u want to search:");
   scanf("%d",&x);
   p=start;
   while(p->next!=start){
   count++;
   if(p->data==x){
    flag=1;
    break; }
    p=p->next;
    }
    l=length(start);
    if(count==1)
    start=del_beg(start);
    else if(count==l)
    start=del_end(start);
    else
    start=del_cerpos(start,count); }
 return start;
}

void sort(struct node*start){
 int x;
 if(start==NULL){
        printf(" The linked list was empty!!");
    }
    else if(start->next==NULL){
        printf("link list have single element!!");
        display(start);
    }
 else{
  for(temp=start;temp->next!=start;temp=temp->next){
   for(p=temp->next;p!=start;p=p->next){
     if(temp->data > p->data){
      x=temp->data; 
      temp->data=p->data;             
      p->data=x;
     }
   } 
 }
   display(start); 
}
}  

void concatination(struct node* start,struct node* start2){
   start2=create_scll(start2);
    printf("1st circular linked list:");
    display(start);
    printf("\n2nd circular linked list:");
    display(start2);
    if(start==NULL){
        printf("\nconcatination scll:");
        display(start2);
    }
    else{
        p=start;
        while(p->next!=start){
        p=p->next;
    }
    p->next=start2;
    end->next=start;
    printf("\nconcatination scll:");
    display(start);
    }
}

 struct node* reverse(struct node*start){
     struct node*p2,*p3;
     if(start==NULL)
     printf("The scll is empty\n");
     else if(start->next==start)
     printf("scll contains only one node\n");
     else
     p=start;
     p2=p->next;
     p3=p2->next;
     p2->next=p;
     end=p;
     while(p3!=start){
     p=p2;
     p2=p3;
     p3=p2->next;
     p2->next=p;
     }
     start=p2;
     end->next=start;
     display(start);
     return start;
}

struct node* insert_ele(struct node*start,int data){
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=data;
   if(start==NULL)
    start=p3=temp;
    else{
     p3->next=temp;
     p3=temp;
     }
     return start;
}

/*
 struct node* dup(struct node*start){
     p=start;
        while(p->next!=start){
        struct node* p2=p;
            temp=p->next;
            while(temp->next!=start){
                if(p->data==temp->data){
                 p2->next=temp->next;
                 free(temp); 
                  temp=p2;  }
                else
                p2=temp;
                temp=temp->next;  
               }          
             p=p->next;
        }
        display(start);
    return start;
}
   */
 
void merge(struct node*start){
 struct node*start3=NULL;
  start2=create_scll(start2);
  sort(start);
  sort(start2);
  p=start;p2=start2;
  while(p->next!=start && p2->next!=start2)
     if(p->data < p2->data){
     start3=insert_ele(start3,p->data);
     p=p->next;   }
     else if(p->data > p2->data){
     start3=insert_ele(start3,p2->data);
     p2=p2->next;   }
     else{
     start3=insert_ele(start3,p->data);
     start3=insert_ele(start3,p2->data);
      p=p->next; 
      p2=p2->next; 
     }
    while(p!=start){
     start3=insert_ele(start3,p->data);
     p=p->next;  }
    while(p2!=start2){
     start3=insert_ele(start3,p2->data);
     p2=p2->next;  }
     end=p3;
     end->next=start3;
    printf("\n\nlinked list 1:");
    display(start);
    printf("\nlinked list 2:");
    display(start2);
    printf("\nlinked list 3(merged ll):");
    display(start3);
     start=start3;     
}

void split(struct node*start){
  printf(" The linked list before spliting:");
  display(start);
   struct node *start2=NULL;
   int i;
    int x=length(start);
    int pos=x/2;
    p=start;
    for(i=1;i<pos;i++){
    p=p->next; }
    end2=end;
    end=p;
    start2=end->next;
    end->next=start;
    end2->next=start2;
    printf("\nlinked list 1:");
    display(start);
    printf("\nlinked list 2:");
    display(start2);
}




 int main(){
    int x,w=1,choice,pos;
    printf("Singly circular linked list.\n");
    printf("enter \n1.creating scll \n2.insertion at beginning\n3.insertion at end\n4.insertion at cerpos\n");
    printf("5.display\n6.search by value\n7.deletion at beginning\n8.deletion at end\n9.deletion at cerpos\n10.delete by value\n11.sorting\n12.concatination\n13.reversing a scll\n14.reversing through recurrsion\n15.removing duplicates\n16.merging two scll\n17.splitting two scll\n");
    while(w){
    printf("\n enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        start=create_scll(start);
        break;
    case 2:
        start=
		add_beg(start);
        break;         
    case 3:
        start=add_end(start);
        break;
    case 4:
        start=add_cerpos(start);
        break;
    case 5:
        display(start);
        break;
    case 6:
        search(start);
        break;
    case 7:
        start=del_beg(start);
        break;  
    case 8:
        start=del_end(start);
        break;  
    case 9:
        printf("Enter the u want to delete a node:");
        scanf("%d",&pos);
        start=del_cerpos(start,pos);
        break;
     case 10:
        start=del_byValue(start);
        break;
     case 11:
        sort(start);
        break;
     case 12:
       concatination(start,start2);
       break;
     case 13:
       start=reverse(start);
       break;
   /* case 14:
       recrev(start);
       break;           
    case 15:
       start=dup(start);
       break;               */
    case 16:
       merge(start);
       break;
    case 17:
       split(start);
       break;               
    default:
        printf("Enter proper choice\n");
      } 
      
   printf("\nfor further opertaions enter 1 otherwise 0:");
   scanf("%d",&w);
   printf("Singly circular linked list.\n");
    printf("enter \n1.creating scll \n2.insertion at beginning\n3.insertion at end\n4.insertion at cerpos\n");
    printf("5.display\n6.search by value\n7.deletion at beginning\n8.deletion at end\n9.deletion at cerpos\n10.delete by value\n11.sorting\n12.concatination\n13.reversing a scll\n14.reversing through recurrsion\n15.removing duplicates\n16.merging two scll\n17.splitting two scll\n");
  }
 // if(w==0)
 // free(temp); 
 }
