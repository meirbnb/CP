#include <bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
 
const int MAX_N = 1e5 + 123;
 
vector<int>adj[MAX_N];
vector<bool>used(MAX_N, false);
int cnt=0;
vector<int>comps[MAX_N];
 
void dfs(int v){
	if (used[v]) return;
	used[v]=true;
	comps[cnt].pb(v);
	for (auto u : adj[v])
			dfs(u);
}
 
int main(){
	int N, M;
	cin >> N >> M;
	while(M--){
		int u, v;
		cin >> u >> v;
		--u; --v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	vector<int>ans;
	for (int v=0; v<N; v++){
		if (used[v]) continue;
		dfs(v);
		cnt++;
	}
	cout << cnt - 1 << '\n';
	for (int i=0; i<cnt-1; i++){
		cout << 1 + comps[i][0]  << ' ' << 1 + comps[i+1][0] << '\n';
	}
	return 0;
}

// https://cses.fi/problemset/task/1666