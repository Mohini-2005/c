#include<stdio.h>
int main(){
    // Simple if statement 
    int age = 2;
    // if(age>18){
    //     printf("YOu can vote");
    // }

    // If ELse Statement 
    // if(age>18){
    //     printf("YOu can vote");
    // }else{
    //     printf("YOu cannot vote");
    // }

    // If Else if Ladder 
    int a=120,b=20,c=90;
    // if(a>b && a>c){
    //     printf("A is Greater");
    // }
    // else if(b>a && b>c){
    //     printf("B is Greater");
    // }else{
    //     printf("C is Greater");
    // }

    // Nested If Else 
    int weight=8;

    if(age>18){
        if(weight>50){
            printf("Allowed for blood Donation");
        }else{
            printf("Not Allowed for blood Donation due to weight");

        }
    }else{
            printf("Not Allowed for blood Donation due to age");

    }

}