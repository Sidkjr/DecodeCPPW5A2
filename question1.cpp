#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v;
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        int q;
        cin >> q;
        v.push_back(q);
    }

    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    int count = 0;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] > x) {
            count++;
        }
    }

    cout << "The number of elements strictly greater than x is/are: " << count << endl;
}