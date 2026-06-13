#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while(getline(cin, str))
    {
        int freq[26] = {0};

        for (int i = 0; str[i] != '\0'; i++){
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                int idx = str[i] - 'a';
                freq[idx]++;
            }
        }

        for(int i =0; i< 26; i++){
            while(freq[i] > 0)
            {
                char ch = 'a' + i;
                cout << ch;
                freq[i]--;
            }
        }
        cout << endl;

    }

    return 0;
}
