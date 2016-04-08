/*
#include <iostream>
#include <math.h>
using namespace std;
int n;
#define MIN -10e9
#define MAX 10e9

void solve()
{
	double pi = 2.0 * asin(1.0);
	int i;
	double d, k, px, py, x, y, prex, prey, fx, fy;
	scanf("%lf %lf", &px, &py);
	scanf("%lf %lf", &prex, &prey);
	fx = prex;
	fy = prey;
	double a = MIN, b = MAX;
	for (i = 1; i < n; i++) {
		scanf("%lf %lf", &x, &y);
		d = (double)(x - px) * (double)(x - px) + (double)(y - py) * (double)(y - py);
		if (d > a) {
			a = d;
		}
		if (x == prex) {
			d = (x - px) * (x - px);
		}
		else {
			k = (double)(y - prey) / (double)(x - prex);
			d = px * k - py + y - k * x;
			d *= d;
			d /= (k * k + 1.0);
		}
		if (d < b) {
			b = d;
		}
		prex = x;
		prey = y;
	}
	x = fx;
	y = fy;
	d = (double)(x - px) * (double)(x - px) + (double)(y - py) * (double)(y - py);
	if (d > a) {
		a = d;
	}
	if (x == prex) {
		d = (x - px) * (x - px);
	}
	else {
		k = (double)(y - prey) / (double)(x - prex);
		d = px * k - py + y - k * x;
		d *= d;
		d /= (k * k + 1.0);
	}
	if (d < b) {
		b = d;
	}
	d = pi * (a - b);
	printf("%.12lf\n", d);
}
int main()
{
	while (scanf("%d", &n) != EOF) {
		solve();
	}
	return 0;
}
*/