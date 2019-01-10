#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{//用三次反转解决，比较巧妙
    vector<int> v;
    int n, m, key, cnt=0;
    //输入
    cin>>n>>m;
    for (int i=0; i<n; i++) {
        cin>>key;
        v.push_back(key);
    }
    m %= n;//m可能大于n
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin()+m);
    reverse(v.begin()+m, v.end());
    for (auto key : v) {
        if (cnt++ > 0) cout<<' ';
        cout<<key;
    }
    return 0;
}


int main()
{//用双栈解决
    stack<int> stk1, stk2;
    int n, m, key, cnt=0;
    //输入
    cin>>n>>m;
    for (int i=0; i<n; i++) {
        cin>>key;
        stk1.push(key);
    }
    //m个数转到栈2
    m %= n;//m可能大于n
    for (int i=0; i<m; i++) {
        key=stk1.top();
        stk1.pop();
        stk2.push(key);
    }
    //把栈2的输出
    //不要用for且用stk2.size来判断，因为size会变
    while (!stk2.empty()) {
        key=stk2.top();
        stk2.pop();
        if (cnt++ > 0) cout<<' ';
        cout<<key;
    }
    //栈1转到栈2
    while (!stk1.empty()) {
        key=stk1.top();
        stk1.pop();
        stk2.push(key);
    }
    //把栈2的输出
    while (!stk2.empty()) {
        key=stk2.top();
        stk2.pop();
        if (cnt++ > 0) cout<<' ';
        cout<<key;
    }
    return 0;
}

