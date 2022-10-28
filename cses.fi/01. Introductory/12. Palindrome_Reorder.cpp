#include <bits/stdc++.h>
using namespace std;
 
int cnt[26];
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s, ans;
	cin >> s;
	for (auto u : s)
		cnt[u - 'A']++;
	int d = count_if(cnt, cnt + 26, [&](int x){ return x&1; });
	if (s.size() & 1 && d == 1){
		for (int i=0; i<26; i++)
			if (cnt[i] & 1){
				ans += string(cnt[i], 'A' + i);
				cnt[i] = 0;
			}
		for (int i=0; i<26; i++){
			if (cnt[i] & 1 ^ 1){
				ans = ans + string(cnt[i] / 2, 'A' + i);
				ans = string(cnt[i] / 2, 'A' + i) + ans;
				cnt[i] = 0;
			}
		}
	} else if (s.size() & 1 ^ 1 && d <= 1){
		for (int i=0; i<26; i++){
			ans = ans + string(cnt[i] / 2, 'A' + i);
			ans = string(cnt[i] / 2, 'A' + i) + ans;
			cnt[i] = 0;
		}
	} else ans = "NO SOLUTION";
	cout << ans << '\n'; 
	return 0;
}

// https://cses.fi/problemset/task/1755/