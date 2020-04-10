#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[7];
    long t,n,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %s",&n,s);
        if(strcmp(s,"Alice")==0)
        {
            if(n%3==1)
                printf("Case %d: Bob\n",i);
            else printf("Case %d: Alice\n",i);
        }
        else
        {
            if(n%3==0)
                printf("Case %d: Alice\n",i);
            else printf("Case %d: Bob\n",i);
        }
    }
}
