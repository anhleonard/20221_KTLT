#include<bits/stdc++.h>
using namespace std;

int n;
int X[100], Y[100];
int mark[100][100];

const int hx[] = {1, 1, 2, 2, -1, -1, -2, -2};
const int hy[] = {2, -2, 1, -1, 2, -2, 1, -1};

//TRAN THI ANH - 20204512

bool check(int x, int y) {
	if(mark[x][y] == 1) return false;
	if(x <= 0 || y <= 0 || x > n || y > n ) return false;
    return true;
}

void print_sol(){
    for (int j = 1; j <= n * n; ++j)
        cout << "(" <<X[j] << " " << Y[j] << ")" << endl;
    exit(0);
}

void TRY(int k) {
	for(int i = 0; i < 8; i++) {
		int xx = X[k-1] + hx[i];
		int yy = Y[k-1] + hy[i];
		
		if(check(xx,yy)) {
			X[k] = xx;
			Y[k] = yy;
			mark[xx][yy] = 1;
			if(k == n*n) print_sol();
			else TRY(k+1);
			
			mark[xx][yy] = 0;
		}
	}
}

int main(){
    cin >> n;
    cout << "TRAN THI ANH - 20204512" << endl;
    mark[1][1] = 1;
    X[1] = Y[1] = 1;
    TRY(2);
    return 0;
}


