#include<stdio.h>

int main(){
int i=1,j=1;

// for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//         printf("%d %d\n",i,j);
//     }
// }

// while (i<=5)
// {
//  j=1;   
//     while (j<=5)
//     {
//         printf("%d %d\n",i,j);
//         j++;
//     }
//     i++;
    
// }


// while(i<=4){
//     j=1;
//     while(j<=4){
//         printf(" # ");
//         j++;
//     }
//     printf("\n");
//     i++;
// }




while(i<=4){
    j=1;
    while(j<=i){
        printf(" # ");
        j++;
    }
    printf("\n");
    i++;
}

}