#include<stdio.h>
int delete(int a[],int n,int pos){
	int i;
	for(i=pos;i<n;i++){
		a[i]=a[i+1];
	}
	return pos;

}
int main(){
	int i ,a[20],n,index;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d element: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe array is: ");
	for(i=0;i<n;i++){
	printf("%d ",a[i]);}
	printf("\nEnter the pos you want to delete: ");
	scanf("%d",&index);
	int loc=delete(a,n,index);
	printf("\nThe Updated array is: ");
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}		

return 0;}
