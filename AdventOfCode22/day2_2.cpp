#include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int helper(int x, int y){
	switch(y){
		case 1: // lose
			switch(x){
				case 1: // rock
					return 3;
				case 2: // paper
					return 1;
				case 3: // scissors
					return 2;
			}
		case 2: // draw
			return x + 3;
		default: // win
			switch(x){
				case 1: // rock
					return 8;
				case 2: // paper
					return 9;
				case 3: // scissors
					return 7;
			}
	}
	return 0;
}

int main() {
	int ans = 0;
	char u, v;
	// map<int, string>rps = {{1, "lose"}, {2, "draw"}, {3, "win"}};
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