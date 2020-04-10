#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,res,n;
    int b[105],w[105];
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> n;
        res=0;
        for(int i=0;i<n;i++)cin >> w[i];
        for(int i=0;i<n;i++)cin >> b[i];
        for(int i=0;i<n;i++)
        {
            res=res^(b[i]-w[i]-1);
        }
        //cout << res << endl;
        if(res==0)printf("Case %d: black wins\n",i);
        else printf("Case %d: white wins\n",i);
    }
}
