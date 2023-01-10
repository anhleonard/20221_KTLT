#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int x, y;
    int a[100000];
    int b[100000];
    cin >> x;
    for(int i = 0; i <= x; i++) {
    	int val;
    	cin >> val;
    	a[i] = val;
	}
	cin >> y;
	for(int i = 0; i <= y; i++) {
    	int val;
    	cin >> val;
    	b[i] = val;
	}
	int max = x + y;
	int emp[max];
	for(int i = 0; i <= max; i++) {
		emp[i] = 0;
	}
	for(int i = x; i >= 0; i--) {
		for(int j = y; j >= 0; j--) {
				emp[i + j] += a[i]*b[j];
			}
		}
	int t = emp[0];
	for(int i = 1; i <= max; i++) {
		t = t ^ emp[i];
	}
	cout << "TRAN THI ANH - 20204512" << endl;
	cout << t;
}
