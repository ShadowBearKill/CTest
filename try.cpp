#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp;
    vector<int> ans(n, 0);
    vector<int> temperatures(n, 0);
    cin >> n;
    for (int i = 0;i<n;i++) {
        cin >> temperatures[i];
    }
    stack<int> st;

    for (int i = 0;i<n;i++) {
        while !st.empty() and temperatures[i] > st.top() {
            
        }
    }
}