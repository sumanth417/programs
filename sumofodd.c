#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("enter the num");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==1)
    {
sum=sum+i;
printf("odd is %d \n",i);

}
}
printf("sum=%d",sum);
}

