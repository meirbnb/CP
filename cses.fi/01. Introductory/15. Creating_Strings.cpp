#include <bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
 
int main(){
	string str;
	cin >> str;
	vector<string>v;
	sort(str.begin(), str.end());
	do{
		v.pb(str);
	}while(next_permutation(str.begin(), str.end()));
	cout << v.size() << '\n';
	for (auto u : v) cout << u << '\n';
	return 0;
}

// https://cses.fi/problemset/task/1622/