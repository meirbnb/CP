#include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

// considered all combinations C(3, 2) = 6
int helper(int x, int y){
	if (x == 1 && y == 3) // rock vs scissors
		return 3;
	if (y == 1 && x == 3) // scissors vs rock
		return 7;
	
	if (x == 3 && y == 2) // scissors vs paper
		return 2;
	if (y == 3 && x == 2) // paper vs scissors
		return 9;
	
	if (x == 1 && y == 2) // rock vs paper
		return 8;
	if (y == 1 && x == 2) // paper vs rock
		return 1;
	
	return y + 3; // if both same
}

int main() {
	int ans = 0;
	char u, v;
	while(cin >> u >> v){
		if (u == '0')
			break;
		int p = u - 'A' + 1;
		int q = v - 'A' - 22;
		ans += helper(p, q);
	}
	cout << "\nTotal: " << ans << '\n';
	return 0;
}