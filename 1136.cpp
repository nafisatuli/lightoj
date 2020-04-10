#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans;
int check(ll num)
{
    ans=0;
    if(num==0)return ans;
    else
    {
        ans=(num/3)*2;
        if(num%3==2)
            ans+=1;
    }
    return ans;
}
int main()
{
    ll a,b,r1,r2,res,t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> a >> b;
        a-=1;
        r1=check(a);
        r2=check(b);
        res=r2-r1;
        printf("Case %d: %lld\n",i,res);
    }
}
