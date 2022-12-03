#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long

int getPriority(char x){
	if ('a' <= x && x <= 'z')
		return x-'a'+1;
	return x-'A'+27;
}

int ans;

void solve(){
	while(2022){
		string r;
		getline(cin, r);
		
		if (r.empty())
			break;
		
		set<char>s(r.begin(), r.begin() + r.size() / 2);
		
		for (auto chr = r.begin() + r.size() / 2; chr != r.end(); chr++){
			if (s.count(*chr)){
				ans += getPriority(*chr);
				break;
			}
		}
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
