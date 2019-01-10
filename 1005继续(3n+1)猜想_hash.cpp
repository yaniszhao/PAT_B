#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {return a>b;}
int main()
{
    vector<int> v;
    map<int, int> m;
    int n, key;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>key;
        v.push_back(key);
        while (key>1) {//每个元素把除自身的序列存入map中
            if (key%2==1) key=3*key+1;
            key/=2;
            m[key]=1;
        }
    }
    sort(v.begin(), v.end(), cmp);
    n=0;
    for (auto key : v) {
        if (m.find(key) == m.end()) {//没找到
            if (n++ > 0) cout<<' ';
            cout<<key;
        }
    }
    return 0;
}

