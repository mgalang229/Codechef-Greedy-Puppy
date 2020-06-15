#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define vi vector<int>
#define pi pair<int,int>

using namespace std;

void decode() {
	int n, k;
	cin >> n >> k;
	int ans = 0;
	for(int i = 1; i <= k; ++i) {
		ans = max(ans, n % i);
	}
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
