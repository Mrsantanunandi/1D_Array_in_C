#include<stdio.h>
int main()
{
	int i,n1,n2,a[20],b[20],c[50],j,temp;
        printf("Enter the size of the 1st array:");
	scanf("%d",&n1);
	printf("\nEnter the size of the second array:");
	scanf("%d",&n2);
	printf("\nEnter %d element for 1st array: ",n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter %d element for 2nd array: ",n2);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<n2;i++)
	{
		c[n2+i]=b[i];
	}
	printf("\nThe merge array is: ");
	for(i=0;i<n1+n2;i++)
	{
		printf("%d ",c[i]);
	}
	int n=n1+n2;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(c[j]>c[j+1]){
			temp=c[j];
			c[j]=c[j+1];
			c[j+1]=temp;}
		}
	}
 	printf("\nThe sorted array is:");
	for(i=0;i<n;i++){
	printf("%d ",c[i]);
	}

 	return 0;}	
	

