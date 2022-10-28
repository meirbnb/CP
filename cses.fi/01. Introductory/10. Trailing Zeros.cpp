#include <bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
 
int main(){
	int n, ans(0);
	cin >> n;
	for (int i=5; i<=n; i+=5){
		int k=i;
		while(k%5==0){
			ans++;
			k/=5;
		}
	}
	cout << ans;
	return 0;
}

// https://cses.fi/problemset/task/1618/