#include<stdio.h>
void main(){
	int i,a[20],n,key,pos=-1;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	printf("enter the elements of array \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the key element \n");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(a[i]==key){
			pos=i;
			break;
		}
		}
	if(pos>=0)
		printf("Element %d found at the index  %d",key,pos);
	else
		printf("Element not found");
}


