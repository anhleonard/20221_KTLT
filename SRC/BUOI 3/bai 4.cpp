#include <bits/stdc++.h>
using namespace std;

int mem[1000];
int L[1000];
int n;
int a[1000];

//TRAN THI ANH
// MSSV 20204512

void init() {
	for( int i = 0; i < 1000; i++) {
		L[i] = 1;
	}
}

void input() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int lis(int i) {
	for(int j = 0; j < i; j++) {
		if(a[i] > a[j]) {
			L[i] = max(L[i], L[j] + 1);
		}
	}
	return L[i];
}

void trace(int i) {
	for(int j = 0; j < i; j++) {
		if(a[j] < a[i] && lis(i) == 1 + lis(j)) {
			trace(j);
			break;
		}
	}
	cout << a[i] << " ";
}

int main() {
	input();
	init();
	int MAX = lis(0);
	int pos;
	for(int i = 0; i < 6; i++) {
		int length = lis(i);
		if(MAX < length) {
			MAX = length;
			pos = i;
		}
	}
	cout << "TRAN THI ANH - 20204512" << endl;
	cout << MAX << endl;
	trace(pos);
}


