#include<bits/stdc++.h>
using namespace std;

//TRAN THI ANH
//20204512

template<class T>
map<T, double> fuzzy_set_union(const map<T, double> &a, const map<T, double> &b) {
    map<T, double> c;
    for(auto v : a){
        int index = 0;
        for(auto u : b){
            if(v.first == u.first){
                c.insert({v.first, max(v.second, u.second)});
                index++;
                break;
            }
        }
        if(index == 0) c.insert({v.first, v.second});
    }

    for(auto v : b){
        int index = 0;
        for(auto u : a){
            if(v.first == u.first){
                c.insert({v.first, max(v.second, u.second)});
                index++;
                break;
            }
        }
        if(index == 0) c.insert({v.first, v.second});
    }
    return c;
}

template<class T>
map<T, double> fuzzy_set_intersection(const map<T, double> &a, const map<T, double> &b) {
    map<T, double> c;

    for(auto v : a){
        for(auto u : b){
            if(v.first == u.first){
                c.insert({v.first, min(v.second, u.second)});
                break;
            }
        }
    }
    
    return c;
}

template<class T>
void print_fuzzy_set(const map<T, double> &a) {
    cout << "{ ";
	    for (const auto &x : a) {
	        cout << "(" << x.first << ", " << x.second << ") ";
	    }
    cout << "}";
    cout << endl;
}


int main() {
	cout << "TRAN THI ANH" << endl;
	cout << "MSSV: 20204512" << endl;
	
    map<int, double> a = {{1, 0.2}, {2, 0.5}, {3, 1}, {4, 0.6}, {5, 0.7}};
    map<int, double> b = {{1, 0.5}, {2, 0.4}, {4, 0.9}, {5, 0.4}, {6, 1}};
    cout << "A = "; 
	print_fuzzy_set(a);
    cout << "B = "; 
	print_fuzzy_set(b);
    map<int, double> c = fuzzy_set_union(a, b);
    map<int, double> d = fuzzy_set_intersection(a, b);
    cout << "Union: "; 
	print_fuzzy_set(c);
    cout << "Intersection: "; 
	print_fuzzy_set(d);
}
