#include <iostream>
#include <vector>

using namespace std;

int main() {
    bool flag = true;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> v;
    vector<int> rev_v;

    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        int q;
        cin >> q;
        v.push_back(q);
    }
    for(int i = n - 1; i >= 0; i--) {
        int e = v[i];
        rev_v.push_back(e);
    }

    for(int i = 0; i < n; i++) {
        if(v[i] == rev_v[i]) {
            continue;
        }
        else {
            flag = false;
            break;
        }
    }

    if(flag == true) {
        cout << "The array is a palindrome!\n";
    }
    else {
        cout << "The array is not a palindrome!\n";
    }
}