#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,aa[105];
    cin >> t;
    for(int k=1; k<=t; k++)
    {
        int cont=0;
        cin >> n;
        for(int i=1; i<=n; i++)cin >> aa[i];
        for(int i=1; i<=n; i++)
        {
            if(aa[i]!=i)
            {
                for(int j=i+1; j<=n; j++)
                {
                    if(aa[j]==i)
                    {
                        swap(aa[j],aa[i]);
                        cont++;
                    }
                }
            }
        }
        printf("Case %d: %d\n",k,cont);
    }
}
