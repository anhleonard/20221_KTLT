#include<bits/stdc++.h>
using namespace std;
const int  MAX = 1000;
const int du = 1000000000 + 7;
int n, k1, k2;
int x[MAX];
int cnt = 0;
int so0 = 0, so1 = 0;

//TRAN THI ANH
//MSSV 20204512

void inputData(){
    cin >> n >> k1 >> k2;
}

bool check(int  a, int  i){
    if(a==1) return true;
    else {
        if(i==0){
            if(x[a-1] == 0) return false;
            else {
                if(so1<k1) return false;
            }
        } else { 
            if(x[a-1] == 0){
                if(n-a+1 < k1) return false;
            } else {
                if(so1>=k2) return false;
            }
        }

        return true;
    }
}

void solution(){
    for(int i=1; i<=n; i++)
        cout << x[i];
    cout << endl;
    cnt++;
}

void TRY(int  a){
    for(int  i=0; i<=1; i++){
        if(check(a,i)){
            x[a] = i; 
            int pre = so1;
            if(i == 1){
                if(x[a-1] == 1) so1++;
                else so1 = 1;
            } else {
                so1 = 0;
            }

            if(a==n) solution();
            else TRY(a+1);

            so1 = pre;
        }
    }
}

int main(){
	cout << "TRAN THI ANH - 20204512" << endl;
    inputData();
    TRY(1);
    return 0;
}

	
