#include<stdio.h>
int main(){
	int a[20],i,n;
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
	printf("\nThe Odd Element array is: ");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d ",a[i]);
		}	
	}
	printf("\nThe Even Element array is: ");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}	
	}
	return 0;		
}
