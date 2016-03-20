/*
#include <iostream>
using namespace std;
#define N 1230000
char str[N];
int match[N];
char stack[N];
void solve()
{
	int i, top;
	top = 0;
	int ans = 0;
	char ch;
	for (i = 0; str[i] != NULL; i++) {
		if (str[i] == '<' || str[i] == '{' || str[i] == '[' || str[i] == '(') {
			stack[top++] = str[i];
		}
		else {
			if (top == 0) {
				printf("Impossible\n");
				return;
			}
			ch = stack[--top];
			if (str[i] - ch != 1 && str[i] - ch != 2) {
				ans++;
			}
		}
	}
	if (top == 0) {
		printf("%d\n", ans);
	}
	else {
		printf("Impossible\n");
	}
}
int main()
{
	while (scanf("%s", &str) != EOF)
	{
		solve();
	}
	return 0;
}
*/