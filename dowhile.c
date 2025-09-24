// #include<stdio.h>
// int main(){
// int i=1;
// while(i<=10)
// {
//        printf("%d\n",i*20);
//         i++;
// }
//  do{
//           printf("%d\n",i*20);
//         i++;
//  }

// }

// #include<stdio.h>
// int main(){
// int i=1; 
// while(i>=10){
//         printf("%d\n",i*20);
//         i++;
//        }
        
//      do{
//            printf("%d\n",i*20);
//          i++;
//      } 
//      }
    



 #include<stdio.h>  
intmain(){   
int i=1,number=0;   
printf("Enter a number: ");   
scanf("%d",&number);   
do{  
printf("%d \n",(number*i));   
i++;   
}while(i<=10);   
return 0;   
}   