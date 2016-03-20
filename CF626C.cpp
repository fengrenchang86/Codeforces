/*
#include <iostream>
using namespace std;
int n, m;
void solve()
{
	int nBegin = 2 * n > 3 * m ? 2 * n : 3 * m;
	int nEnd = 1000000000;
	int nMid, k;
	while (nBegin < nEnd) {
		nMid = (nBegin + nEnd) / 2;
		k = nMid / 2 + nMid / 3 - nMid / 6;
		if (k < n + m) {
			nBegin = nMid + 1;
		}
		else {
			nEnd = nMid;
		}
	}
	printf("%d\n", nBegin);
}
int main()
{
	while (scanf("%d %d", &n, &m) != EOF) {
		solve();
	}
	return 0;
}
*/