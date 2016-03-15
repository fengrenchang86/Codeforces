/*
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

char str[100];
int n;
long long arr[100];
int main()
{
long long ans = 0;
arr[1] = 1;
arr[2] = 2;
int i, j;
for (i = 3; i <= 50; i++)
{
arr[i] = 1;
for (j = 1; j < i; j++)
{
arr[i] += arr[j];
}
}
while (scanf("%d", &n) != EOF)
{
ans = 0;
scanf("%s", &str);
for (i = 0; str[i] != NULL; i++) {
if (str[i] == 'B')
{
ans += arr[i + 1];
}
}
printf("%I64d\n", ans);
}
return 0;
}
*/