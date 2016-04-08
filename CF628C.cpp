/*
#include <iostream>
using namespace std;
#define N 100100
int n, k;
char str[N];
void solve() {
	int i;
	int m = 0, x, y, z;
	for (i = 0; str[i] != NULL; i++) {
		x = str[i] - 'a';
		y = 'z' - str[i];
		m += x > y ? x : y;
	}
	if (m < k) {
		printf("-1\n");
		return;
	}
	m = k;
	for (i = 0; str[i] != NULL && m > 0; i++) {
		x = str[i] - 'a';
		y = 'z' - str[i];
		z = x > y ? x : y;
		if (m >= z) {
			if (x > y) {
				str[i] = 'a';
			}
			else {
				str[i] = 'z';
			}
			m -= z;
		}
		else if (m <= x) {
			str[i] -= m;
			m = 0;
			break;
		}
		else if (m <= y) {
			str[i] += (m);
			m = 0;
			break;
		}
	}
	printf("%s\n", str);
}
int main()
{
	while (scanf("%d %d", &n, &k) != EOF) {
		scanf("%s", &str);
		solve();
	}
	return 0;
}
*/