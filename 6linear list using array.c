#include <stdio.h>
#include <stdlib.h>
int array[100],i;
int array_count=0;
void create()
{
int i;
printf("\nTotal number of elements in the array : ");
scanf("%d",&array_count);
printf("\nEnter %d Elements \n\n",array_count);
for(i=0;i < array_count; i++)
{
printf("Array[%d] : ",i);
scanf("%d",&array[i]);
}
printf("\nArray created sucsussfully!!!");
}
void insert()
{
int ins_pos,i,new_value;
printf("\nPosition of insertion : ");
scanf("%d",&ins_pos);
for(i=array_count-1;i>=ins_pos-1;i--)
{
array[i+1]=array[i];
}
printf("Which value you want to add : ");
scanf("%d",&new_value);
array[ins_pos]=new_value;
printf("\nArray inserted an element succsussfully!!!\nNew array is : \n");
array_count=array_count+1;
for(i=0;i < array_count; i++)
{
printf("%d\n",array[i]);
}
}
void delete()
{
int del_pos,i;
printf("\nEnter the position of array to delete an element : ");
scanf("%d",&del_pos);
for(i=del_pos-1;i< array_count-1;i++)
{
array[i]=array[i+1];
}
printf("\nArray element deleted succsussfully!!!\nNew array is : \n");
array_count=array_count-1;
for(i=0;i < array_count; i++)
{
printf("%d\n",array[i]);
}
}
void view()
{
int i;
printf("Elements are : ");
for(i=0;i < array_count; i++)
{
printf("%d\t",array[i]);
}
printf("\n");
}
void store()
{
int ele,pos;
printf("\nEnter the Element you want to store: ");
scanf("%d",&ele);
printf("\nEnter the position : ");
scanf("%d",&pos);
array[pos]=ele;
printf("Array stored an element succsussfully!!!");
}
void sort()
{
for(int i=0;i<array_count-1;i++)
{
for(int j=0;j<array_count-1;j++)
{
if(array[j]>array[j+1])
{
int temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
}
printf("\nArray sorted succsussfully!!!\nNew array is : \n");
for(int i=0;i<array_count;i++)
{
printf("%d\t",array[i]);
}
printf("\n");
}
int main()
{
int opt=0;
while (1)
{
printf("\n\n.............MENU...........\n\n");
printf("0) QUIT\n");
printf("1) CREATE\n");
printf("2) INSERT\n");
printf("3) DELETE\n");
printf("4) STORE\n");
printf("5) SORT\n");
printf("6) DISPLAY\n\n");
printf("choose your option : ");
scanf("%d",&opt);
if (opt==0)
exit(0);
switch(opt){
case 1:create();
break;
case 2:insert();
break;
case 3:delete();
break;
case 4:store();
break;
case 5:sort();
break;
case 6:view();
break;
default:printf("Invalid option! Try Again.");
}
}
printf("ok");
return 0;
}