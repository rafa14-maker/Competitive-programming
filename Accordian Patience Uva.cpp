#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        string s;
        cin>>s;
        if(s=="#")break;
        vector<string>v[60];

       v[1].push_back(s);
       for(int i=2;i<=52;i++)
        {
            cin>>s;
            v[i].push_back(s);
        }
       while(1)
        {
            int flag=0;
            for(int i=1;i<=52;i++)
            {
                if(v[i].size()==0)continue;
              //  cout<<1<<endl;
                string a=v[i].back();
                string l="00";
                string r="00";
                if(i-1>=1)l=v[i-1].back();

                if(i-3>=1)r=v[i-3].back();

              //  cout<<a<<" "<<l<<" "<<r<<endl;


                 if(r!="00"&&(a[0]==r[0]||a[1]==r[1]))
                {
                   //  cout<<a<<" "<<r<<endl;
                    flag++;
                     v[i].pop_back();
                    v[i-3].push_back(a);
                }
                else if(l!="00"&&(a[0]==l[0]||a[1]==l[1]))
                {
                    //cout<<a<<" "<<l<<endl;
                    flag++;
                    v[i].pop_back();
                    v[i-1].push_back(a);
                }

                if(flag>0)
                {
                    for(int i=1;i<=52;i++)
                    {
                        if(v[i].empty())
                        {
                            if(v[i+1].empty())break;
                            else
                            {
                                v[i]=v[i+1];
                                while(!v[i+1].empty())v[i+1].pop_back();
                            }
                        }
                    }
                    break;
                }
            }
            if(flag==0)break;
        }
        vector<int>p;
        for(int i=1;i<=52;i++)
        {
           if(v[i].size()>0)p.push_back(v[i].size());
        }
       if(p.size()>1) printf("%d piles remaining:",p.size());
       else printf("%d pile remaining:",p.size());
        for(int i=0;i<p.size();i++)cout<<" "<<p[i];
        cout<<endl;
    }
}
