#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    cin >> t;
    for(int k=1; k<=t; k++)
    {
        int n,m,res=0;
        cin >> n >> m;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin >> x;
                if((i+j)%2!=(n+m)%2)
                {
                    res^=x;
                }
            }
        }
        if(res!=0)printf("Case %d: win\n",k);
        else printf("Case %d: lose\n",k);
    }
}
