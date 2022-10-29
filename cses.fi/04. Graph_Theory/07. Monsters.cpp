#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
 
using namespace std;
 
#define ff first
#define ss second
 
typedef pair<int, int> pii;
 
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
 
const int INF = 1e6 + 6;
 
int n, m;
 
bool ok(int i, int j){
	return 0<=i&&i<n&&0<=j&&j<m;
}
 
int main(){
	cin >> n >> m;
	char g[n][m];
	queue<pii>q;
	int d1[n][m], d2[n][m];
	map<pii, pii>p;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			d1[i][j] = INF;
			cin >> g[i][j];
			if (g[i][j]=='A'){
				d1[i][j] = 0;
				p[{i, j}] = {-1, -1};
				q.push({i, j});
			}
		}
	}
	while(q.size()){
		auto [x, y] = q.front();	q.pop();
		for (int i=0; i<4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (g[nx][ny]=='#') continue;
			if (ok(nx, ny) && d1[nx][ny]==INF){
				d1[nx][ny] = 1 + d1[x][y];
				p[{nx, ny}] = {x, y};
				q.push({nx, ny});
			}
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			d2[i][j] = INF;
			if (g[i][j]=='M'){
				d2[i][j]=0;
				q.push({i, j});
			}
		}
	}
	while(q.size()){
		auto [x, y] = q.front();	q.pop();
		for (int i=0; i<4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (g[nx][ny]=='#') continue;
			if (ok(nx, ny) && d2[nx][ny]==INF){
				d2[nx][ny] = 1 + d2[x][y];
				q.push({nx, ny});
			}
		}
	}
	int bi=-1, bj=-1;
	for (int i=0; i<n; i++){
		if (bi != -1) break;
		if (d1[i][0]<d2[i][0])
			bi = i, bj = 0;
		if (d1[i][m-1]<d2[i][m-1])
			bi = i, bj = m-1;
	}
	for (int j=0; j<m; j++){
		if (bj != -1) break;
		if (d1[0][j]<d2[0][j])
			bi = 0, bj = j;
		if (d1[n-1][j]<d2[n-1][j])
			bi = n-1, bj = j;
	}
	if (~bi){
		string ans;
		pii s = {bi, bj};
		for (pii e=p[s]; ~e.ff; e=p[e]){
			if (s.ff == e.ff){
				if (s.ss < e.ss)
					ans += 'L';
				else
					ans += 'R';
			} else {
				if (s.ff < e.ff)
					ans += 'U';
				else
					ans += 'D';
			}
			s = e;
		}
		reverse(ans.begin(), ans.end());
		cout << "YES\n" << d1[bi][bj] << '\n' << ans;
	} else {
		cout << "NO";
	}
	return 0;
}

// https://cses.fi/problemset/task/1194/