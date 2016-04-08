/*
#include <iostream>
using namespace std;
int a[200100];
int n;
void solve() {
	int i, x;
	long long ans = 0;
	for (i = 1; i <= n; i++) {
		scanf("%d", &x);
		a[x] = i;
	}
	ans = 0;
	for (i = 2; i <= n; i++) {
		if (a[i] >= a[i - 1]) {
			ans += a[i] - a[i - 1];
		}
		else {
			ans += (a[i - 1] - a[i]);
		}
	}
	printf("%lld\n", ans);
}
int main()
{
	while (scanf("%d", &n) != EOF) {
		solve();
	}
	return 0;
}

*/