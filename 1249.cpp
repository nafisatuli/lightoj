#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    int t,n,a,b,c,area,min=INT_MAX,max=0,loc;
    cin >> t;
    for(int k=1; k<=t; k++)
    {
        cin >> n;
        s1="",s2="";
        min=INT_MAX,max=0;
        for(int i=1; i<=n; i++)
        {
            cin >> s;
            cin >> a >> b >> c;
            area=a*b*c;
            if(area<min)
            {
                min=area;
                s2=s;
            }
            if(area>max)
            {
                max=area;
                s1=s;
            }
        }
        //cout << min << " " << max << endl;
        if(min==max)
            cout << "Case " << k <<": no thief" << endl;
        else
            cout << "Case " << k << ": " << s1 <<" took chocolate from "<< s2 << endl;
    }
}
