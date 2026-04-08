#include<stdio.h>

int main() {

    float x;
    scanf("%f", &x);

    if(x < 1.0 || x > 100.0){
        return 0;
    }


    printf("%.3f", x);



    return 0;
}