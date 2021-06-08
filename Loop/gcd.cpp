/*#include<iostream>
using namespace std;
int main()
{
    int o,k=0,l;
    cin>>o;
    for(int j=1; j<o; j++)
    {
        for(int i=1; i<=j; i++)
        {
            if(j%i==0)
                k=k+i;
                l=j;
        }
    }
    cout<<l;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 10000005;
#define ll long long
int q, x, a[N], f[N];
int main()
{
    for (int i=1; i < N; i++)
    {
        for(int j=i; j<N; j+=i)a[j]+=i;
        if(a[i]<N&&!f[a[i]])f[a[i]]=i;
    }
    cin>>q;
    while(q--)
    {
        cin>>x;
        cout<<f[x]-(!f[x])<<"\n";
    }
}
