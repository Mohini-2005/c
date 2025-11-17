#include <stdio.h>  
#include <string.h>  
int main() {    //main function  
    char str1[] = "hello";  
    char str2[] = "hello";  
    int result = strcmp(str1, str2);  
    if (result == 0)  
        printf("Strings are equal.\n");  
    else  
        printf("Strings are not equal.\n");  
    return 0;  
}  

