#include<bits/stdc++.h>
using namespace std;

int counteven(int *arr, int size) {
	//Tran Thi Anh
	//20204512
	int count = 0;
	for(int i = 0; i < size; i++) {
		if(arr[i]%2 == 0) {
			count++;
		}
	}
	return count;
}
int main() {
	int arr[] = {1, 5, 4, 8, 10, 6, 7, 2};
	cout << "Ho va ten: Tran Thi Anh" << endl;
	cout << "MSSV: 20204512" << endl;
	cout << "Output: "<< counteven(arr,8);
}
