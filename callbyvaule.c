#include<stdio.h>  
void change(int num) {    
    printf("first num=%d \n",num);    
    num=num+100;    
    printf("second num=%d \n", num);    
}    
int main() {    
    int x=100;    
    printf("frist call x=%d \n", x);    
    change(x);    
    printf("second call x=%d \n", x);    
}