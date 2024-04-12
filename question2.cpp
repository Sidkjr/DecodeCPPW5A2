#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int largest;
    int s_largest;
    int t_largest;

    vector<int> v;
    int n = 5;
    cout << "Enter 5 elements for the array: ";
    for(int i = 0; i < n; i++) {
        int q;
        cin >> q;
        v.push_back(q); 
    }

    sort(v.begin(), v.end());
    largest = v[n - 1];
    s_largest = v[n - 2];
    t_largest = v[n - 3];
    cout << "The three largest elements in the array are: " << largest << ", " << s_largest << " & " << t_largest << endl; 
}