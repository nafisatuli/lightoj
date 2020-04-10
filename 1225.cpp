#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    ll n,m,rev=0,temp;
    cin >> t;
    for(int k=1;k<=t;k++)
    {
        cin >> temp;
        n=temp,rev=0;
        while(n!=0)
        {
            m=n%10;
            rev=(rev*10)+m;
            n/=10;
        }
        if(temp==rev)printf("Case %d: Yes\n",k);
        else printf("Case %d: No\n",k);
    }
}
