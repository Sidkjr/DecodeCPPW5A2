#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    bool flag = true;
    vector<int> v;
    vector<int> sv;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        int q;
        cin >> q;
        v.push_back(q);
    }   

    for(int i = 0; i < n - 1; i++) {
        if(v[i] < v[i+1]) {
            continue;
        }
        else {
            flag = false;
            break;
        }
    }

    if(flag == false) {
        cout << "The array is not sorted!\n";
    }
    else {
        cout << "The array is sorted!\n";
    }
}