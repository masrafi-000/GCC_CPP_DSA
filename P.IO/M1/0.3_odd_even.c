#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    int f = x / 1000;

    if(f%2 ==0){
        printf("EVEN\n");
    } else{
        printf("ODD\n");
    }


  return 0;
}