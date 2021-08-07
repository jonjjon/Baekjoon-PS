#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#pragma warning( disable : 4996 )
using namespace std;


int main() {

	vector<int> input_arr;
	int input;
	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		int num;
		scanf("%d", &num);
		input_arr.push_back(num);
	}

	sort(input_arr.begin(), input_arr.end());
	/*
		(5명)
		1 2 2 3 4

		1 + 2 + 2
	
	
	*/

	int min = 0;
	int invited = 0;
	for (int i = 0; i < input; i++) {
		min = input_arr.at(i);
		invited++;

		if (min+1 == invited) {
			break;
		}
	}
	

	
	printf("%d", min+1);

}

