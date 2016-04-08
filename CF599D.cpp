/*
#include <iostream>
using namespace std;
#define N 8000000
long long x;
int q, t;
long long a[N];
long long b[N];
long long arrx[10000], arry[10000];

void solve() {
	long long i;
	long long m, n;
	if (x == 1) {
		printf("1\n1 1\n");
		return;
	}
	a[1] = b[1] = 1;
	t = 0;
	for (i = 2; i < N; i++) {
		a[i] = a[i - 1] + i * i;
		b[i] = b[i - 1] + i;
	}
	for (i = 1; i < x; i++) {
		m = x - a[i];
		if (m < 0) {
			break;
		}
		if (m % b[i] == 0) {
			arrx[t] = i;
			arry[t] = i + m / b[i];
			t++;
			if (m == 0) {
				break;
			}
		}
	}
	if (arrx[t - 1] == arry[t - 1]) {
		m = 2 * t - 1;
	}
	else {
		m = 2 * t;
	}
	printf("%lld\n", m);
	for (i = 0; i < t; i++) {
		printf("%lld %lld\n", arrx[i], arry[i]);
	}
	i--;
	if (m % 2 == 0 && i >= 0) {
		printf("%lld %lld\n", arry[i], arrx[i]);
	}
	for (i--; i >= 0; i--) {
		printf("%lld %lld\n", arry[i], arrx[i]);
	}
}
int main()
{
	
	while (scanf("%lld", &x) != EOF) {
		solve();
	}
	return 0;
}
*/