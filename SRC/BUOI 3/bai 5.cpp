#include<bits/stdc++.h>
using namespace std;

int binom(int n, int k) {
	if( k > n) return 0;
	if( k == n) return 1;
	if( k == 0) return 1;
	return binom(n-1,k) + binom(n-1, k-1);
}
//TRAN THI ANH - 20204512

int binom2(int n, int k) {
	long result = 1;
	for(int i = 1; i <= k; i++) {
		result = result * n / i;
		n--;
	}
	return result;
}

int main() {
	int m;
	cin >> m;
	cout << "TRAN THI ANH - 20204512" << endl;
	for(int n = 1; n <= m; n++ ) {
		for(int k = 0; k <= n; k++) {
			cout << binom(n,k) << " ";
		}
		cout << endl;
	}
	for(int n = 1; n <= m; n++ ) {
		for(int k = 0; k <= n; k++) {
			cout << binom2(n,k) << " ";
		}
		cout << endl;
	}	
}



