/*
#include <iostream>
using namespace std;
#define N 1010000
int co[N];
int a[N];
int n, k, m;
void input()
{
	int i;
	m = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (m < a[i]) {
			m = a[i];
		}
	}
	for (i = 0; i <= m; i++) {
		co[i] = 0;
	}
}
void solve()
{
	int ans = 0;
	int ax, ay;
	int i, x = 0, z = 0;
	for (i = 0; i < n; i++) {
		if (co[a[i]] == 0) {
			if (z == k) {
				while (x < i) {
					co[a[x]]--;
					if (co[a[x]] == 0) {
						x++;
						break;
					}
					x++;
				}
			}
			else {
				z++;
			}
		}
		if (i - x + 1 > ans) {
			ax = x;
			ay = i;
			ans = i - x + 1;
		}
		co[a[i]] ++;
	}
	printf("%d %d\n", ax+1, ay+1);
}
int main()
{
	while (scanf("%d %d", &n, &k) != EOF)
	{
		input();
		solve();
	}
	return 0;
}
*/