#include<bits/stdc++.h>
#define prr pair<int,int>
using namespace std;
map<prr,string>mp;
int main()
{
    int n,m,p,q,a,b,temp1,temp2;
    string s;
    cin >> n;
    while(n--)
    {
        cin >> p >> q >> s;
        prr temp1=make_pair(p,q);
        mp[temp1]=s;
    }
    cin >> m;
    while(m--)
    {
        cin >> a >> b;
        prr temp2=make_pair(a,b);
        cout << mp[temp2] << endl;
    }
}
