#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n = 7;
    vector<int> v;
    cout << "Enter 7 random digits for the array: ";
    for(int i = 0; i < n; i++) {
        int q;
        cin >> q;
        v.push_back(q); 
    }
    int eve_sum = 0;
    int odd_sum = 0;
    int diff = 0;
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            eve_sum = v[i] + eve_sum;
        }
        else {
            odd_sum = v[i] + odd_sum;
        }
    }
    if(odd_sum >= eve_sum) {
        int diff = odd_sum - eve_sum;
        cout << "The diff is: " << diff << "\n";
    }
    else {
        int diff = eve_sum - odd_sum;
        cout << "The diff is: " << diff << "\n";
    }
}