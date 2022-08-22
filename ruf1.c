#include<stdio.h>
void main()
{
int i,j,sum=0;
int a[5]={1,2,3,4,5};
int b[5]={2,3,4,5,67};
for(i=0;i<5;i++){
printf("%d \n",a[i]);
}
for(j=0;j<5;j++)
{
printf("%d \n",b[j]);
}
for(i=0;i<5;i++){
        for(j=0;j<5;j++){
sum=a[i]+b[j];
printf("sum = %d \n",sum);
}
}
}
