#include <iostream>
#include <string>
#include <math.h>
#include <map>
using namespace std;
void solved()
{
    map<string,int> mapp;
    int n,q,w,i;
    string str,strtemp;
    cin>>n>>q;
    while(n--)
    {
        cin>>str>>w;
        for(i = 0;i<str.length();i++)
        {
            strtemp += str[i];
            if(mapp[strtemp] == 0 || mapp[strtemp] < w)
            mapp[strtemp] = w;
        }
        strtemp.clear();
    }
    while(q--)
    {
        cin>>str;
        if(mapp[str] == 0)
            cout<<-1<<endl;
        else
            cout<<mapp[str]<<endl;
    }
}
int main()
{
    solved();
    return 0;
}
