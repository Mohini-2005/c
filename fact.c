#include<stdio.h>
int fact(int);
int main()
{
 int ans = fact(89);
 printf("\n%d",ans);
}
 int fact(int n){
    if(n==0){
        return 1;
    }
    else if (n==1){
        return 1;

    }else{
        return n*fact(n-1);
    }
    }
 