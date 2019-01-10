#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    //if (n==1 || n==2) return true;//可以优化掉
    for (int i=2; i<=sqrt(n); i++)
        if (n%i==0) return false;
    return true;
}

int main()
{//对每一个素数要满足条件和它相差2的数也要为素数
    int n, cnt=0;
    cin>>n;
    for (int i=5; i<=n; i++) {//最早的一对为3和5
        if (isPrime(i) && isPrime(i-2))
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}


int main1()
{//先得到素数在判断
    vector<int> v;
    int n, cnt=0;
    cin>>n;
    for (int i=1; i<=n; i++)
        if (isPrime(i)) v.push_back(i);
    for (int i=1; i<v.size(); i++)
        if (v[i]-v[i-1]==2) cnt++;
    cout<<cnt<<endl;
    return 0;
}

