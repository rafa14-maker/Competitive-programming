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
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')l++;
            if(s[i]=='R')r++;
            if(s[i]=='D')d++;
            if(s[i]=='U')u++;
        }
        string frr;
        if(l>0&&r==0&&d==0&&u==0||l==0&&r>0&&d==0&&u==0||l==0&&r==0&&d>0&&u==0||l==0&&r==0&&d==0&&u>0)
        {
            cout<<0<<endl;
            cout<<frr<<endl;
            continue;
        }
        if(l>0&&r>0&&d==0&&u==0)
        {
            cout<<2<<endl;
            cout<<"LR"<<endl;
            continue;
        }
        if(l==0&&r==0&&d>0&&u>0)
        {
              cout<<2<<endl;
            cout<<"UD"<<endl;
            continue;
        }

        if(u>0&&d==0&&l>0&&r==0||u>0&&d==0&&l==0&&r>0||u==0&&d>0&&l==0&&r>0||u==0&&d>0&&l>0&&r==0)
        {
            cout<<0<<endl;
            cout<<frr<<endl;
        }

        if(u>0&&d>0&&r>0&&l==0)
        {
            cout<<2<<endl;
            cout<<"UD"<<endl;
            continue;
        }
         if(u>0&&d>0&&r==0&&l>0)
        {
             cout<<2<<endl;
            cout<<"UD"<<endl;
            continue;
        }
         if(u>0&&d==0&&r>0&&l>0)
        {
             cout<<2<<endl;
            cout<<"RL"<<endl;
            continue;
        }
         if(u==0&&d>0&&r>0&&l>0)
        {
             cout<<2<<endl;
            cout<<"RL"<<endl;
            continue;
        }

        if(u>0&&d>0&&r>0&&l>0)
        {
            int a=min(u,d);
            int b=min(r,l);
            cout<<2*a+2*b<<endl;
          //  int i=0;
            for(int i=0;i<a;i++)cout<<"U";
            for(int i=0;i<b;i++)cout<<"R";
            for(int i=0;i<a;i++)cout<<"D";
            for(int i=0;i<b;i++)cout<<"L";
         cout<<endl;
        }


    }
}
