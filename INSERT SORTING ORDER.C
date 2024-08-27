#include<stdio.h>
int main(){
	int a[20],i,n,j,temp,item,loc;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d element: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nThe sorted array is: ");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}	
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nEnter the element you want to insert: ");
	scanf("%d",&item);
	for(i=0;i<n;i++){
		if(item>a[i])
		{
			loc=i;	
		}
	}
	printf("\nAfter inserting the element, the array is: ");
	for(i=n-1;i>=loc+1;i--)
	{
		a[i+1]=a[i];
	}
	n++;
	a[loc+1]=item;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
	
