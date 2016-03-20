
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define MAXN 200100
#define INF 1000000000
#define MOD 1000000007
bool p[MAXN];
void initPrime() {
	int i = 0;
	for (i = 0; i < MAXN; i++) {
		p[i] = true;
	}
	int j;
	for (i = 2; i < MAXN; i++) {
		if (!p[i]) {
			continue;
		}
		for (j = 2; i * j < MAXN; j++) {
			p[i*j] = false;
		}
	}
	j = 0;
	for (i = 2; i < MAXN; i++) {
		if (p[i]) {
			j++;
		}
	}
	printf("%d\n", j);
}
int n;

int main() {
	initPrime();
	return 0;
}
*/