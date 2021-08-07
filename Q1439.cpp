#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#pragma warning( disable : 4996 )
using namespace std;


int main() {

	char* inputs = (char*)malloc(sizeof(char)*1000000);
	int res = 0;


	scanf("%s", inputs);
	int len = strlen(inputs);
	int* input = (int*)malloc(sizeof(int) * len);
	for (int i = 0; i < len; i++) {

		input[i] = inputs[i]-'0';

	}


	
	int isZero = 0;
	int isContinued = 0;

	int chunk_0 = 0;
	int chunk_1 = 0;

	for (int i = 0; i < len; i++) {
		if (i == 0) {
			if (input[i] == 0) {
				isZero = 1;
				//printf("%d 1\n", input[i]);
			}
			else {
				isZero = 0;
				//printf("%d 2\n", input[i]);
			}
		}


		else if (i == len-1) {
			if (input[i] == input[i - 1]) {
				if (input[i] == 0) {
					chunk_0++;
					//printf("%d 3\n", input[i]);
				}
				else {
					chunk_1++;
					//printf("%d 4\n", input[i]);
				}
			}
			else {
				chunk_0++;
				chunk_1++;
				//printf("%d 9\n", input[i]);
			}

			
		}
		//0001110101101011101
		// 000 111 0 1 0 11 0 1 0 111 0 1
		else {

			if (isZero==1) { //0인 경우

				if (input[i] == input[i - 1]) { //이어지는 경우
					isContinued = 1;
					//printf("%d 5\n", input[i]);
				}
				else{ //0에서 1로 바뀌는 경우
					isContinued = 0;
					isZero = 0;
					chunk_0++;
					//printf("%d 6\n", input[i]);
				}
				
			}
			else {
				if (input[i] == input[i - 1]) { //이어지는 경우
					isContinued = 1;
					//printf("%d 7\n", input[i]);
				}
				else { //1에서 0로 바뀌는 경우
					isContinued = 0;
					isZero = 1;
					chunk_1++;
					//printf("%d 8\n", input[i]);

				}
			}

		}
	}
	//printf("%d %d\n", chunk_0, chunk_1);
	if (chunk_1 >= chunk_0) {
		res = chunk_0;
	}
	else {
		res = chunk_1;
	}

	printf("%d", res);

}

