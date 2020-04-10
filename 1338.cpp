#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    string s1,s2;
    int aa[100],bb[100];
    int t,l1,l2,j,o;
    cin >> t;
    cin.ignore();
    for(int k=1; k<=t; k++)
    {
        s1.clear(),s2.clear();
        memset(aa,-1,sizeof(aa));
        memset(bb,-1,sizeof(bb));
        getline(cin, s1);
        getline(cin, s2);
        l1=s1.length();
        l2=s2.length();
        j=0,o=0;
        for(int i=0; i<l1; i++)
        {
            if(isupper(s1[i]))
            {
                aa[j]=tolower(s1[i])-'0';
                j++;
            }
            else if(islower(s1[i]))
            {
                aa[j]=s1[i]-'0';
                j++;
            }
        }
        for(int i=0; i<l2; i++)
        {
            if(isupper(s2[i]))
            {
                bb[o]=tolower(s2[i])-'0';
                o++;
            }
            else if(islower(s2[i]))
            {
                bb[o]=s2[i]-'0';
                o++;
            }
        }
        sort(aa,aa+j);
        sort(bb,bb+o);
        bool flag=true;
        for(int i=0; i<j; i++)
        {
            if(aa[i]!=bb[i])
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
            printf("Case %d: Yes\n",k);
        else
            printf("Case %d: No\n",k);
    }
}
