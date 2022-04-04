#include <stdio.h>
#include<stdlib.h>

void  main() {
    struct node{
        int a;
        struct node*next;
    };
   struct node*head,*newnode,*temp;
   head=0;
   int choice=1,count=0;
   while(choice){
   newnode =(struct node*)malloc(sizeof(struct node));
   printf("enter the data for node:");
   scanf("%d",&newnode->a);
   newnode->next=0;
   if(head==0)
   {
       head=temp=newnode;
   }
   else
   {
       temp->next=newnode;
       temp=newnode;
   }
   printf("enter a choice (0,1)?");
   scanf("%d",&choice);
   
   }
   temp=head;
   printf("The data values of the nodes are:\n");
   while(temp!=0)
   {
       printf("%d\n",temp->a);
       temp=temp->next;
       count++;
   }
   printf("the number of nodes in the list is:");
   printf("%d",count);
   
   
   
}