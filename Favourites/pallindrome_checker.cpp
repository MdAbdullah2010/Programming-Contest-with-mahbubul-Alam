#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int i=0,e=a.length(),j=e-1;
    while(i<e)
    {
        if(a[i]!=a[j])
        {
            cout<<"No";
            return 0;
        }
        j--;
        i++;
    }
    cout<<"Yes";
    return 0;
}
