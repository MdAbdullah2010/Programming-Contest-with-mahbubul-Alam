///1/1! + 2/2! + 3/3!.......n/n!
#include<iostream>
using namespace std;
float fact(int a)
{
    int e=1;
    for(int k=1;k<=a;k++)
    {
        e=e*k;
    }
    return e;
}
int main()
{
    float f,l=0;
    cin>>f;
    for(int i=1;i<=f;i++)
    {
        l=l+i/fact(i);
    }
    cout<<l;
    return 0;
}
