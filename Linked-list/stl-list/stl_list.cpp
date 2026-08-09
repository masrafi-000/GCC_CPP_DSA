#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l; 
    
    // for (auto it = l.begin(); it !=l.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for(int val : l) {
        cout << val << " ";
    }
    
    
    cout << l.size() << endl; 

    return 0;
}