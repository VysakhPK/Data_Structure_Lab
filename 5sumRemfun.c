#include<stdio.h> 
int sum(int s)
{
printf("\nsum of remainders is:%d",s);
}
void main()
{
int n,m,a,i,j,s=0;
printf("\nEnter the limit of the number[1-100]:"); 
scanf("%d",&n);
printf("\nEnter divisor:"); 
scanf("%d",&m); 
printf("enter numbers"); 
for(i=0;i<n;i++)
{
scanf("%d",&a); 
j=a%m; 
s=s+j;
}
sum(s);
}