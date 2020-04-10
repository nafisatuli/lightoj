#include<bits/stdc++.h>
using namespace std;
int divv[1005],aa[1005];
bool check(int i,int j)
{
    if(divv[i]==divv[j])
        return i>j;
    return divv[i]<divv[j];
}
int main()
{
    int t,n,cont;
    for(int i=1; i<=1000; i++)
    {
        cont=0;
        for(int j=1; j<i; j++)
        {
            if(i%j==0)
                cont++;
        }
        divv[i]=cont;
    }
    for(int i=0; i<1000; i++)
        aa[i]=i+1;
    sort(aa,aa+1000,check);
    for(int i=0;i<1000;i++)
        cout << aa[i] << endl;
    cin >> t;
    for(int k=1; k<=t; k++)
    {
        cin >> n;
        cout << aa[n-1] << endl;
    }
}
