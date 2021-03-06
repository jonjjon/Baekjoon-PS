#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

bool compare_f(string str1, string str2) {
	if (str1.length() < str2.length())
		return true;
	else if (str1.length() == str2.length()) {
		if (str1.compare(str2) >= 0) {
			return false;
		}
		else
			return true;
	}
	else
		return false;
}

int main() {

	vector<string> input_arr;
	int input;
	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		string word;
		cin >> word;
		input_arr.push_back(word);
	}

	sort(input_arr.begin(), input_arr.end(), compare_f);

	for (int i = 0; i < input; i++) {
		if (i == 0) {
			cout << input_arr.at(i) << endl;
		}
		else {
			if (input_arr.at(i-1).length() == input_arr.at(i).length()) {
				if (input_arr.at(i-1).compare(input_arr.at(i)) == 0) {
				}
				else {
					cout << input_arr.at(i) << endl;
				}
			}
			else {
				cout << input_arr.at(i) << endl;
			}
		}

	}

}

