#include<stdio.h>
void main()
{
int r,c,e;
printf("enter the number of rows and columns");
scanf("%d %d",&r,&c);
int a[r][c];
printf("enter %d %d elements for two dimensional array",r,c);
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
printf("\t");
scanf("%d",&e);
a[i][j]=e;
}
}
printf("the 3*3 array is:\n");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
printf("\t %d",a[i][j]);
}
printf("\n");
}
}
