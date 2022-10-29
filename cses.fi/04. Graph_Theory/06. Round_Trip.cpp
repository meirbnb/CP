#include <iostream>
#include <vector>
#include <cstring>
#include <functional>
 
using namespace std;
 
#define pb push_back
 
const int mxN = 1e5 + 5;
 
int n, m, k;
vector<int>p(mxN, -1);
vector<int>adj[mxN];
 
void hasCycle(int v, int pv=0){
	p[v] = pv;
	for(int u : adj[v]){
		if (pv == u)
			continue;
		if (~p[u] && pv != u){
			vector<int>ans;
			ans.pb(u);
			while(u ^ v){
				ans.pb(v);
				v = p[v];
			}
			ans.pb(v);
			cout << ans.size() << '\n';
			for (int d : ans)
				cout << d << ' ';
			exit(0);
		}
		else hasCycle(u, v);
	}
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
		if (p[v]<0)
			hasCycle(v);
	cout << "IMPOSSIBLE";
	return 0;
}

// https://cses.fi/problemset/task/1669/