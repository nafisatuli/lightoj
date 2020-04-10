#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int t,nmbr1,nmbr2,cont1,cont2,res;
    int aa[1010],bb[1010];
    cin >> t;
    for(int k=1; k<=t; k++)
    {
        cin >> s1 >> s2;
        cont1=0,cont2=0,res=0;
        memset(aa,0,sizeof(aa));
        memset(bb,0,sizeof(bb));
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]=='.')
                cont1++;
            else
            {
                nmbr1=s1[i]-'0';
                aa[cont1]=aa[cont1]*10+nmbr1;
            }
        }
        for(int i=0; i<s2.size(); i++)
        {
            if(s2[i]=='.')
                cont2++;
            else
            {
                nmbr2=s2[i]-'0';
                bb[cont2]=bb[cont2]*2+nmbr2;
            }
        }
        for(int i=0; i<4; i++)
        {
            if(aa[i]==bb[i])
                res++;
        }
        if(res==4)
            printf("Case %d: Yes\n",k);
        else
            printf("Case %d: No\n",k);
    }
}
