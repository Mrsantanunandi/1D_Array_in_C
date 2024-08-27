#include<stdio.h>
int ls(int a[],int n,int item){
	int found=0,i;
	for(i=0;i<n;i++){
		if(a[i]==item)
		return i;
	}
	return -1;	
}
int main(){
	int i ,a[20],n,before;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d element: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe array is: ");
	for(i=0;i<n;i++){
	printf("%d ",a[i]);}
	printf("\nEnter the element you want to delete before which: ");
	scanf("%d",&before);
	int loc=ls(a,n,before);
	if(loc!=-1)
	printf("\nThe %d element is present at the index %d",before,loc);
	else
	printf("\nThe item is not in the array!");
	for(i=loc-1;i<n;i++){
		a[i]=a[i+1];
	}
	printf("\nThe Updated array is: ");
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}		

return 0;}
