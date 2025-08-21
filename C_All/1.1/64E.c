#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int strCountAndLen(){
    char str[100];
     int len =0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    for(int i = 0; str[i] != '\0'; i++) {
        // if (str[i] == ' ' || str[i] == '\n')
        len++;
    }

    // printf("Length: %d\n", len);

    return len;

}

int printLoop() {
    for (int i = 0; i< 100; i++) {
        printf("I love c \n");
    }
    return 0;
}

int twodArray(){
    int arr[3][3] = {{0,1,2}, {3,4,5}, {6,7,8}};
    
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// calclulate an array element order of n
int elementOrder(){
    int arr[10] = {1,23,34,43,54,21,24, 65,41,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
    printf("Array Elements: %d\n", n);

    return 0;
}

int ArrayElementReverse(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = n -1; i >= 0; i--) {
       printf("%d ", arr[i]);
    }
    return 0;
}

int largestElementArray(){
    int arr[10] = {1, 23, 34, 43, 54, 21, 24, 65, 41, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("Largest Element: %d\n", largest);
    return 0;
}

bool isPrime(int num) {
     if (num <= 1) return false;
     for (int i = 2; i * i <= num; i++)
     {
        if (num % i == 0) return false;
     }
     return true;

}


int ArrayPrimeCount() {
    int arr[10] = {1, 23, 34, 43, 54, 21, 24, 65, 41, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            printf("The number %d is prime.\n", arr[i]);
        }
        
    }
    return 0;
}

int vowelsAndConsonant() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if(isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch ==  'o'  || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}

int copyString() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    // str2[strlen(str1)] = '\0';
    printf("Copied String: %s\n", str2);

    return 0;
}


int calculateAreaAndVolumeOfRoom() {
    int length, width, height;

    printf("Enter length, width, and height of the room: ");
    scanf("%d %d %d", &length, &width, &height);

    int area = length * width;
    int volume = length * width * height;

    printf("Area: %d square meters\n", area);
    printf("Volume: %d cubic meters\n", volume);
}

struct Student
{
    char name[100];
    int age;
    float cgpa;
};


int structinitialization() {
    struct Student student1 = {"John Doe", 24, 3.80};


    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("CGPA: %.2f\n", student1.cgpa);
}

int main() {
    // int len = strCount();
    // printf("Length: %d\n", len);
    // printLoop();
    // twodArray();
    // elementOrder();
    // ArrayElementReverse();
    // largestElementArray();
    // vowelsAndConsonant();
    // ArrayPrimeCount();
    // copyString();
    // calculateAreaAndVolumeOfRoom();
    structinitialization();

    return 0;
}
