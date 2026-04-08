#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    if(n<0 || n>100){
        return 0;
    }

    printf("%d", n+5);
       


    return 0;
}