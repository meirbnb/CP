#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define pb push_back
 
void testcase(){
	ll y, x;
	cin >> y >> x;
	ll b = max(y, x) * max(x, y);
//	int a = 2 * abs(max(y, x) - 1 + max(y, x) - 2) - (b & 1);
	if (b & 1)
		cout << b - abs(1 - y) - abs(max(y, x) - x);
	else
		cout << b - abs(max(y, x) - y) - abs(1 - x);
	cout << '\n';
}
 
int main(){
	int tt = 1;
	cin >> tt;
	for (int t=1; t<=tt; t++)
		testcase();
	return 0;
}

// https://cses.fi/problemset/task/1071