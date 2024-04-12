#include <iostream>
#include <vector>

using namespace std;

int main() {
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

    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            int val = v[i];
            val = val + 10;
            v[i] = val;
        }
        else {
            int var = v[i];
            var = var * 2;
            v[i] = var;
        }
    }

    cout << "The new array elements are: \n";

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}