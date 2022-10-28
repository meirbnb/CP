#include <iostream>
 
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int ans = n;
	for (int x, i=1; i<n; i++){
		cin >> x;
		ans += i - x;
	}
	cout << ans << '\n';
	return 0;
}
 
// https://cses.fi/problemset/task/1083
