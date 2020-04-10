#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    int k,res=0;
    ll A,B;
    for(int i=1; i<=t; i++)
    {
        cin >> k;
        cin >> A >> B;
        res=(B-A-1);
        for(int i=1; i<k; i++)
        {
            cin >> A >> B;
            res=res^(B-A-1);
        }
        if(res==0)printf("Case %d: Bob\n",i);
        else printf("Case %d: Alice\n",i);
    }
}
