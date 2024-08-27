#include<stdio.h>
#include<stdlib.h>
void display_arr(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int i,a[20],n,ch,max,after, new_value,loc,before,item,mid,low,high,max2;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d element: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe array is: ");
    display_arr(a,n);
	while(1){
		printf("\nMenu");
		printf("\n1. Find Maximum:");
		printf("\n2. Insert after a element:");
		printf("\n3. Insert before a element:");
		printf("\n4. delete after a element:");
		printf("\n5. delete before a element:");
		printf("\n6. Insert at any position:");
		printf("\n7. delete at any position:");
		printf("\n8. Binary search:");
		printf("\n9. linear search:");
		printf("\n10. Second largest:");
		printf("\n11. Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
	        max=a[0];
	        for(i=1;i<n;i++){
		    if(a[i]>max)
		    max=a[i];}
		    printf("\nThe largest element in the array is %d\n",max);
		    display_arr(a,n);
		    break;
		    case 2:
           loc = -1;
    printf("\nEnter the element you want to insert after which: ");
    scanf("%d", &after);
    for (i = 0; i < n; i++) {
        if (a[i] == after) {
            loc = i;
            break;
        }
    }

    if (loc != -1) {
        printf("\nThe %d element is present at the index %d", after, loc);
    } else {
        printf("\nThe item is not in the array!");
        return 0;
    }

    printf("\nEnter the element you want to insert after %d: ", after);
    scanf("%d", &new_value);
    for (i = n - 1; i >= loc + 1; i--) {
        a[i + 1] = a[i];
    }
    a[loc + 1] = new_value;
    n++; 
    printf("\nThe Updated array is: ");
    printf("\n");
    display_arr(a,n);
    break;
    case 3:
    loc = -1;
    printf("\nEnter the element you want to insert before which: ");
    scanf("%d", &before);
    for (i = 0; i < n; i++) {
        if (a[i] == before) {
            loc = i;
            break;
        }
    }
    if (loc != -1) 
        printf("\nThe %d element is present at the index %d", before, loc);
    else 
        printf("\nThe item is not in the array!");
    printf("\nEnter the element you want to insert before %d: ", before);
    scanf("%d", &new_value);
    for (i = n - 1; i >= loc; i--) {
        a[i + 1] = a[i];
    }
    a[loc] = new_value;
    n++; 
    printf("\nThe Updated array is: ");
    printf("\n");
     display_arr(a,n);
    break;
    case 4:
    printf("\nEnter the element you want to delete after which: ");
    scanf("%d", &after);
    
    loc = -1;
    for (i = 0; i < n; i++) {
        if (a[i] == after) {
            loc = i;
            break;
        }
    }
    
    if (loc != -1) 
        printf("\nThe %d element is present at the index %d", after, loc);
        else 
    printf("\nThe item is not in the array!");
        for (i = loc + 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--; 
     printf("\nThe Updated array is: ");
    printf("\n");
    display_arr(a,n);
    break;
    case 5:
        printf("\nEnter the element you want to delete before which: ");
    scanf("%d", &before);
    loc = -1;
    for (i = 0; i < n; i++) {
        if (a[i] == before) {
            loc = i;
            break;
        }
    }
    
    if (loc != -1) 
        printf("\nThe %d element is present at the index %d",before, loc);
		else 
        printf("\nThe item is not in the array!");
        for (i = loc -1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;  
        printf("\nThe Updated array is: ");
        printf("\n");
        display_arr(a,n);
        break;
        case 6:
    printf("\nEnter the element you want to insert: ");
    scanf("%d", &new_value);
    printf("\nEnter the position you want to insert -> %d: ", new_value);
    scanf("%d", &loc);
    for (i = n - 1; i >= loc; i--) {
        a[i + 1] = a[i];
    }
    a[loc] = new_value;
    n++; 
    printf("\nThe Updated array is: ");
    printf("\n");
    display_arr(a,n);
    break;
    case 7:
    	printf("\nEnter the element you want to delete: ");
    scanf("%d", &item);
    loc = -1;
    for (i = 0; i < n; i++) {
        if (a[i] == item) {
            loc = i;
            break;
        }
    }
    
    if (loc != -1)
        printf("\nThe %d element is present at the index %d", item, loc);
        else 
        printf("\nThe item is not in the array!");
        for (i = loc; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--; 
    printf("\nThe Updated array is: ");
    printf("\n");
    display_arr(a,n);
    break;
    case 8:
    printf("\nIt is not in the code...");
    printf("\nPlease enter another choice !!");
    printf("\nThe array is: ");
    printf("\n");
    display_arr(a,n);
    break;
    case 9:
    printf("\nEnter the element you want to find: ");
    scanf("%d", &item);
    loc = -1;
    for (i = 0; i < n; i++) {
        if (a[i] == item) {
            loc = i;
            break;
        }
    }
    
    if (loc != -1) 
    printf("\nThe %d element is present at the index %d", item, loc);
    else 
    printf("\nThe item is not in the array!");
    printf("\nThe array is: ");
    printf("\n");
    display_arr(a,n);
    break;
    case 10:
    	    max=a[0];
    	    max2=a[0];
	        for(i=1;i<n;i++){
		    if(a[i]>max)
		    max=a[i];}
		    for(i=1;i<n;i++){
		    if(a[i]>max2 && a[i]!=max)
		    max2=a[i];}
		    printf("\nThe Second largest element in the array is %d\n",max2);
		    display_arr(a,n);
		    break;
   case 11:
		exit(0);
	default:
	printf("\nInvalid Choice");	
		}
	} 
	return 0;
}

