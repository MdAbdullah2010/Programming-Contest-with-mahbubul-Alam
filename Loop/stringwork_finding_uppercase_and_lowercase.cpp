#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string g;
    int h=0,j=0;
    cin>>g;
    for(int i=0;i<g.length();i++)
    {
        if(65<=g[i] && g[i]<=90)
        {
            h=h+1;
        }
        if(97<=g[i] && g[i]<=122)
        {
            j=j+1;
        }
    }
    cout<<"The number of uppercase and lowercase is given respectively "<<h<<", "<<j;
    return 0;
}
