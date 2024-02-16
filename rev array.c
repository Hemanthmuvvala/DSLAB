#include<stdio.h>
void reverse( int arr[],int n)
{
int i;

printf(" The reversed array");
for(int i=n;i>=0;i--)
{
printf("%d\t",arr[i]);
  printf("\n");
}

}
int main()
{
int arr[100],n,i;
printf("enter the size of the array");
scanf("%d",&n);
printf("enter the array");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
reverse(arr,n);



}
