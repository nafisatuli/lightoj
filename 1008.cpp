#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll s,temp,r,row,col;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> s;
        r=ceil(sqrt(s));
        temp=(r*r)-s;
        if(temp<r)
        {
            row=temp+1;
            col=r;
        }
        else
        {
            row=r;
            col=s-(r-1)*(r-1);
        }
        if(r%2==0)swap(row,col);
        printf("Case %d: %lld %lld\n",i,row,col);
    }
}

