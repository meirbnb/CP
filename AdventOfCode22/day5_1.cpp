#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long

const int defN = 8;
const int maxN = 10;
vector<char>s[maxN];

string ans;

void solve(){
	for (int i=1; i<=defN; i++){
		int id = 1;
		string e;
		getline(cin, e);
		for (int k=1; k<e.length()-1; k+=4){
			char p = e[k-1];
			char c = e[k];
			char n = e[k+1];
			s[id].insert(s[id].begin(), c);
			++id;
		}
	}
	stack<char>st[10];
	for (int i=1; i<=defN+1; i++){
		for (char u : s[i])
			if (u != ' ')
				st[i].push(u);
	}

	string x;
	getline(cin, x);
	getline(cin, x);
	
	while(2022){
		int a, b, c;
		cin >> x;
		if (x == "end")
			break;
		cin >> c >> x >> a >> x >> b;
		for (int i=1; i<=c; i++)
			st[b].push(st[a].top()), st[a].pop();
	}
	
	for (int i=1; i<=defN+1; i++)
		ans += st[i].top();
		
	cout << ans << '\n';
	
	
}	

int main(){
	int tt = 1;
	//cin >> tt;
	while(tt--)
		solve();
	return 0;
}