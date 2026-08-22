#include <stdio.h>
#include <unistd.h>

int main() {
    fork();
    fork();

    printf("Process Running\n");

    return 0;
}