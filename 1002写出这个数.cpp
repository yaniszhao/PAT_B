#include <iostream>
using namespace std;
char* map[10] = {"ling", "yi", "er", "san", "si", "wu", \
        "liu", "qi", "ba", "jiu"};
int main()
{
    string s;
    int n=0;
    cin>>s;
    for (auto ch : s)
        n += ch - '0';
    s=to_string(n);
    cout << map[s[0]-'0'];
    for (int i=1; i<s.length(); i++)
        cout << ' ' << map[s[i]-'0'];
    return 0;
}
