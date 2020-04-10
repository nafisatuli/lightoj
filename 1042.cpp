#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    ll n;
    cin >> t;
    for(int k=1; k<=t; k++)
    {
        cin >> n;
        ll aa[n+1],j=0;
        while(n>=0)
        {
            aa[j]=n%2;
            n/=2;
            j++;
        }
    }
}
