#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str= "Mango is my favorite fruit";

    int i=0,character=0,word=1;
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            character++;
        }
        else if(str[i]==' ' || str[i]!='\n' || str[i]!='\t')
        {
            word++;
        }
        i++;
    }
    cout<<"Number of Character = "<<character<<endl;
    cout<<"Number of word = "<< word<<endl;
    cout<<"Number of space = "<<word-1<<endl;
    return 0;
}
