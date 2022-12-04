#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long

int ans;

void solve(){
	string x;
	while(2022){
		getline(cin, x);
		if (x.empty())
			break;
			
		int e = x.find(",");
		
		string p = x.substr(0, e);
		string q = x.substr(e + 1);
		
		e = p.find("-");
		
		int a = stoi(p.substr(0, e));
		int b = stoi(p.substr(e + 1));
		
		e = q.find("-");
		
		int c = stoi(q.substr(0, e));
		int d = stoi(q.substr(e + 1));
		
		ans += (a <= c && d <= b) || (c <= a && b <= d);
	}
	cout << ans << '\n';
}	

int main(){
	int tt = 1;
	//cin >> tt;
	while(tt--)
		solve();
	return 0;
}