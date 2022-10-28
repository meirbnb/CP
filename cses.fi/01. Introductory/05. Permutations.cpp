#include <iostream>
 
using namespace std;
 
typedef long long ll;
 
int main(){
	int n;
	cin >> n;
	if (n <= 3){
		if (n == 1)
			cout << n << '\n';
		else
			cout << "NO SOLUTION\n";
		return 0;
	}
	for (int i=2; i<=n; i+=2)
		cout << i << ' ';
	for (int i=1; i<=n; i+=2)
		cout << i << ' ';
	return 0;
}

// https://cses.fi/problemset/task/1070