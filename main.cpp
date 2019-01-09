/**
 * Program take a number from the user and places it inside the array
 * in it's proper place based on the order.
 * @return 
 */ 

#include <stdio.h>
 /*define the size of the array*/
  #define MAX_SIZE 6 
  
  int main()
  {
      int a[MAX_SIZE] = {2,6,12,15,18}; // fill sorted data into the array of size MAX_SIZE-1
      int n,i,j;
  
      printf("Enter the number to insert : ");
      scanf("%d",&n);
  
      for(i=0;i<MAX_SIZE-1;i++)
      {
          /* check for the location, which if found, shift numbers to the right */
          if(a[i]>n)
          {
              for(j=MAX_SIZE-1;j>=i;j--)
                  a[j] = a[j-1];
  
              break;
          }
  
      }
  
      a[i] = n; // put the number at the correct location
  
      /* print the completed array */
      for(i=0;i<MAX_SIZE;i++)
          printf("%d ",a[i]);
  }