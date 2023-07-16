#include<stdio.h>
float add(int *x,float *y) /*function for adding two numbers*/
{
float c;
c=*x + *y; /*adding two numbers*/
}
void main()
{
int a; 
float b,c;
printf("enter an integer\n"); 
scanf("%d",&a);
printf("enter the floating number\n"); 
scanf("%f",&b);
c=add(&a,&b);
printf("SUM\n %d + %f = %f",a,b,c);
}
