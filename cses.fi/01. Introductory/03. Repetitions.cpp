#include <iostream>
 
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int mx = 0, cnt = 1;
    int n = s.length();
    for (int i=0; i<n; i++){
        if (s[i] == s[i+1])
            ++cnt;
        else
            mx = max(mx, cnt), cnt = 1;
    }
    cout << mx << '\n';
    return 0;
}

// https://cses.fi/problemset/task/1069