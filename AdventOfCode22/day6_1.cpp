#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long

int ans;

void solve(){
	string s;
	cin >> s;
	int N = s.length();
	int K = 4;
	for (int i=0; i<N-K+1; i++){
		string cur = s.substr(i, K);
		set<char>st(cur.begin(), cur.end());
		if (st.size() == K){
			cout << i + K << '\n';
			return;
		}
	}
	cout << "nothing found!\n";
}	

int main(){
	int tt = 1;
	//cin >> tt;
	while(tt--)
		solve();
	return 0;
}