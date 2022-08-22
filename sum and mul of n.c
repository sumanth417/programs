//
void main()
{
int n,sum=0,multi=1,i;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 printf("%d \n",i);
 sum=sum+i;
 multi=multi*i;
}
printf("sum is %d\n",sum);
printf("multi is %d\n",multi);
}
