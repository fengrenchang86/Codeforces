#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
/*
int X1, Y1, X2, Y2, X3, Y3;
int n;
char b[500][500];
void wfFill(int x, int y, int px, int py, char ch)
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			b[px + i][py + j] = ch;
		}
	}
}
void solve()
{
	char ans[3] = {'A', 'B', 'C'};
	int i, j, t;
	int k = (int)sqrt((double)n);
	if (k * k != n)
	{
		printf("-1\n");
		return;
	}
	if (X1 != k && Y1 != k && X2 != k && Y2 != k && X3 != k && Y3 != k)
	{
		printf("-1\n");
		return;
	}
	if (Y1 == k){}
	else if (X1 == k)
	{
		t = X1;
		X1 = Y1;
		Y1 = t;
	}
	else if (X2 == k)
	{
		t = X1;
		X1 = Y2;
		Y2 = t;
		t = X2;
		X2 = Y1;
		Y1 = t;
		ans[0] = 'B';
		ans[1] = 'A';
	}
	else if (Y2 == k)
	{
		t = X1;
		X1 = X2;
		X2 = t;
		t = Y1;
		Y1 = Y2;
		Y2 = t;
		ans[0] = 'B';
		ans[1] = 'A';
	}
	else if (X3 == k)
	{
		t = X1;
		X1 = Y3;
		Y3 = t;
		t = X3;
		X3 = Y1;
		Y1 = t;
		ans[0] = 'C';
		ans[2] = 'A';
	}
	else if (Y3 == k)
	{
		t = X1;
		X1 = X3;
		X3 = t;
		t = Y1;
		Y1 = Y3;
		Y3 = t;
		ans[0] = 'C';
		ans[2] = 'A';
	}
	
	if (Y2 + X1 == k || X2 == k)
	{
		t = X2;
		X2 = Y2;
		Y2 = t;
	}
	
	if (Y3 + X1 == k || X3 == k)
	{
		t = X3;
		X3 = Y3;
		Y3 = t;
	}
	if ((X1 + X2 != k || X1 + X3 != k || Y2 + Y3 != k) && !(Y1 == Y2 && Y2 == Y3 && Y3 == k))
	{
		printf("-1\n");
		return;
	}
	wfFill(X1, Y1, 0, 0, ans[0]);
	wfFill(X2, Y2, X1, 0, ans[1]);
	if (Y2 != k) {
		wfFill(X3, Y3, X1, Y2, ans[2]);
	}
	else
	{
		wfFill(X3, Y3, X1 + X2, 0, ans[2]);
	}
	printf("%d\n", k);
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < k; j++)
			printf("%c", b[i][j]);
		printf("\n");
	}
}
int main()
{
	
	while (scanf("%d %d %d %d %d %d", &X1, &Y1, &X2, &Y2, &X3, &Y3) != EOF)
	{
		n = X1 * Y1 + X2 * Y2 + X3 * Y3;
		solve();
	}
	return 0;
}
*/