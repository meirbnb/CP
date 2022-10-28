
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define pb push_back
 
void testcase(){
	int a, b, d;
	cin >> a >> b;
	if ((a + b) % 3 || abs(a - b) > max(a, b) / 2){
		cout << "NO\n";
		return;
	}
	if (a == b)
		a -= 1, b -= 2;
	if (a < b)
		swap(a, b);
	d = a - b;
	a = a - 2 * d;
	b = b - d;
	if (a == b)
		cout << "YES";
	else
		cout << "NO";
	cout << '\n';
}
 
 
int main(){
	int tt = 1;
	cin >> tt;
	for (int t=1; t<=tt; t++)
		testcase();
	return 0;
}

// https://cses.fi/problemset/result/2821533/