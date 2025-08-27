#include <algorithm>
#include <functional>

using namespace std;

int main() {
    vector<int> v{1,2,3,4,5};

    //1. 升序
    sort(v.begin(),v.end());

    //2. 降序
    sort(v.begin(),v.end(),greater<int>());

    //3. 倒置
    reverse(v.begin(),v.end())

    //4. 自定义排序
    // stable_sort()
    sort(v.begin(),v.end(),[](const int& a, const int& b){
        return a < b;   // true的在右边
    })
}