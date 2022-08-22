
#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("enter the num");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
    {
sum=sum+i;
printf("even is %d \n",i);

}
}
printf("sum=%d",sum);
}

