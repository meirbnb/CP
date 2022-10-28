#include <iostream>
 
using namespace std;
 
typedef long long ll;
 
int main(){
	ll n;
	cin >> n;
	while(n > 1){
		cout << n << ' ';
		if (n & 1)
			n = 3 * n + 1;
		else
			n = n / 2;
	}
	cout << n;
	return 0;
}

// https://cses.fi/problemset/task/1068