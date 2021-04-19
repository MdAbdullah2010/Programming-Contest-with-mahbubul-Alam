///1+2+3+.....nth term

#include<iostream>
using namespace std;
int main()
{
    float n=3,z=0;
    //cin>>n;
    for(int i=1;i<=n;i++)
    {
        z=z+i;
    }

    //z = n/2*(n+1);
    cout<<z;
    return 0;
}
