#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000000+7
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll b=131;
ll pw[1000006];
ll hashV[1000006];
ll hashV2[1000006];
void gnrtPow()
{
    pw[0]=1;
    for(ll i=1; i<=1000006; i++)
    {
        pw[i]=(pw[i-1]*b);
    }
}
void hash_val(string str)
{
    ll len=str.size();
    hashV[0]=0;
    for(ll i=1; i<len; i++)
    {
        hashV[i]= ((hashV[i-1]*b)+str[i]);
    }
}
void hash_val2(string str)
{
    ll len=str.size();
    hashV2[0]=0;
    for(ll i=1; i<len; i++)
    {
        hashV2[i]= ((hashV2[i-1]*b)+str[i]);
    }
}
ll segHash(int i, int j)
{
    return (hashV[j]-hashV[i-1]*pw[j-i+1]);
}
ll segHash2(int i, int j)
{
    return (hashV2[j]-hashV2[i-1]*pw[j-i+1]);
}
int main()
{
    FastRead;
    int t;
    cin >> t;
    gnrtPow();
    for(int q=1; q<=t; q++)
    {
        string s1,s2;
        cin >> s1 >> s2;
        memset(hashV, 0, sizeof(hashV));
        memset(hashV2, 0, sizeof(hashV2));
        s1="*"+s1;
        ll l1=s1.size();
        hash_val(s1);
        s2="*"+s2;
        ll l2=s2.size();
        hash_val2(s2);
        int cont=0;
        for(int i=1; i<l1; i++)
        {
            ll x=segHash(i,i+l2-2);
            ll y=segHash2(1,l2-1);
            if(x==y)
            {
                cont++;
            }
        }
        printf("Case %d: %d\n",q,cont);
    }
}
