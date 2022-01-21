#include <iostream>
#include <vector>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0); //이걸 빼면 시간초과 뜸 
    int n, m;

    while(1){
        cin >> n >> m;
        if(n == 0 && m == 0) break;

        vector<int> cd(n,0); 
        for(int i= 0; i < n; i++)
          cin >> cd[i];

        int cnt = 0;
        for(int i = 0; i < m; i++){
            int tmp; 
            cin >> tmp;
            
            int l = 0; 
            int r = n-1;
            
            while(l <= r){
                int mid = (l + r)/2;
                if(cd[mid] == tmp){
                    cnt++;
                    break;
                }
                else if(cd[mid] > tmp){
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}





