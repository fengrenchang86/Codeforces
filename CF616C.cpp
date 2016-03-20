/*
#include <iostream>
using namespace std;
int n, m;
#define N  1001
char b[N][N];
int father[N*N];
char sonNum[N * N];
int getFather(int p) {
	int v = p;
	while (father[v] != -1 && father[v] != v) {
		v = father[v];
	}
	father[p] = v;
	v = p;
	while (father[v] != -1 && father[v] != v) {
		father[v] = father[p];
		v = father[v];
	}
	return father[p];
}
void solve()
{
	int i, j, p, f, f1, f2, f3, f4;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			p = i*m + j;
			father[p] = -1;
			sonNum[p] = 1;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (b[i][j] == '.') {
				p = i * m + j;
				if (i >= 1 && b[i - 1][j] == '.') {
					f = getFather((i - 1)*m + j);
					father[p] = f;
					sonNum[f] = (sonNum[f] + 1) % 10;
					sonNum[p] = 0;
				}
				if (j >= 1 && b[i][j - 1] == '.') {
					f = getFather(i*m + j - 1);
					f2 = getFather(p);
					if (f != f2) {
						father[f2] = f;
						sonNum[f] += sonNum[f2];
						sonNum[f] %= 10;
						sonNum[f2] = 0;
					}
				}
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (b[i][j] == '*') {
				p = 1;
				f1 = f2 = f3 = f4 = -1;
				if (i >= 1 && b[i - 1][j] == '.') {
					f1 = getFather((i - 1)*m + j);
					p += sonNum[f1];
				}
				if (j >= 1 && b[i][j - 1] == '.') {
					f2 = getFather(i*m + j - 1);
					if (f2 != f1) {
						p += sonNum[f2];
					}
				}
				if (i + 1 < n && b[i + 1][j] == '.') {
					f3 = getFather((i + 1)*m + j);
					if (f3 != f1 && f3 != f2) {
						p += sonNum[f3];
					}
				}
				if (j + 1 < m && b[i][j + 1] == '.') {
					f4 = getFather(i * m + j + 1);
					if (f4 != f1 && f4 != f2 && f4 != f3) {
						p += sonNum[f4];
					}
				}
				p %= 10;
				b[i][j] = (char)(p + '0');
			}
		}
		printf("%s\n", b[i]);
	}
}
int main()
{
	int i;
//	i = sizeof(b) + sizeof(father) + sizeof(sonNum);
//	printf("%d\n", i);
	while (scanf("%d %d", &n, &m) != EOF)
	{
		for (i = 0; i < n; i++) {
			scanf("%s", &b[i]);
		}
		solve();
	}
	return 0;
}
*/