#include<bits/stdc++.h>
using namespace std;
int aa[1000006];
int main()
{
    int t,n,ok;
    cin >> t;
    for(int k=1; k<=t; k++)
    {
        int cont=0;
        cin >> n;
        memset(aa,0,sizeof(aa));
        for(int i=1; i<=n; i++)
        {
            cin >> ok;
            if((ok>=0)&&(ok<=n))
                aa[ok]++;
        }
        for(int i=1; i<=n; i++)cout << aa[i] << " ";
        cout << endl;
        for(int i=1; i<=n; i++)
        {
            if(aa[i]>0)
            {
                cont++;
                aa[i]--;
            }
            else if(aa[n-i]>0)
            {
                cont++;
                aa[i]--;
            }
        }
        if(cont>=n)printf("Case %d: yes\n",k);
        else printf("Case %d: no\n",k);
    }
}
