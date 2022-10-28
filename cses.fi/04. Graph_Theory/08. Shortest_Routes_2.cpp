#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define pb push_back
#define ll long long
#define pll pair<ll, ll>

const int maxN = 1e5 + 5;

vector<pll>adj[maxN];
ll d[maxN];

void dijkstra(ll v){
	set<pll>q;
	d[v] = 0;
	q.insert({0, v});
	while(q.size()){
		auto cur = *q.begin();
		q.erase(q.begin());
		if (d[cur.S] < cur.F)
			continue;
		for (auto u : adj[cur.S]){
			ll cost = u.F + cur.F;
			if (cost < d[u.S]){
				d[u.S] = cost;
				q.insert({d[u.S], u.S});
			}
		}
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	for (int e=1; e<=m; e++){
		ll a, b, c;
		cin >> a >> b >> c;
		adj[a].pb({c, b});
	}
	
	memset(d, 0x3f, sizeof(d));
	
	dijkstra(1);
	
	for (int v=1; v<=n; v++)
		cout << d[v] << ' ';
	
	return 0;
}
