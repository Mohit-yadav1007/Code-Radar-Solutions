#include <stdio.h>
int main() {
    int  b;
    scanf("%d", &b);
    if (b>0 && b<=100){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}