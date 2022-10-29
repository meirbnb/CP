#include <iostream>
#include <vector>
#include <cstring>
#include <functional>
 
using namespace std;
 
#define pb push_back
 
const int mxN = 1e5 + 5;
 
int n, m, k;
vector<int>c(mxN, -1);
vector<int>adj[mxN];
 
void dfs(int v, int cv=0){
	if (~c[v]){
		if (c[v] ^ cv){
			cout << "IMPOSSIBLE";
			exit(0);
		}
		return;
	}
	c[v] = cv;
	for (int u : adj[v])
		dfs(u, cv ^ 1);
}
 
int main(){
	cin >> n >> m;
	for (int e=1; e<=m; e++){
		int u, v;
		cin >> u >> v;
		adj[v].pb(u);
		adj[u].pb(v);
	}
	for (int v=1; v<=n; v++)
		if (c[v]==-1)
			dfs(v);
	for (int v=1; v<=n; v++)
		cout << 1 + c[v] << ' ';
	return 0;
}

// https://cses.fi/problemset/task/1668/