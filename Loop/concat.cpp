#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0;i<=str1.length();i++)
    {
        for(int j=0;j<=str2.length();j++)
        {
            vector<string>word;
            if(str1[i]==str2[j])
               word.push_back(str2[j]);
            else
                continue;
        }
    }
    cout<<word;
    return 0;
}
