#include <bits/stdc++.h>
using namespace std;
int main(){
    printf("Ho Va Ten: Tran Thi Anh\n");
    printf("MSSV: 20204512\n\n");
    int n;
    cin >> n;
    int ans = 0, sum = 0;
    while(n--){
        int k, t;
        cin >> k >> t;

        if(t == 1){
            while(k--){
                int a;
                cin >> a;
                sum += a;
                ans = max(ans, -sum);
            }
        } else {
            while(k--){
                int a;
                cin >> a;
                sum -= a;
                ans = max(ans, -sum);
            }
        }
    }
    cout << "Output: ";
    cout << ans;
}

