#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,k;
    ll aa;
    cin >> t;
    for(int j=1; j<=t; j++)
    {
        cin >> k;
        int cont=0;
        int res=0;
        for(int i=0; i<k; i++)
        {
            cin >> aa;
            if(aa==1)
            {
                cont++;
            }
            res^=aa;
        }
        if(cont==k)
        {
            if(cont%2==0)printf("Case %d: Alice\n",j);
            else printf("Case %d: Bob\n",j);
        }
        else
        {
            if(res==0)printf("Case %d: Bob\n",j);
            else printf("Case %d: Alice\n",j);
        }
    }
}
