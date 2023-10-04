#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        int counter=0,flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                counter++;
                flag=max(counter,flag);
            }
            else
            {
                flag=max(counter,flag);
                counter=0;
            }
        }
        cout<<flag+1<<endl;
    }
}
