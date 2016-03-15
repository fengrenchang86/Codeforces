/*
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
int n, k, x;
int a[210000];
int idx;
long long p, ans;
void input()
{
int i;
idx = 0;
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
if (a[i] > a[idx])
idx = i;
}
}
long long acPower(int a, int b)
{
if (b == 0) {
return 1;
}
else if (b == 1) {
return a;
}
long long rt = acPower(a, b / 2);
rt *= rt;
if (b % 2 == 1) {
rt *= (long long)a;
}
return rt;
}
void solve(long long val, int begin, int end)
{
if (begin == end) {
long long v = (long long)a[begin] * p;
v |= val;
if (v > ans) {
ans = v;
}
return;
}
int mid = (begin + end) / 2;
int i;
long long v1, v2;
v1 = v2 = val;
for (i = begin; i <= mid; i++) {
v1 |= (long long)a[i];
}
for (i = mid + 1; i <= end; i++) {
v2 |= (long long)a[i];
}
solve(v2, begin, mid);
solve(v1, mid + 1, end);
}
int main()
{
long long v;
int i;
while (scanf("%d %d %d", &n, &k, &x) != EOF)
{
input();
v = acPower(x, k);
p = v;
ans = a[0];
solve(0, 0, n - 1);
printf("%I64d\n", ans);
}
return 0;
}
*/