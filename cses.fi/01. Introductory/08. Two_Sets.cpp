#include <bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
 
// a = 1 3 5 7	S=16
// b = 2 4 6 8	S=20	
 
int main(){
	int n;
	cin >> n;
	if (n*(n+1) % 4 != 0){
		cout << "NO\n";
		return 0;
	}
	int s1=0, s2=0;
	vector<int>a, b;
	for (int i=1; i<=n; i++){
		if (i & 1){
			s1 += i;
			a.pb(i);
		} else {
			s2 += i;
			b.pb(i);
		}
	}
	int k = abs(s1 - s2) / 2;
	for (int i=1; i<=k; i++){
		if (s1 > s2){
			a[i]--;
			b[i-1]++;
		} else {
			a[i-1]++;
			b[i-1]--;		
		}
	}
	cout << "YES\n";
	cout << a.size() << '\n';
	for (auto u : a) cout << u << ' ';
	cout << "\n";
	cout << b.size() << '\n';
	for (auto u : b) cout << u << ' ';
	return 0;
}

// https://cses.fi/problemset/task/1092/