
#include<stdio.h>
void readarr(int ar[],int n) {
    int i;
    for(i=0; i<n; i++)
        scanf("%d",&ar[i]);
}
void printarr(int ar[],int n)
{
    for(int i=0; i<n; i++)
        printf("%d\n",ar[i]);
}

void sort(int a[],int n)
{
    int i,j,key;
    for(i=1; i<n; i++) 
    {
  
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
               
        }
        a[j+1]=key;
        
        
    }
}
int main()
{
    int ar[100],n;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    readarr(ar,n);
    sort(ar,n);
    printf("the array after sorting:");
    printarr(ar,n);







}
    
