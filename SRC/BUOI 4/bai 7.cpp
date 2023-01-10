#include<bits/stdc++.h>
using namespace std;

//TRAN THI ANH
//20204512

template<class T>
set<T> set_union(const set<T> &a, const set<T> &b) {
    set<T> c;
    for(T v : a){
        c.insert(v);
    }
    for(T v  : b){
        c.insert(v);
    }
    return c;
}

template<class T>
set<T> set_intersection(const set<T> &a, const set<T> &b) {
    set<T> c;
    for(T v : a){
        int index = 0;
        for(T u : b){
            if(v == u) index++;
        }
        if(index != 0) c.insert(v);
    }
    return c;
}

template<class T>
void print_set(const set<T> &a) {
    for (const T &x : a) {
        cout << x << ' ';
    }
    cout << endl;
}

int main() {
	cout << "TRAN THI ANH" << endl;
	cout << "MSSV: 20204512" << endl;
	
    set<int> a = {1, 2, 3, 5, 7};
    set<int> b = {2, 4, 5, 6, 9};
    set<int> c = set_union(a, b);
    set<int> d = set_intersection(a, b);
    cout << "Union: "; 
	print_set(c);
    cout << "Intersection: "; 
	print_set(d);
    return 0;
}

