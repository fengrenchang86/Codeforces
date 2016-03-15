/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define MAXN 5020
#define INF 1000000000
#define MOD 1000000007
char s[MAXN];
int dp[MAXN][MAXN];
int su[MAXN][MAXN];
int same[MAXN][MAXN];
int n;
void solve() {
	dp[0][1] = 1;
	su[0][1] = 1;
	int i, j, k;
	int flag;
	for (i = n - 1; i >= 0; i--) {
		for (j = i - 1; j >= 0; j--) {
			if (s[i] == s[j]) {
				if (i + 1 < n && j + 1 < i) {
					same[i][j] = same[i + 1][j + 1] + 1;
				}
				else {
					same[i][j] = 1;
				}
			}
			else {
				same[i][j] = 0;
			}
		}
	}
	for (i = 1; i < n; i++) {
		su[i][0] = 0;
		for (j = 1; j < i + 1; j++) {
			if (s[i - j + 1] == '0') {
				dp[i][j] = 0;
			}
			else if (i - j - j + 1 < 0) {
				dp[i][j] = su[i - j][i - j + 1];
			}
			else {
				flag = 0;
				if (s[i - j - j + 1] != '0') {
					k = same[i - j + 1][i - j - j + 1];
					if (k < j) {
						if (s[i - j - j + 1 + k] < s[i - j + 1 + k]) {
							flag = 1;
						}
					}
				}

				if (flag == 1) {
					dp[i][j] = su[i - j][j];
				}
				else {
					dp[i][j] = su[i - j][j - 1];
				}
			}

			su[i][j] = (su[i][j - 1] + dp[i][j]) % MOD;
		}
		dp[i][i + 1] = 1;
		su[i][i + 1] = (su[i][i] + 1) % MOD;
	}
	printf("%d\n", su[n - 1][n]);
}
int main() {
	printf("done\n");
	return 1;
	while (scanf("%d %s", &n, &s) != EOF) {
		solve();
	}
	return 0;
}*/