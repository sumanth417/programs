#include<stdio.h>
int main()
{
int i,j,mul=1;
int a[2][3];
for (i=0;i<2;i++)
{
    for (j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
        mul=mul*a[i][j];
    }
}
printf("the product is %d",mul);


}
