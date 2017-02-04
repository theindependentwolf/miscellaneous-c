/********************************************************************************************************
*
*
*	Title	     :   selection_sort.c
*	Description  :   Selection Sort Algorithm
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

void selection_sort(int []);
void display_array(int []);



//Main Function

int main(){

    //Initializing random integer array of size 10
    int A[ARRAY_SIZE] = {15,4,6,2,7,8,44,1,9,3};
    selection_sort(A);
    return 0;

}



// Selection sort Function

void selection_sort(int A[]){

    display_array(A);
    int min, temp;

    //Loop through the array - find the smallest element in each run 
    for (int i = 0; i < ARRAY_SIZE; i++){
        min = i;
        for (int j = i + 1; j < ARRAY_SIZE; j++){
            if ( A[j] < A[min] ){
                min = j;
            }        
        }    

        // Swap minimum element with the element at i
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;    
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


