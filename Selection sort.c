
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
void swap(int *a,int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sort(int ar[],int n)
{
    int i,j,min;
    for(i=0; i<n-1; i++) 
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(ar[j]<ar[min])
                min=j;
        }
        if(min!=i)
        {   swap(&ar[min],&ar[i]);
        }
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
    printf("the array after sorting");
    printarr(ar,n);







}
    
