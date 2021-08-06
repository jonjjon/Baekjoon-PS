/*

시간을 줄이는 게 중요했다.
굳이 dp로 풀 이유는 없다
조합으로 풀면 되고, 조합은 팩토리얼로도 구현가능!
팩토리얼은 재귀나 for문으로도 가능!

*/
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning( disable : 4996 )

using namespace std;

long long factorial(long long n, long long m) {

	long long res = 1;
	for (int i = 0; i < m; i++) {
		if (n - i == 1)break;
		res *= (n - i);
	}
	return res;

}

long long getCombination(long long n, long long m) {
	long long res = 0;
	if (factorial(m, m) != 0) {
		res = factorial(n, m) / factorial(m, m);
		return res;
	}
	else {
		res = -1;
		return res;

	}
}


int main() {
	vector<pair<int, int>> input_arr;
	int input;
	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		int a;
		int b;
		scanf("%d %d", &a, &b);
		input_arr.push_back(make_pair(b, a));
	}
	for (int i = 0; i < input; i++) {
		long long n = (long long)input_arr.at(i).first;
		long long m = (long long)input_arr.at(i).second;
		if (m > n - m) m = n - m;
		printf("%lld\n", getCombination(n, m));
	}


}


/*
*/
