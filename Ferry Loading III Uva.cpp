#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,t,m;
        cin>>n>>t>>m;
        queue<int>arr;
        queue<char>frr;
        while(m--)
        {
            string s;
            int a;
            cin>>a>>s;
           if(s[0]=='l')frr.push('l');
           else frr.push('r');
           arr.push(a);
        }
        int st=0,counter=0;

        vector<int>v;


         if(arr.size()>0)
        {
            if(arr.front()==0&&frr.front()=='l')
            {
                v.push_back(10);
                arr.pop();
                frr.pop();
            }
        }

        while(1)
        {
            int flag=0;
           if(arr.size()==0)break;
           int a=arr.front();
           int c=frr.front();
           if(a>=st)
           {
               st+=t;
               continue;
           }
           if(c=='r'&&counter%2==0)
           {
               counter++;
               st+=t;
               continue;
           }
           if(c=='l'&&counter%2==1)
           {
               counter++;
               st+=t;
               continue;
           }
           while(st>arr.front()&&c==frr.front())
           {
               flag++;
               arr.pop();
               frr.pop();
               v.push_back(st+t);
           }
           while(st==arr.front()&&c==frr.front())
           {
               flag++;
               arr.pop();
               frr.pop();
               v.push_back(st+t);
           }
           if(flag>0)counter++,st+=t;
        }
        cout<<"yo"<<endl;
        for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
    }
}
