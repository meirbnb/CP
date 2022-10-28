#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
const int MOD = 1e9 + 7;
 
void testcase(){
	int n, res = 1;
	cin >> n;
	for (int i=1; i<=n; i++)
		res = (res * 2) % MOD;
	cout << res << '\n';
}
 
int main(){
	int tt = 1;
//	cin >> tt;
	for (int t=1; t<=tt; t++)
		testcase();
	return 0;
}

// https://cses.fi/problemset/task/1617/