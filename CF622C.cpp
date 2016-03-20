#include <iostream>
using namespace std;
#define N 200100
int a[N], pre[N];
int n, m;
void input()
{
	int i;
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
}
void solve()
{
	int i;
	pre[0] = -1;
	for (i = 2; i <= n; i++) {
		if (a[i] != a[i - 1]) {
			pre[i] = i - 1;
		}
		else {
			pre[i] = pre[i - 1];
		}
	}
	int l, r, x;
	for (i = 0; i < m; i++) {
		scanf("%d %d %d", &l, &r, &x);
		if (a[r] != x) {
			printf("%d\n", r);
		}
		else {
			r = pre[r];
			if (r >= l) {
				printf("%d\n", r);
			}
			else {
				printf("-1\n");
			}
		}
	}
}
int main()
{
	while (scanf("%d %d", &n, &m) != EOF) {
		input();
		solve();
	}
	return 0;
}