#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
}*start,*p,*temp;
void sll_creation();
void sll_transverse();
void sll_insert_beg();
void sll_insert_end();
void sll_insert_spect();
int main(){
    sll_creation();
}
void sll_creation(){
    int choice,x;
    choice=1;
    while(choice){
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        printf("enter node data to:");
        scanf("%d",&x);
        temp->data=x;
        temp->link=NULL;
        if(start=NULL){
            start=temp;
            p=temp;
        }
        else{
            p->link=temp;
            p=temp;
        }
        printf("if you want to repeat press 1 to continue 0 to stop:\n");
        scanf("%d",&choice);
    }
    printf("displaying data\n");
    p=start;
    while(p!=NULL){
        printf("%d",p->data);
        p=p->link;
    }
}
