#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long

int toInt(string x){
	int res = 0;
	for (char c : x)
		res = res * 10 + (c - '0');
	return res;
}

void solve(){
	int su = 0;
	vector<int>v;
	while(2022){
		string x;
		getline(cin, x);
		if (!x.length() && !su)
			break;
		if (x.empty())
			v.pb(su), su = 0;
		else 
			su += toInt(x);
	}
	cout << v.back() << endl;
}

int main(){
	int tt = 1;
	//cin >> tt;
	while(tt--)
		solve();
	return 0;
}
