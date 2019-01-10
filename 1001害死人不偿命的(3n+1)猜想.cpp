#include <iostream>
using namespace std;
int main()
{
    int n, cnt=0;
    cin>>n;
    for (; n!=1; cnt++) {
        //if (n%2==0) n/=2;
        //else n=(3*n+1)/2;
        if (n%2==1) n=3*n+1;
        n/=2;
    }
	cout << cnt << endl;
	return 0;
}