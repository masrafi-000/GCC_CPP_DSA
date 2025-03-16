#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value: ";
    cin >> n;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         char data = ch +i;
    //         cout << data << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = ch + i; j >= ch; j--)
    //     {
    //         char a = j;
    //         cout << a << " ";
    //     }
    //     cout << endl;
    // }
    // char ch = 'A';
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << (i + 1) << " ";
    //     }
    //     cout << endl;
    // }

    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j= 0; j < n-i ; j++)
    //     {
    //         char data = ch+i;
    //         cout << data << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << j;
    //     }

    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << "*" ;
        }
        //spaces
        for (int j = 0; j < (2* (n-i-1)) ; j++)
        {
            cout << " ";
        }
        
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i ; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2*i ; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n-i ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    

    return 0;

}