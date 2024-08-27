#include<stdio.h>
int main(){
int arr[10],n,i,item;
printf("Enter the no of elements");
scanf("%d",&n);
printf("Enter the values");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Print the values: ");
for(i=0;i<n;i++){
printf("%d",arr[i]);}
printf("Enter the new item:");
scanf("%d",&item);
arr[n]=item;
printf("The updated array is:");
for(i=0;i<n+1;i++){
printf("%d",arr[i]);}
return 0;}
