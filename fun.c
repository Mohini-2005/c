#include<stdio.h>
// Function Declaration -  Inform
void greet();
void add();
void sub();
void multi();
void div();

int main(){
    // Function Call - Use
// greet();
// greet();
// greet();
//add(1,1);
//add(2,2);
//add(3,3);
//add(31,32);
//sub(35,12);
//sub(67,34);
//multi(2,4);
//multi(4,5);
div(6,3);
div(9,3);
div(18,2);
}

// Function DEFINITION - Create
void greet(){
    printf("Good Morning. Mohini");
}



void add(int a,int b){
   
    printf("%d\n",a+b);
}
void sub(int a,int b){
   
    printf("%d\n",a-b);
}
void multi(int a,int b){
   
    printf("%d\n",a*b);
}
void div(int a,int b){
   
    printf("%d\n",a/b);
}  




