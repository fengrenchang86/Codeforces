/*
#include <iostream>
#include <algorithm>
using namespace std;
int a[200200];
int b[200200];
int n, m;
int findVal(int k) {
	int nBegin = 0;
	int nEnd = n;
	int nMid;
	while (nBegin < nEnd) {
		nMid = (nBegin + nEnd) / 2;
		if (a[nMid] <= k) {
			nBegin = nMid + 1;
		}
		else {
			nEnd = nMid;
		}
	}
	return nBegin;
}
void solve()
{
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}
	sort(a, a + n);
	a[n] = 10e9;
	for (i = 0; i < m; i++) {
		printf("%d ", findVal(b[i]));
	}
	printf("\n");
}
int main()
{
	while (scanf("%d %d", &n, &m) != EOF) {
		solve();
	}
	return 0;
}
*/