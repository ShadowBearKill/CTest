
#include <vector>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 0. 默认加上
    ios_base::sync_with_stdio(false)
    cin.tie(nullptr)

    int a, b, n;
    string s;

    // 1. 单行输入
    cin >> a >> b;
    cout << a + b << endl;
    cin >> a >> s;  // 遇到空格或换行符就会停止
    cout << s << endl;

    // 2. 多行输入，给出具体的行数
    cin >> n;
    while (n--){
        cin >> a >> b;
        cout << a + b << endl;
    }

    // 3. 多行输入，没有具体的行数
    while(cin >> a >> b) {  // 遇到文件结尾（End of File）或读取失败时为false
        cout << a + b << endl;
    }

    // 4. 输入数组
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i]
    }
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // 5. 读取一整行字符串
    getline(cin, s)
    cout << s << endl;

    // 6. cin和getline混用
    cin >> a;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // 7. 多组测试数据处理
    int T; cin >> T;
	while(T --) solve();

    return 0;
}