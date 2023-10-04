#include<bits/stdc++.h>
using namespace std;

int main()
{
     freopen("portals.in", "r", stdin);
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int counter=0;
        int flag=0;
        int k=0;
        int cr=0;
        for(int i=0;i<str.size();i++)
        {
           if(i+1<str.size()&&i+2<str.size())
           {
               if(str[i]=='s'&&str[i+1]=='o'&&str[i+2]=='e')cr++;
           }
           if(i-1>0&&i-2>0)
           {
               if(str[i]=='s'&&str[i-1]=='o'&&str[i-2]=='e')cr++;
           }


            if(str[i]=='o')k++;
            if(str[i]=='s')
            {
                if(i-1>=0)
                {
                    if(str[i-1]=='.')counter++;
                    else if(str[i-1]=='o')flag++;
                }
                if(i+1<str.size())
                {
                     if(str[i+1]=='.')counter++;
                    else if(str[i+1]=='o')flag++;
                }
            }
        }
        if(k>1&&flag>0||cr)cout<<-1<<endl;
        else cout<<counter<<endl;
    }
}
