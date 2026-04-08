#include<stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    if(a <= 1 || a >= 10000 || b <= 1 || b >=10000){
        return 0;
    }


if(a%b==0 || b%a== 0){
    printf("Yes");
} else{
    printf("No");
}


    return 0;
}