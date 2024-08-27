#include<stdio.h>
int main(){
	int i ,a[20],n,pos,item;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d element: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe array is: ");
	for(i=0;i<n;i++){
	printf("%d ",a[i]);}
	printf("\nEnter the position you want to delete: ");
	scanf("%d",&pos);
	for(i=pos;i<n;i++){
		a[i-1]=a[i];
	}
	printf("\nThe Updated array is: ");
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}		

return 0;}
