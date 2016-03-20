/*
#include <iostream>
#include <algorithm>
using namespace std;
#define N 123000
struct ac
{
	int x, y, idx;
}t[N];
int n;
bool cmp(const ac &a, const ac &b)
{
	if (a.x != b.x) {
		return a.x > b.x;
	}
	else {
		return a.y > b.y;
	}
}
void input()
{
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d %d", &t[i].x, &t[i].y);
		t[i].idx = i + 1;
	}
	sort(t, t + n, cmp);
}
void solve() {
	int i;
	long long v1, v2;
	for (i = 2; i < n; i++)
	{
		v1 = (long long)(t[i].y - t[i - 1].y) * (long long)(t[i - 1].x - t[i - 2].x);
		v2 = (long long)(t[i - 1].y - t[i - 2].y) * (long long)(t[i].x - t[i - 1].x);
		if (v1 != v2) {
			printf("%d %d %d\n", t[i].idx, t[i - 1].idx, t[i - 2].idx);
			return;
		}
	}
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