#include<stdio.h>


int main(){
    int a = 10;
int *p = &a;

int **dp = &p;
    printf("A = %d\n",a);
    printf("A address= %x\n",&a);
   
    printf("Ptr = %x\n",p);
    printf("Ptr Address= %x\n",&p);
    printf("A's value = %d\n",*p);
     printf("DPtr = %x\n",dp);
    printf("DPtr Address= %x\n",&dp);
    printf("A's value = %x\n",*dp);
    printf("A's value = %d\n",**dp);


}