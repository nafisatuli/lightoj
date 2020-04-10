#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,aa[100];
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> n;
        for(int j=0;j<n;j++)cin >> aa[j];
        int p=2,l=0;
        for(int j=0;j<n;j++)
        {
            if(aa[j]>p)
            {
                l+=ceil((aa[j]-p)/5.0);
                p=aa[j];
            }
        }
        printf("Case %d: %d\n",i,l);
    }
}
