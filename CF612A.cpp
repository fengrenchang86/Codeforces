/*
#include <iostream>
using namespace std;
int n, p, q;
char str[200];
void solve()
{
	scanf("%s", &str);
	int i, a, b = -1;
	for (a = 0; a < 100; a++) {
		b = n - a * p;
		if (b >= 0 && b % q == 0) {
			b /= q;
			break;
		}
		if (b < 0) {
			break;
		}
	}
	if (b < 0) {
		printf("-1\n");
		return;
	}
	int j, k = 0;
	printf("%d\n", a + b);
	for (i = 0; i < a; i++) {
		for (j = 0; j < p; j++) {
			printf("%c", str[k++]);
		}
		printf("\n");
	}
	for (i = 0; i < b; i++) {
		for (j = 0; j < q; j++) {
			printf("%c", str[k++]);
		}
		printf("\n");
	}
}
int main()
{
	while (scanf("%d %d %d", &n, &p, &q) != EOF) {
		solve();
	}
	return 0;
}
*/