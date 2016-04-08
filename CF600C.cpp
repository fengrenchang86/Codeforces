/*
#include <iostream>
using namespace std;
int n;
char str[200200];
int dig[30];
void solve()
{
	int i;
	for (i = 0; i <= 26; i++) {
		dig[i] = 0;
	}
	for (i = 0; str[i] != NULL; i++) {
		dig[str[i] - 'a']++;
	}
	n = i;
	int idx = -1;
	int j = 0;
	for (i = 0; i <= 26; i++) {
		if (dig[i] % 2) {
			idx = i;
			j++;
		}
	}
	int m = j / 2;
	int k = 0;
	for (i = 0; i <= 26 && k < m; i++) {
		if (dig[i] % 2) {
			dig[i]++;
			k++;
		}
	}
	m = j / 2;
	k = 0;
	for (i = 26; i >= 0 && k < m; i--) {
		if (dig[i] % 2) {
			dig[i]--;
			k++;
		}
	}
	for (i = 0; i <= 26; i++) {
		if (dig[i] % 2) {
			idx = i;
		}
		for (j = 0; j < dig[i]/2; j++) {
			printf("%c", 'a' + i);
		}
	}
	if (n % 2 == 1) {
		printf("%c", 'a' + idx);
	}
	for (i = 26; i >= 0; i--) {
		for (j = 0; j < dig[i] / 2; j++) {
			printf("%c", 'a' + i);
		}
	}
	printf("\n");
}
int main()
{
	while (scanf("%s", &str) != EOF) {
		solve();
	}
	return 0;
}
*/