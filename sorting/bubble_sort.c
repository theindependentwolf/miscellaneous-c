/********************************************************************************************************
*
*	Title	     :   bubble_sort.c
*	Description  :   Bubble Sort ALgorithm
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

void bubble_sort(int []);
void display_array(int []);



//Main Function

int main(){

    //Initializing random integer array of size 10
    int A[ARRAY_SIZE] = {15,4,6,2,7,8,44,1,9,3};
    bubble_sort(A);
    return 0;

}



// Bubble sort Function

void bubble_sort(int A[]){

    //Initializing other integers  
    int temp, i, j = 0;

    //Initializing boolean character to check if swapping  is done
    bool swapped = false;


    //Printin the unsorted array

    printf("Inital Array :\n");
    display_array(A);
    printf("\n");

    // Bubble sort mechanism

    for (i = 0; i < ARRAY_SIZE-1; i++){
        swapped = false;
        for (j = 0; j < ARRAY_SIZE-1-i; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                swapped = true;
            }

        }

        // If no swapping is done, it means array is sorted and it breaks out of the loop 

        if (swapped == false){
            break;
        }

    }
    
    
    //Printin the sorted array

    printf("Sorted Array :\n");
    display_array(A);
    printf("\n");
}



// Display Array

void display_array(int A[]){
    for (int i = 0; i < ARRAY_SIZE; i++){
        printf("%d\t",A[i]);
    }
    printf("\n");

}
