#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    ll n,m;
    cin >> t;
    for(int k=1;k<=t;k++)
    {
       cin >> n >> m;
       ll res=(n*m)/2;
       printf("Case %d: %lld\n",k,res);
    }
}
