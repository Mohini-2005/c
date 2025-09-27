#include<stdio.h>

int main(){
int i=1,j=1;
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
