/*
#include <iostream>
using namespace std;
int n;
int a[100100];
int x[100100];
int y[100100];
void input()
{
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	x[0] = a[0];
	for (i = 1; i < n; i++) {
		x[i] = a[i] > x[i - 1] ? a[i] : x[i - 1];
	}
	y[n - 1] = a[n - 1];
	for (i = n - 2; i >= 0; i--) {
		y[i] = a[i] < y[i + 1] ? a[i] : y[i + 1];
	}
	int ans = 1;
	for (i = 0; i < n - 1; i++) {
		if (x[i] <= y[i + 1]) {
			ans++;
		}
	}

	printf("%d\n", ans);
}
int main()
{
	while (scanf("%d", &n) != EOF) {
		input();
	}
	return 0;
}
*/