#include<stdio.h>
void main()
{
int n,e,even=0,odd=0;
printf("enter the number you want to enter");
scanf("%d",&n);
int a[n],b[n];
printf("enter %d elements for 1st array",n);
for(int i=0;i<n;i++)
{
scanf("%d",&e);
a[i]=e;
}
for(int i=0;i<n;i++)
{
if(a[i]%2==0)
even=even+a[i];
else
odd=odd+a[i];
}
printf("%d\n",even);
printf("%d\n",odd);
}
