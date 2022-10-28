#include <iostream>
 
using namespace std;
 
typedef long long ll;
 
int main(){
	int n;
	cin >> n;
	ll a[n];
	for (int i=0; i<n; i++)
		cin >> a[i];
	ll mxm = 0, ans = 0;
	for (int i=0; i<n; i++){
		mxm = max(mxm, a[i]);
		ans += abs(mxm - a[i]);
	}
	cout << ans << '\n';
	return 0;
}

// https://cses.fi/problemset/task/1094