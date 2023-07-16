#include<stdio.h> 
void main()
{
int a;
float b,sum;
printf("\nEnter the integer number:"); 
scanf("%d",&a);
printf("\nEnter the floating point number:"); 
scanf("%f",&b);
sum=a+b;
printf("sum of %d and %.3f is=%.3f",a,b,sum);
}
