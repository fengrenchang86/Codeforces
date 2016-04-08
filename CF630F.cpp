/*
#include <iostream>
using namespace std;
long long cal(int n, int k) {
	int i;
	long long rs = 1;
	for (i = 0; i < k; i++) {
		rs *= (long long)(n - i);
	}
	for (i = 2; i <= k; i++) {
		rs /= i;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	long long ans = 0;
	if (n < 5) {
		printf("0\n");
	}
	else if (n == 5) {
		printf("1\n");
	}
	else if (n == 6) {
		printf("6\n");
	}
	else {
		ans = cal(n, 5) + cal(n, 6) + cal(n, 7);
		printf("%lld\n", ans);
	}
	return 0;
}
*/