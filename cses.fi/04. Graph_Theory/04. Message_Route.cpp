#include <iostream>
#include <vector>
#include <queue>
 
using namespace std;
 
#define pb push_back
 
int main(){
	int n, m;
	cin >> n >> m;
	vector<int>adj[1 + n];
	for (int e=1, u, v; e<=m; e++){
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	queue<int>q;
	vector<int>d(1 + n, -1), p(1 + n, -1);
	d[1] = 0;
	q.push(1);
	while(q.size()){
		int v = q.front();
		q.pop();
		for (auto u : adj[v]){
			if (~d[u])
				continue;
			d[u] = 1 + d[v];
			p[u] = v;
			q.push(u);
		}
	}
	if (~d[n]){
		vector<int>path;
		for (int i=n; ~i; i=p[i])
			path.pb(i);
		cout << path.size() << '\n';
		for (auto it = path.rbegin(); it != path.rend(); ++it)
			cout << *it << ' ';
	} else {
		cout << "IMPOSSIBLE";
	}
	cout << '\n';
	return 0;
}

// https://cses.fi/problemset/task/1667