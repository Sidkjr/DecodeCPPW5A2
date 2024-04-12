#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    bool flag = true;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> v;
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        int q; 
        cin >> q;
        v.push_back(q);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n - 1; i = i + 2) {
        if(v[i] == v[i+1]) {
            continue;
        }
        else {
            cout << "The unique element is: " << v[i] << "\n";
            flag = false;
            break;
        }
    }

    if(flag == true) {
        cout << "There were no unique elements\n";
    }
    else {
        cout << "Rest all are duplicates!\n";
    }
}