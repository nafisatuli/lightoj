#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum,am;
    cin >> t;
    for(int k=1; k<=t; k++)
    {
        cin >> n;
        sum=0;
        printf("Case %d:\n",k);
        for(int i=0; i<n; i++)
        {
            string s;
            cin >> s;
            if(s[0]=='d')
            {
                cin >> am;
                sum+=am;
            }
            if(s[0]=='r')
            {
                cout << sum << endl;
            }
        }
    }
}
