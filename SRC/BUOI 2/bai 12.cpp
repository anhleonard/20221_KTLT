#include<bits/stdc++.h>
using namespace std;

struct element{
	int key;
	int value;
};
	
vector<element> items;
int x, y;

bool check(element item1, element item2) {
	if(item1.value > item2.value) {
		return true;
	}
	if(item1.value == item2.value) {
		return item1.key > item2.key;
	}
	return false;
}

int main() {
	while (cin >> x && cin >> y) {
		element ele;
		ele.key = x;
		ele.value = y;
		items.push_back(ele);
	}
	cout << "TRAN THI ANH - 20204512" << endl;
	sort(items.begin(), items.end(), check);
	for(int i = 0; i < items.size(); i++) {
		cout << items[i].key << " " << items[i].value << endl; 
	}
}

