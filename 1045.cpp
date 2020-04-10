#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double cum[1000000];
void cal_log()
{
    for(ll i=1; i<=1000000; i++)
        cum[i]=cum[i-1]+log(i);
}
int main()
{
    cal_log();
    int t;
    ll num,b,res;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> num >> b;
        res=cum[num]/log(b);
        res+=1;
        printf("Case %d: %lld\n",i,res);
    }
}
