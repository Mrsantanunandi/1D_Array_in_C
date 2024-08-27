#include<stdio.h>
int second_min(int a[],int n){
	int i,min1,min2;
	min1=a[0];
	min2=a[0];
	for(i=0;i<n;i++)
	{
	for(i=1;i<n;i++)
	{
		if(a[i]<min1)
		{
			min1=a[i];
		}
	}
	for(i=1;i<n;i++)
	{
		if(a[i]<min2 && a[i]!=min1)
		{
			min2=a[i];
		}
	}
	return min2;}
}
int main(){
	int a[20],i,n,x;
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
	x=second_min(a,n);
	printf("\nThe Second Minimum element is: %d",x);
	return 0;
}
