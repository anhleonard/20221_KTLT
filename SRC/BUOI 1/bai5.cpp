#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[], int size) {
	//TRAN THI ANH - 20204512
	int i = 0;
	int r = size - 1;
	int temp;
	while(i < r) {
		int temp = arr[i];
		arr[i] = arr[r];
		arr[r] = temp;
		i++;
		r--;
	}
}
void ptr_reversearray(int *arr2, int size) {
	int i = 0;
	int r = size - 1;
	int temp;
	while(i < r) {
		int temp = *(arr2+i);
		*(arr2+i) = *(arr2+r);
		*(arr2+r) = temp;
		i++;
		r--;
	}
}
int main() {
	int arr[] = {9, 3, 5, 6, 2, 5};
	reversearray(arr, 6);
	int arr2[] = {4, -1, 5, 9};
	ptr_reversearray(arr2, 4);
	for(int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}
	for(int i = 0; i < 4; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;
	cout << "TRAN THI ANH - 20204512";
}

