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
printf("%d\t",ar[i]);
}

int main(){
int i,ar[100],n;
printf("enter the number of elements ");
scanf("%d",&n);
printf("enter the elements of array");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
sort(ar,n);
int start=0,end=n-1,mid,pos=-1,key;
printf("enter the key");
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
printf("%d",pos);
else
printf("xx");
}










