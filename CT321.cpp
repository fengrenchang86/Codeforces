/*

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
#define MAXN 120000
struct NODE
{
	int v;
	NODE* next;
}table[MAXN];

int n, m, ans;
bool use[MAXN];
bool cat[MAXN];
void insert(int x, int y)
{
	NODE *p = new NODE();
	p->v = y;
	p->next = table[x].next;
	table[x].next = p;
}
void input()
{
	int i, x, y;
	for (i = 1; i <= n; i++)
	{
		table[i].next = NULL;
		scanf("%d", &x);
		cat[i] = x;
	}
	for (i = 1; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		insert(x, y);
		insert(y, x);
	}
}
void dfs(int v, int catNum)
{
	use[v] = true;
	if (catNum > m) {
		return;
	}
	int leaves = 0;
	NODE *p = table[v].next;
	while (p != NULL)
	{
		if (!use[p->v])
		{
			if (cat[p->v] == false) {
				dfs(p->v, 0);
			}
			else {
				dfs(p->v, catNum + 1);
			}
			leaves++;
		}
		p = p->next;
	}
	if (leaves == 0)
	{
		ans++;
	}
}
void solve()
{
	int i;
	for (i = 1; i <= n; i++)
	{
		use[i] = false;
	}
	ans = 0;
	dfs(1, cat[1]);
	printf("%d\n", ans);
}

int main()
{
	while (scanf("%d %d", &n, &m) != EOF)
	{
		input();
		solve();
	}
	return 0;
}
*/