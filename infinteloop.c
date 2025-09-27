#include<stdio.h>

int main(){

    int i=1;
// Break 
    // for(i=1;i<=10;i++){
    //     printf("%d\n",i);
    //     if(i==5){
    //         break;
    //     }
    // }
    // Continue 
    //     for(i=1;i<=10;i++){
    //         if(i==5 || i==7 || i==9 ){
    //             continue;
    //         }
    //         printf("%d\n",i);
    // }


    // Goto Statement 
    // int j=1;
    // for(i=1;i<5;i++){
    //     for(j=1;j<5;j++){
    //         if(i==2 && j==2){
    //            goto end;
    //         }
    //         printf("%d %d\n",i,j);
    //     }
    // }

    // end:
 
    // printf("Last Line ");


    i=1;
top:
printf("%d\n",5*i);
i++;
if(i<=10){
    goto top;
}
}