#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n+10];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int end = unique(a + 1, a + n + 1) - a;

	int res[n+10][n+10];
	memset(res, 0, sizeof res);

	for (int t = 2; t < end; t++) {
		for (int l = 1; l < end; l++) {
			if (l + t > end) {
				continue ;
			}

			if (a[l] == a[l + t - 1]) 
				res[l][l+t] = res[l+1][l+t-1] + 1;
			else
				res[l][l+t] = min(res[l+1][l+t], res[l][l+t-1]) + 1;
		}
	}

	cout << res[1][end] << endl;
}
