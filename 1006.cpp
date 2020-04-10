#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll a,b,c,d,e,f,n,t,aa[10005];
   cin >> t;
   for(ll k=1;k<=t;k++)
   {
       cin >> aa[0] >>aa[1] >> aa[2] >>aa[3]>>aa[4]>> aa[5]>> n;
       for(ll i=6;i<=n;i++)
       {
           aa[i]=(aa[i-1]+aa[i-2]+aa[i-3]+aa[i-4]+aa[i-5]+aa[i-6])%10000007;
       }
       printf("Case %lld: %lld\n",k,aa[n]%10000007);
   }
}
