#include <iostream>
using namespace std;

// int main(){
//     char ch;

//     cout << "enter char: ";
//     cin >> ch;

//     if (ch >= 'a' && ch <= 'z')
//     {
//         cout << "lowercase\n";

//     } else {
//         cout << "uppercase\n";
//     }
    

//     return 0;
// }


int main() {
    
    int x;
    // cin >> x;


    // while (x != -1)
    // {
        // cout << x << endl;
        // cin >> x;
    // }
    // 

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 1;

    // for (int i = 0; i < 10; i++)
    // {
    //     sum *= arr[i];
    // }
    
    // cout << "Sum = " << sum << endl;

    int filtered[10];
    int j =0;

for (int i = 0; i < 10; i++)
{
    if (arr[i] == 3 || arr[i] == 5 || arr[i] == 7)
    {
        filtered[j] = arr[i];
        j++;
    }
    
}

for(int k = 0; k < j; k++) {
    cout << filtered[k] << " ";
}


    return 0;
}