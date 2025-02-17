#include <stdio.h>

int main() {
    int  b;
    scanf("%d",&b);
    if (b%3==0 && b%5==0){
        printf("Divisible by Both");
    }
    else if(b%3==0){
        printf("Divisible by 3");
    }
    else{
        printf("Divisible by 3");
    }
    return 0;
    
    }