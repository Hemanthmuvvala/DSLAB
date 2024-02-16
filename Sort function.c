#include<stdio.h>
void swap(int*a,int*b){
int temp=*a;
*a=*b;
*b=temp;
}
void sort(int ar[],int n){
int i,j;


for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
if(ar[i]>ar[j])
swap(&ar[i],&ar[j]);
}
for(i=0;i<n;i++)
printf("%d",ar[i]);
}
int main(){
int i,ar[100],n;
printf("enter the number of elements ");
scanf("%d",&n);
printf("enter the elements of array");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
sort(ar,n);
  printf("thr array after sorting");
}
