#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,a,b;
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> n;
        if(n%2!=0)
        {
            printf("Case %d: Impossible\n",i);
        }
        else{
            a=n/2;
            b=2;
            while(a%2==0)
            {
                a/=2;
                b*=2;
            }
            printf("Case %d: %lld %lld\n",i,a,b);
        }
    }
}
