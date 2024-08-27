#include<stdio.h>
void insert(int arr[],int n){
int item;
printf("Enter the item:");
scanf("%d",&item);
arr[n]=item;
return ;}

int main(){
int arr[30],n,i,item;
printf("Enter the no of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
printf("The array is:\n");
for(i=0;i<n;i++){
printf("%d ",arr[i]);}
insert(arr, n);
printf("The Updated array is\n");
for(i=0;i<n+1;i++){
printf("%d ",arr[i]);}
return 0;}
