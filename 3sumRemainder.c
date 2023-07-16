#include<stdio.h> 
int main()
{
int n,m,j,sum=0,i,a[100];
printf("\nEnter the limit of the number[1-100]:"); 
scanf("%d",&n);
printf("Enter %d numbers:",n); 
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the value of m:"); 
scanf("%d",&m); 
for(i=0;i<n;i++)
{
j=i%m; 
sum=sum+j;
}
printf("\nsum of remainders is: %d",sum); 
return 0;
}
