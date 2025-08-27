#include <bits/stdc++.h>
using namespace std;

int main() {

    int a;
    vector<int> nums = {10, 20, 30, 40, 50};
    
    // 1. 普通遍历
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    
    // 2. range 遍历
    for (const auto& t : nums) {
        cout << t << endl;
    }

    do {
        cout << "123"
        cin >> a;
    } while (a != 0)

}