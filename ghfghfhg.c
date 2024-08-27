#include<stdio.h>
int insert(int a[],int n,int pos){
	int i;
	for(i=n-1;i>=pos;i--){
		a[i+1]=a[i];
	}
	return pos;

}
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
	printf("\nEnter the position where you want to insert: ");
	scanf("%d",&pos);
	if(pos<0 || pos>n){
		printf("\nInvalid position....!!");}
	else
	printf("\nEnter the element you want to insert at %d index: ",pos);
	scanf("%d",&item);
	int loc=insert(a,n,pos);
	a[loc]=item;
	printf("\nThe Updated array is: ");
	for(i=0;i<n+1;i++){
		printf("%d ",a[i]);
	}		

return 0;}
