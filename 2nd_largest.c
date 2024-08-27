#include<stdio.h>
    int main(){
	int max,max1,a[20],i,n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d element: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe array is: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	max=a[0];
	max1=a[0];
	for(i=1;i<n;i++){
		if(a[i]>max){
		max=a[i];
	}}
		for(i=1;i<n;i++){
		if(a[i]>max1 && a[i]!=max){
		max1=a[i];}}
        printf("\nThe 2nd largest element is %d",max1);
    return 0;}
