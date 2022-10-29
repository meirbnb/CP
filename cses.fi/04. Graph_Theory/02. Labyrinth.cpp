#include <bits/stdc++.h>
 
using namespace std;
 
#define F first
#define S second
#define mp make_pair
#define pb push_back
 
int main(){
	int n, m, si=0, sj=0, ni=0, nj=0;
	cin >> n >> m;
	string t[n];
	for (int i=0; i<n; i++){
		cin >> t[i];
		for (int j=0; j<m; j++){
			if (t[i][j]=='A'){
				si=i; sj=j;
				t[i][j]='.';
			} else if (t[i][j]=='B'){
				ni=i; nj=j;
				t[i][j]='.';
			}
		}
	}
	queue<pair<int,int>>q;
	map<pair<int,int>, pair<int,int>>pred;
	int dir[][2] = {{0,1},{1,0},{0,-1},{-1,0}};
	pred[mp(si,sj)]=mp(-1,-1);
	t[si][sj]='#';
	q.push(mp(si,sj));
	auto ok = [&](int x, int y){ return 0<=x&&x<n&&0<=y&&y<m&&t[x][y]!='#'; };
	while(q.size()){
		auto cur = q.front();
		q.pop();
		for (auto d : dir){
			int x = cur.first + d[0];
			int y = cur.second + d[1];
			if (ok(x,y)){
				t[x][y]='#';
				pred[mp(x,y)]=cur;
				q.push(mp(x,y));
			}
		}
	}
	if (t[ni][nj]!='#'){
		cout << "NO";
		return 0;
	}
	cout << "YES\n";
	pair<int,int>p;
	string path;
	for (p=pred[mp(ni, nj)]; p!=mp(-1,-1); p=pred[p]){
		int i = p.F,	j = p.S;
		if (ni < i){
			path.pb('U');
			ni = i;
		} else if (ni > i){
			path.pb('D');
			ni = i;
		}
		if (nj < j){
			path.pb('L');
			nj = j;
		} else if (nj > j){
			path.pb('R');
			nj = j;
		}
	}
	cout << path.length() << '\n';
	reverse(path.begin(), path.end());
	cout << path << '\n';
	return 0;
}

// https://cses.fi/problemset/task/1193