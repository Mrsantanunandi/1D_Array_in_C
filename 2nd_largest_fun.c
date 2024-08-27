#include<stdio.h>
int ls(int a[],int n){
	int max,i,max1;
	max=a[0];
	max1=0;
	for(i=1;i<n;i++){
		if(a[i]>max)
		max=a[i];
	  }
	  for(i=1;i<n;i++){
	  	if(a[i]>max1 && a[i]!=max)
	  	max1=a[i];
	  }
	  return max1;
}
int main(){
	int i ,a[20],n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d element: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe array is: ");
	for(i=0;i<n;i++){
	printf("%d ",a[i]);}
    int largest=ls(a,n);
    printf("\nThe 2nd largest element is %d",largest);	

    return 0;}
