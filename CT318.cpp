/*
http://codeforces.com/contest/611/problem/E
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define MAXN 201000
int n;
struct ac
{
	int nMax;
	int c;
}tree[MAXN * 3];
int a, b, c, m;
int v[MAXN];
int getMax(int x, int y) {
	return x > y ? x : y;
}
void init(int i, int x, int y) {
	tree[i].c = 0;
	tree[i].nMax = -1;
	if (x == y) {
		return;
	}
	int mid = (x + y) / 2;
	init(i * 2, x, mid);
	init(i * 2 + 1, mid + 1, y);
}
void insert(int i, int x, int y, int val) {
	tree[i].c++; 
	if (x == y) {
		return;
	}
	int mid = (x + y) / 2;
	if (val <= mid) {
		insert(i * 2, x, mid, val);
	}
	else {
		insert(i * 2 + 1, mid + 1, y, val);
	}
	tree[i].nMax = getMax(tree[i * 2].nMax, tree[i * 2 + 1].nMax);
}
int findMax(int i, int x, int y, int from, int to) {
	if (from == x && to == y) {
		return tree[i].nMax;
	}
	int mid = (x + y) / 2;
	if (to <= mid) {
		return findMax(i * 2, x, mid, from, to);
	}
	else if (from > mid) {
		return findMax(i * 2 + 1, mid + 1, y, from, to);
	}
	else {
		int rt = findMax(i * 2 + 1, mid + 1, y, mid + 1, to);
		if (rt <= 0) {
			rt = findMax(i * 2, x, mid, from, mid);
		}
		return rt;
	}
}
void delMax(int i, int x, int y, int val) {
	if (x == y) {
		tree[i].c--;
		if (tree[i].c == 0) {
			tree[i].nMax = -1;
		}
	}
	int mid = (x + y) / 2;
	if (val <= mid) {
		delMax(i * 2, x, mid, val);
	}
	else if (val > mid) {
		delMax(i * 2 + 1, mid + 1, y, val);
	}
	tree[i].nMax = getMax(tree[i * 2].nMax, tree[i * 2 + 1].nMax);
}
void solve() {
	int i;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c) {
		i = a;
		a = c;
		c = i;
	}
	if (a > b) {
		i = a;
		a = b;
		b = i;
	}
	m = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
		if (v[i] > m) {
			m = v[i];
		}
	}
	init(1, 1, m);
	for (i = 0; i < n; i++) {
		insert(1, 1, m, v[i]);
	}
	int ans = 0;
	int big, k;
	for (i = 0; i < n; i++) {
		big = tree[i].nMax;
		if (big == 0) {
			break;
		}
		if (a >= big) {
			ans += (i + 1) / 3;
			break;
		}
		if (b >= big) {
			k = findMax(1, 1, m, 1, c);
			if (k > 0) {
				delMax(1, 1, m, k);
			}
			else {
				break;
			}
			k = findMax(1, 1, m, 1, a);
			if (k > 0) {
				delMax(1, 1, m, k);
			}
		}
		else if (c >= big) {
			k = findMax(1, 1, m, 1, b);
			if (k > 0) {
				delMax(1, 1, m, k);
			}
			else {
				break;
			}
			k = findMax(1, 1, m, 1, a);
			if (k > 0) {
				delMax(1, 1, m, k);
			}
		}
	}
}
int main() {
	while (scanf("%", &n) != EOF) {
		solve();
	}
	return 0;
}
*/