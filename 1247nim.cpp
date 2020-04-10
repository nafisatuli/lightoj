#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,res;
    ll n,m,num,sum;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> n >> m;
        res=0;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<m;j++)
            {
                cin >> num;
                sum+=num;
            }
            res=res^sum;
        }
        if(res==0)printf("Case %d: Bob\n",i);
        else printf("Case %d: Alice\n",i);
    }
}
