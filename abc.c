int a=1;
while(i<=4){
    j=1;
    while(j<=i){
       if(a%2==0){
            printf(" # ");
       }else{
            printf(" * ");
        
       }
       a++;
        j++;
    }
    printf("\n");
    i++;
}

}