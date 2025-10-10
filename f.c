#include<stdio.h>  
int factor(int);  
void main ()  
{  
    int n,f;  
    printf("Enter the number");  
    scanf("%d",&n);  
    f=factor(n);  
    printf("%d",f);  
}  
int factor(int n)  
{  
    if(n==0)  
    {  
    return 0;  
    }  
    else if(n == 1)  
    {  
        return 1;   
    }  
    else  
    {  
        return(n-1)+(n-2);  
    }  
}  