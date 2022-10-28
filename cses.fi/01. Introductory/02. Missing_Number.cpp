#include <iostream>
 
using namespace std;
 
int n, ans;
 
int main() {
	cin >> n;
	for (int x, i=1; i<n; i++){
		cin >> x;
		ans += i - x;
	}
	cout << ans + n << '\n';
	return 0;
}

// https://cses.fi/problemset/task/1083