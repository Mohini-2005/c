#include <stdio.h>  
#include <stdlib.h>  
int main() {
    int *arr;  
    int i, initial_size = 5, new_size = 10;  
     
    arr = (int *)malloc(initial_size * sizeof(int));  
    if (arr == NULL) {  
        printf("Initial memory allocation failed!\n");  
        return 1;  
    }  
      
    for (i = 0; i < initial_size; i++) {  
        arr[i] = i + 1;  
    }  
    
    printf("Original array elements:\n");  
    for (i = 0; i < initial_size; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
     
    arr = (int *)realloc(arr, new_size * sizeof(int));  
    if (arr == NULL) {  
        printf("Memory reallocation failed!\n");  
        return 1;  
    }  
      
    for (i = initial_size; i < new_size; i++) {  
        arr[i] = (i + 1) * 10;  
    }  
    
    printf("Resized array elements:\n");  
    for (i = 0; i < new_size; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
    
   
}  