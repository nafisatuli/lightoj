#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int aa[100010],bb[100010];
int main()
{
    int t,n,ok;
    cin >> t;
    for(int k=1; k<=t; k++)
    {
        cin >> n;
        cin >> aa[0];
        bb[0]=aa[0];
        ok=bb[0];
        for(int i=1; i<n; i++)
        {
            cin >> aa[i];
            bb[i]=aa[i]-aa[i-1];
            ok=max(ok,bb[i]);
        }
        int res=ok;
        int flag=0;
        for(int i=1; i<n; i++)
        {
            if(ok==bb[i])
                ok--;
            else  if(ok<bb[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("Case %d: %d",k,res+1);
        }
        else
        {
            printf("Case %d: %d",k,res);
        }
    }
}
