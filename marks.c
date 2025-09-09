#include<stdio.h>
int main()
{
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if(marks>=85){
        printf("you got A grade");

    }else if(marks>=70)
    {
        printf("you got B grade");


    }else if(marks>=60){
        printf("you got C grade");

    }else if (marks>=50)
    {printf("you got D grade");}
    else if (marks>=35){
        printf("you got E grade");

    }
    else if (marks<=35){
    printf("you got FAILED");

     }
     else {
     printf("default");
     }

}