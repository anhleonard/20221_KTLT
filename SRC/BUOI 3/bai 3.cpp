#include <bits/stdc++.h>
using namespace std;
#define MAX 100
#define INT_MAX 1000000

int n, c[MAX][MAX];
int cmin = INT_MAX;

int curr;
int mark[MAX];
int x[MAX];

//TRAN THI ANH - 20204512

void input() {
	cin >> n;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n ; j++) {
			cin >> c[i][j];
		}
	}
	for(int i=0; i<MAX; i++)
            mark[i] = 0;
    curr = 0;
}

bool check(int i, int k) {
	if(c[x[k-1]][i] <= 0) return false;
	if(mark[i] == 1) return false;
	return true;
}

void solution() {
	cmin = min(cmin, curr);
}

void TRY(int k) {
	for(int i = 2; i <= n; i++) {
		if(check(i,k)) {
			x[k] = i;
			curr = curr + c[x[k-1]][i]; // chi phi hien tai + chi phi di tu k den i
			mark[i] = 1;
			if(k == n) {
				curr += c[x[n]][1];
				solution();
				curr -= c[x[n]][1];
			}
			else TRY(k+1);
			curr = curr - c[x[k-1]][i];
			mark[i] = 0;
		}
	}
}

int main() {
    input();
    x[1] = 1;
    TRY(2);
    cout << "TRAN THI ANH - 20204512" << endl;
    cout << cmin;
    return 0;
}
