#include<bits/stdc++.h>
using namespace std;

void Try(int n) {
	if(n == 1) {
		return;
	}
	else if( n % 2 == 0) {
		cout << "n=" << n/2 << endl;
		Try(n/2);
		return;
	}
	else if(n%2 == 1) {
		cout << "n=" << n*3+1 << endl;
		Try(n*3+1);
		return;
	}
	return;
	//TRAN THI ANH
	//MSSV 20204512
}

int main() {
	int n;
	cin >> n;
	cout << "TRAN THI ANH - 20204512" << endl;
	cout << "n=" << n <<endl;
	Try(n);
}

