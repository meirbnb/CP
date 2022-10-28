#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	long long s=0, ans = 20 * 1e9+123;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
		s += a[i];
	}
	for (int i=0; i<1<<n; i++){
		long long r=0;
		for (int j=0; j<n; j++){
			if (i & 1 << j){
				r += a[j];
			}
		}
		ans = min(ans, abs(2*r-s));
	}
	cout << ans << '\n';
	return 0;
}

// https://cses.fi/problemset/task/1623/