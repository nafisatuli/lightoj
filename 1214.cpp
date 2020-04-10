#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    ll base,n,temp;
    string s;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> s;
        cin >> base;
        n=0,temp;
        ll len;
        len=s.length();
        if(s[0]=='-')
            temp=1;
        else
            temp=0;
        if(base<0)
            base*=(-1);
        for(ll j=temp; j<len; j++)
        {
            n=(n*10)+(s[j]-'0');
            n%=base;
        }
        if(n==0)
            printf("Case %d: divisible\n",i);
        else
            printf("Case %d: not divisible\n",i);
    }
}
