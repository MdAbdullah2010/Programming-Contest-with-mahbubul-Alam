#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int enter,p,o,len=0,k=0;
    vector<int>n;
    vector<int>h;
    cin>>enter;
    for(int i=0; i<enter; i++)
    {
        cin>>p;
        n.push_back(p);
    }
    while (enter > 0)
    {
        enter/=10;
        len++;
    }
    for(int j=0; j<len; j++)
    {
        o=n[j];
        for(int i=1; i<=o; i++)
        {
            if(o%i==0)
                k=k+i;
        }
        h.push_back(k);
    }
    for(int i=0;i<len; i++)
    {
        if(h[i]==0)
            cout<<"-1"<<endl;
        else
            cout<<h[i]<<endl;
    }
    return 0;
}
