#include<stdio.h>
#include<string.h>
struct Student{
    int roll_no;
    char name[30];
    float marks;
};
int main(){
    struct Student s1;

    s1.roll_no = 49;
    strcpy(s1.name,"Nitin");
    s1.marks = 73.8;


    // printf("Roll No: %d\n",s1.roll_no);
    // printf("Name: %s\n",s1.name);
    // printf("Marks: %f\n",s1.marks);

    struct Student s2 = {15,"Deepak",81.92};
//    printf("Roll No: %d\n",s2.roll_no);
//     printf("Name: %s\n",s2.name);
//     printf("Marks: %f\n",s2.marks);

    struct Student s3= {12,"Mohini",74.2};
    show(s1);
    show(s2);
    show(s3);

}

void show(struct Student s){
       printf("Roll No: %d\n",s.roll_no);
    printf("Name: %s\n",s.name);
    printf("Marks: %.1f\n",s.marks);

}