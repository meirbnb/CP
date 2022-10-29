#include <iostream>
 
using namespace std;
 
int rooms=0;
int n, m;
char grid[1000][1000];
 
bool ok(int x, int y){
	if (x < 0 || x >= n || y < 0 || y >= m) return false;
	if (grid[x][y]=='#') return false;
	return true;
}
 
void dfs(int x, int y){
	if (grid[x][y]=='#') return;
	grid[x][y]='#';
	if (ok(x+1,y)) dfs(x+1,y);
	if (ok(x-1,y)) dfs(x-1,y);
	if (ok(x,y+1)) dfs(x,y+1);
	if (ok(x,y-1)) dfs(x,y-1);
}
 
int main(){
	cin >> n >> m;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> grid[i][j];
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if (grid[i][j]=='#') continue;
			++rooms;
			dfs(i,j);
		}
	}
	cout << rooms << '\n';
	return 0;
}

// https://cses.fi/problemset/task/1192/