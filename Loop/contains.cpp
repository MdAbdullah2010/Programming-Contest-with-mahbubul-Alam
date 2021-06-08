#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string s1("gengjiawen geng");
    string s2("geng");
    if(s1.find(s2) != string::npos)
    {
        cout << "found!" << '\n';
        count++;
    }
    cout<<"Geng is "<<count<<"times"<<endl;
    return 0;
}
