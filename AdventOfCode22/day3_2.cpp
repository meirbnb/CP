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
	int cnt = 0;
	map<char, int>freqs;
	while(2022){
		string r;
		getline(cin, r);
		
		if (r.empty())
			break;
			
		
		if (cnt < 3){
			set<char>s(r.begin(), r.end());
			for (char chr : s)
				++freqs[chr];
			++cnt;
		} 
		if (cnt == 3){
			for (auto freq : freqs){
				if (freq.second == 3){
					ans += getPriority(freq.first);
					break;
				}
			}
			cnt = 0;
			freqs.clear();
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
