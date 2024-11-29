#include<stdio.h>
int main()
{
 int arr[30],element,num,i,location; 
 printf("n Enter no of elements :"); 
 scanf("%d",&num);
 for(i=0 ; i < num ; i++)scanf("%d",&arr[i]); 
 printf("n Enter the element to be inserted :"); 
 scanf("%d",&element); 
 printf("n Enter the location");
 scanf("%d",&location);
 /* create space at the specified location */ for(i = num ;i >= location ; i--)arr[i] = arr[i-1]; num++; arr[location-1] = element;
 /* Print out the Result of Insertion */ for(i = 0 ;i < num ;i++) printf("n %d",arr[i]);
return(0);
}
