#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{//下面个要先存再反转，这个直接正着做
    string src, des;
    int len, cnt=0, key;
    cin>>src;
    len=src.length();
    for (cnt=0; cnt<len; cnt++) {
        key=src[cnt]-'0';
        if (len-cnt==3) for (; key>0; key--) cout<<'B';
        else if (len-cnt==2) for (; key>0; key--) cout<<'S';
        else for (int i=1; i<=key; i++) cout<<i;
    }
    return 0;
}

int main1()
{
    string src, des;
    int idx, cnt=0, key;
    cin>>src;
    idx=src.length()-1;
    for (; idx>=0; idx--, cnt++) {
        key=src[idx]-'0';
        if (cnt==0) for (; key>0; key--) des+=key+'0';
        else if (cnt==1) for (; key>0; key--) des+='S';
        else for (; key>0; key--) des+='B';
    }
    reverse(des.begin(), des.end());
    cout<<des<<endl;
    return 0;
}

