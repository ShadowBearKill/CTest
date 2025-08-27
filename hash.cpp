#include <unordered_map>
using namespace std;

int main() {
    // 1. 声明
    unordered_map<string, int> m;

    //2. 插入和访问
    m["123"] = 123;     // 不存在也不会报错

    // 3. 查找
    if (m.find("456") != m.end()) {
        cout << m["123"] << endl;
    }

    //4. 删除
    m.erase("123");

    //5. 遍历
    for (auto& pair : m){
        cout << pair.first << pair.second << " ";   // 注意：输出的顺序是不定的！
    }

}