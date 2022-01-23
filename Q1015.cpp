#include <iostream>
#include <algorithm>
#include <vector>
//#pragma warning(disable:4996)
using namespace std;


int main(void) {

    int  n;
    scanf("%d\n", &n);
    vector<pair<int, int>> nums;
    vector<int> res(n, 0);
    for (int i = 0; i < n; i++) {
        int tmp;
        scanf("%d", &tmp);
        nums.push_back(make_pair(tmp, i));

    }

    sort(nums.begin(), nums.end());
  
    for (int i = 0; i < n; i++) {
        res[nums[i].second] = i;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}
