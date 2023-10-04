#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int counter=0;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0&&s[i]!='R'&&s[i]!='U'&&s[i]!='D')
        {
            counter++;
            break;
        }
        else         if(i%2==1&&s[i]!='L'&&s[i]!='U'&&s[i]!='D')
        {
            counter++;
            break;
        }

    }
    if(counter==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
