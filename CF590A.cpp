/*
#include <iostream>
using namespace std;
#define N 500500
bool a[N];
bool fix[N];
int n;
void input() {
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	fix[0] = fix[n - 1] = true;
	for (i = 1; i < n - 1; i++) {
		if (a[i] == a[i - 1] || a[i] == a[i+1]) {
			fix[i] = true;
		}
		else {
			fix[i] = false;
		}
	}
}
void solve()
{
	int ans = 0;
	int i, j, k, m;
	i = j = 0;
	while (i < n) {
		while (i < n && fix[i] == true) {
			i++;
		}
		if (i == n) {
			break;
		}
		for (j = i; j < n; j++) {
			if (fix[j]) {
				break;
			}
		}
		if ((j - i + 1) / 2 > ans) {
			ans = (j - i + 1) / 2;
		}
		if (a[i] != a[j]) {
			while (i < j) {
				a[i] = a[j];
				i++;
			}
		}
		else {
			m = (j - i) / 2;
			for (k = 0; k < m; k++) {
				a[i + k] = a[i - 1];
			}
			i += k;
			for (k = 0; k < m; k++) {
				a[i + k] = a[j];
			}
		}
		i = j;
	}
	printf("%d\n", ans);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main()
{
	while (scanf("%d", &n) != EOF) {
		input();
		solve();
	}
	return 0;
}
*/