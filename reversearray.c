#include<stdio.h>
void main(){
int i,n,temp=0;
int a[5]={1,2,3,4,5};
for(i=0;i<=n/2;i++){
temp=a[i];
a[i]=a[n-i-1];
a[n-i-1]=temp;
}9
for(i=0;i<n;i++){
    printf("%d",a[i]);
}
}
