#include <cstdio>
#include <iostream>

int main() {
	int input;
	int init;
	int res=0;
	scanf("%d", &input);
	init = input;

	while (init>=0){
		if (init == 64) {
			res = 1;
			break;
		}
		else if (init >= 32) {
			init-= 32;
			res++;
		}
		else if (init >= 16) {
			init -= 16;
			res++;
		}
		else if (init >= 8) {
			init -= 8;
			res++;
		}
		else if (init >= 4) {
			init -= 4;
			res++;
		}
		else if (init >= 2) {
			init -= 2;
			res++;
		}
		else if (init >= 1) {
			init -= 1;
			res++;
		}
		else {
			break;
		}
	}
	printf("%d", res);
}
