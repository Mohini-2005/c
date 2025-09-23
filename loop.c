#include<stdio.h>

int main(){
    int i=1;
    // while(i<=10){
    //     printf("Hello Wolrd %d\n",i);
    //     i++;
    // }


    //    Pre tested - do -while lopp 

       while(i>=10){
        printf("%d\n",i*20);
        i++;
       }
    //    Post tested - do -while lopp 
    // do{
    //       printf("%d\n",i*20);
    //     i++;
    // }while(i>=10);
    // }

    // For Loop  - Short Hand
    // for(i=1;i<=10;i++){
    //       printf("%d\n",i*20);

    // }


       for(i=10;i>=1;i--){
          printf("%d\n",i);

    }
    printf("last Line");
}