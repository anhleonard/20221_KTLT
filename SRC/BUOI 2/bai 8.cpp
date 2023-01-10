#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool sort_sum(vector<int>&vt1,vector<int>&vt2) {
		int sum_vt1 = 0;
		for(unsigned int i = 0; i < vt1.size(); i++) {
			sum_vt1 = sum_vt1 + vt1[i];
		}
		int sum_vt2 = 0;
		for(unsigned int i = 0; i < vt2.size(); i++) {
			sum_vt2 = sum_vt2 + vt2[i];
		}
		return sum_vt1 > sum_vt2;
		//TRAN THI ANH
		// MSSV 20204512
};

int main() {
	int a,b;
	cin >> a >> b;
	vector< vector<int> > vt = {
		{10,b},
		{1,3,7},
		{2,3,4,a},
		{9,8,15},
	};
	
	sort(vt.begin(), vt.end(), sort_sum);
	cout << "TRAN THI ANH - 20204512" << endl;
	for (const auto &v : vt) {
        for (int it : v) {
            cout << it << ' ';
        }
        cout << endl;
    }
	
}
