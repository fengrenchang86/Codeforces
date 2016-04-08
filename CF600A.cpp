/*
#include <iostream>
using namespace std;
char str[100100];
char s1[100100];
char s2[100100];
void solve() {
	int i, j, k;
	i = 0, j = 0, k = 0;
	int p = 0;
	bool flag;
	int c1 = 0, c2 = 0;
	while (str[i]) {
		flag = true;
		while (str[i] && str[i] != 44 && str[i] != 59) {
			if (str[i] < '0' || str[i] > '9') {
				flag = false;
			}
			i++;
		}
		if (str[p] == '0' && p+1 != i || p == i) {
			flag = false;
		}
		if (flag) {
			if (c1 > 0) {
				s1[j++] = ',';
			}
			while (p < i) {
				s1[j++] = str[p++];
			}
			c1++;
		}
		else {
			if (c2 > 0) {
				s2[k++] = ',';
			}
			while (p < i) {
				s2[k++] = str[p++];
			}
			c2++;
		}
		if (str[i] != 0 && str[i+1] == 0) {
			if (c2 > 0) {
				s2[k++] = ',';
			}
			c2++;
		}
		else if (str[i] == 0) {
			break;
		}
		p = i + 1;
		i = p;
	}
	if (c1 == 0) {
		printf("-\n");
		s2[k] = 0;
		printf("\"%s\"\n", s2);
	}
	else if (c2 == 0) {
		s1[j] = 0;
		printf("\"%s\"\n-\n", s1);
	}
	else {
		s1[j] = 0;
		s2[k] = 0;
		printf("\"%s\"\n\"%s\"\n", s1, s2);
	}
}
int main()
{
	while (scanf("%s", &str) != EOF) {
		solve();
	}
	return 0;
}
*/