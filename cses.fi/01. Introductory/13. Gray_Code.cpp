#include <bits/stdc++.h>
 
using namespace std;
 
int n;
 
string bin(int x, string res=""){
	if (!x)
		return res + string(n-res.size(), '0');
	return bin(x >> 1, res + char(x % 2 + '0'));
}
 
int main(){
	cin >> n;
	for (int i=0; i<(1<<n); i++)
		cout << bin(i ^ (i >> 1)) << '\n';
	return 0;
}

// https://cses.fi/problemset/task/2205/