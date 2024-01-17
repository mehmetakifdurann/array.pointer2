/*
 Write a C program to input elements in an array and print array using pointers. How to input and display array elements using pointer in C programming , this is a better way.

EXAMPLE OUTPUT :
     Enter size of array: 10
     Enter elements in array:
    1,2,3,4,5,6,7,8,9,10
    Array elements: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
 
 ! ! ! THE PROGRAM ENDS ! ! !.
 
*/
//Created by Mehmet Akif Duran. January 14, 2024

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10000

int main(void){
    
    //Variable Decleration(s).
    
    int userArray[MAX_SIZE];
    int *pointer = userArray;   // connecting pointer to userArray[0]
    int count;
    int userSize; // users array size.
    
    //Executable Statement(s).
    
    printf("Enter your array size: "); //getting users array size.
        scanf("%d", &userSize);
    
    printf("Enter your array elements: ");
    for(count=0;count<userSize;count++){
        scanf("%d", (pointer+count));
    }//getting array elements.
        
    printf("Array elements: \n");//printing the array elements
    for(count=0;count<userSize;count++){
        printf("%d, ", *(pointer+count));
    }
    printf("\n\n");
    printf("! ! ! THE PROGRAM ENDS ! ! ! \n");
    
    return 0;
}
