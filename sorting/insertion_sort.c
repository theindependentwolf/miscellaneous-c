/********************************************************************************************************
*
*	Title	     :   insertion_sort.c
*	Description  :   Insertion  Sort Algorithm
*   Complexity   :   for an array:
*
*                    Worst-case performance         О(n2) comparisons, swaps
*                    Best-case performance          O(n) comparisons, O(1) swaps
*                    Average performance            О(n2) comparisons, swaps
*                    Worst-case space complexity    О(n) total, O(1) auxiliary
*
*	Author       :   Aniruth Oblah
*
*	
*	Revision History:
*   ___________________________________________________________________________________
*
*	Number	Date		Name			Comment
*	___________________________________________________________________________________
*		
*	1.	Feb 3, 2017	Aniruth Oblah		Initial 
*
*
*
***********************************************************************************************************/


#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 10


//Function Declaration

void insertion_sort(int []);
void display_array(int []);



//Main Function

int main(){

    //Initializing random integer array of size 10
    int A[ARRAY_SIZE] = {15,4,6,2,7,8,44,1,9,3};
    insertion_sort(A);
    return 0;

}



// Insertion sort Function

void insertion_sort(int A[]){   
    
    display_array(A);

    int i,j,x,temp = 0;
    
    for (i = 1; i < ARRAY_SIZE; i++){

        // Element at x would move through the sorted list and inserted in the right location
        x = i;
        
        // Element before x
        j = i - 1;

        while ( j >= 0 && (A[x] < A[j]) ){
                temp = A[x];
                A[x] = A[j];
                A[j] = temp; 
                x--;
                j--;
        }
    }
        
    display_array(A);

}



// Display Array

void display_array(int A[]){
    for (int i = 0; i < ARRAY_SIZE; i++){
        printf("%d\t",A[i]);
    }
    printf("\n");

}
