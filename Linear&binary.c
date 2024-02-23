
#include<stdio.h>
void readarr(int ar[],int n){
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
}
void printarr(int ar[],int n)
{
	for(int i=0;i<n;i++)
	printf("%d\n",ar[i]);
}
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

}
void search(int ar[],int n,int key)
{
int  start=0,end=n-1,mid,pos=-1;
printf("enter the key to find the position");
scanf("%d",&key);

while(start<=end)
{
mid=(start+end)/2;
		if(key==ar[mid])
	{
		pos=mid+1;
		break;
	}
		else if(key<ar[mid])
			end=mid-1;
		else 
		start=mid+1;
			

}
if(pos>=0)
printf("the key %d is found at the position=%d",key,pos);
else
printf("the key is not found");
}
void linearsearch(int ar[],int n,int key)
{
	int i,pos=-1;
	
	printf("Enter the key element to find the index pos: \n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(ar[i]==key)
		{
			pos=i;
			break;
		}
	}
	if(pos>=0)
		printf("Element %d found at the index =%d\n",key,pos);
	else
		printf("Element not found");
}

	



int main(){
int i,ar[100],n,pos,key;
printf("enter the number of elements \n");
scanf("%d",&n);

printf("enter the elements of array");
readarr(ar,n);
sort(ar,n);
printf("the arry after sorting\n");
printarr(ar,n);
search(ar,n,key);
printf("\n");
linearsearch(ar,n,key);

}
