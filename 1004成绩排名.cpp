#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct ttu {
    string name;
    string sub;
    int score;
} Stu;

bool cmp(Stu a, Stu b) {return a.score>b.score;}

int main()
{
    Stu stu;
    vector<Stu> v;
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>stu.name>>stu.sub>>stu.score;
        v.push_back(stu);
    }
    sort(v.begin(), v.end(), cmp);
    cout<<v.begin()->name<<' '<<v.begin()->sub<<endl;
    cout<<(v.end()-1)->name<<' '<<(v.end()-1)->sub<<endl;
    return 0;
}
//也可以在每次读入的时候就更新最大值和最小值，但代码没有这个简洁
