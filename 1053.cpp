#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,r1,r2;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> a >> b >> c;
        if(a>b && a>c)
        {
            r1=a*a;
            r2=(b*b)+(c*c);
        }
        else if(b>a && b>c)
        {
            r1=b*b;
            r2=(a*a)+(c*c);
        }
        else if(c>a && c>b)
        {
            r1=c*c;
            r2=(a*a)+(b*b);
        }
        if(r1==r2)
            printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
    }
}
