#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 5
int queue[MAX];
int front =-1;
int rear =-1;

void enqueue()
 {
  int value;
  printf("Enter the number : ");
  scanf("%d",&value);
  if(rear==MAX-1)
    printf("Queue is full\n");
  else
   { 
    if(front==-1)
    front=0; rear=rear+1;
    queue[rear]=value;
    printf("\nInsertion Succsussful!!!");
   }
 }

void dequeue()
 {
  int i; 
  if(rear==-1)
   {
    printf("Queue is empty \n");
   }
  else
   {
    printf("%d is deleted \n",queue[front]);
    if(front==rear)
     {
      front=-1;
      rear=-1;
     }
    front=front+1;
   }
 }

void display()
 {
  int i;
  if(rear==-1)
   {
    printf("Queue is empty\n");
   }
  else
   {
    for(i=front;i<=rear;i++)
     {
      printf("queue[%d] is : %d \n",i+1,queue[i]);
     }
   }
 }

int main() 
 {
  int opt;
  do{
    printf("\n..........MENU........\n\n");
    printf("0)Quit\n");
    printf("1)Enqueue\n"); 
    printf("2)Dequeue\n"); 
    printf("3)Display\n"); 
    printf("\n.............\n"); 
    printf("Choose your option : "); 
    scanf("%d",&opt); 
    switch(opt)
      {
       case 0:exit(0); 
       case 1:enqueue();
         break; 
       case 2:dequeue();
         break; 
       case 3:display();
         break;
       default:printf("Invalid Option ! Try Again..\n");
      }
   }while(opt!=0); 
  return 0;
 }