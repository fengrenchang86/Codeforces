#include <iostream>
using namespace std;
int dp[520][520];
int a[520];
int n;
int calc(int x, int y) {
	if (dp[x][y] != -1) {
		return dp[x][y];
	}
	if (x >= y) {
		dp[x][y] = 1;
		return 1;
	}
	else if (x + 1 == y) {
		if (a[x] == a[y]) {
			dp[x][y] = 1;
		}
		else {
			dp[x][y] = 2;
		}
		return dp[x][y];
	}
	dp[x][y] = calc(x + 1, y) + 1;
	int i, rt;
	for (i = x + 1; i <= y; i++) {
		if (a[x] == a[i]) {
			rt = calc(x + 1, i - 1);
			if (i < y) {
				rt += calc(i + 1, y);
			}
			dp[x][y] = dp[x][y] < rt ? dp[x][y] : rt;
		}
	}
	
	return dp[x][y];
}
void input() {
	int i, j;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			dp[i][j] = -1;
		}
	}
}
int main() {
	while (scanf("%d", &n) != EOF) {
		input();
		int rt = calc(0, n - 1);
		printf("%d\n", rt);
	}
	return 0;
}