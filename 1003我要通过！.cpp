#include <iostream>
using namespace std;
int main()
{
    int n, flag;
    int np, nt, nal, na, nar;
    string s;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>s;
        flag=1;
        np=nt=nal=na=nar=0;
        for (int i=0; i<s.length(); i++) {
            switch (s[i]) {
            case 'P' :  if (np) flag=0;
                        else np=1;
                        break;
            case 'A' :  if (!np) nal++;
                        else if (!nt) na++;
                        else nar++;
                        break;
            case 'T' :  if (!nt) nt=1;
                        break;
            default : flag=0;
            }
            if (flag==0) break;
        }
        if (flag && np>0 && nt>0 && na>0 && nal*na==nar) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

//PAT           p前面有0个A,pt之间有1个A，T 后面有0个A,  0*1=0   正确
//PAAT          p前面有0个A,pt之间有2个A，T 后面有0个A,  0*2=0   正确
//AAPATAA       p前面有2个A,pt之间有1个A，T 后面有2个A,  2*1=2   正确
//AAPAATAAAA    p前面有2个A,pt之间有2个A，T 后面有2个A,  2*2=4   正确
