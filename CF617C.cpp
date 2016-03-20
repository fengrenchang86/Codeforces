/*
#include <iostream>
using namespace std;

struct ac
{
	int x, y;
	long long r1, r2;
}t[2100];
int x1, x2, Y1, y2, n;

void input()
{
	scanf("%d %d %d %d", &x1, &Y1, &x2, &y2);
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &t[i].x, &t[i].y);
		t[i].r1 = (long long)(t[i].x - x1) * (long long)(t[i].x - x1) + (long long)(t[i].y - Y1) * (long long)(t[i].y - Y1);
		t[i].r2 = (long long)(t[i].x - x2) * (long long)(t[i].x - x2) + (long long)(t[i].y - y2) * (long long)(t[i].y - y2);
	}
}
void solve()
{
	int i, j;
	long long a, b;
	long long ans = 10e16L;
	long long maxB = 0;
	for (i = 0; i < n; i++)
	{
		if (maxB < t[i].r2) {
			maxB = t[i].r2;
		}
		a = t[i].r1;
		b = 0;
		for (j = 0; j < n; j++)
		{
			if (t[j].r1 > a)
			{
				if (t[j].r2 > b) {
					b = t[j].r2;
				}
			}
		}
		if (a + b < ans) {
			ans = a + b;
		}
	}
	if (ans > maxB) {
		ans = maxB;
	}
	printf("%lld\n", ans);
}
int main()
{
	while (scanf("%d", &n) != EOF)
	{
		input();
		solve();
	}
	return 0;
}
*/