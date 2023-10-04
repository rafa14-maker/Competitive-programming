#include<bits/stdc++.h>
using namespace std;

vector<pair<string,string> >v;

int main()
{
   while(1){
        string s;
        getline(cin,s);
        if(s=="END")break;
       // cout<<s<<endl;
        string frr,krr;
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(i!=0&&s[i]=='"')
            {
                frr+=s[i];
                break;
            }
            frr+=s[i];
        }



        for(int i=0;i<s.size();i++)
        {
            if(k>0)krr+=s[i];
            if(s[i-1]=='b'&&s[i]=='y')k++;
        }
        v.push_back(make_pair(krr,frr));
    }
    sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++)cout<<v[i].second<<endl;
   int len=v.size();
   int flag[len]={1};

   vector<string>prr;

   while(1)
   {
       string s,f;
       cin>>s;
       if(s=="END")break;
      // cin>>f;
      // cout<<s<<" "<<f<<endl;
       if(s[0]=='B')
       {
           getline(cin,f);
         for(int i=0;i<v.size();i++)
         {
             if(v[i].second==f)
             {
                 flag[i]=0;
             }
         }
         for(int i=0;i<prr.size();i++)
         {
             if(prr[i]==f)
             {
                 prr[i]="9";
             }
         }
       }
       else if(s[0]=='R')
       {
           getline(cin,f);
           prr.push_back(f);
            for(int i=0;i<v.size();i++)
         {
             if(v[i].second==f)
             {
                 flag[i]=1;
             }
         }
       }
       else
       {

        vector<pair<string,string> >v2;

        for(int i=0;i<prr.size();i++)
        {
            string grr;
            string gh=prr[i];
            int fp=0;
            for(int j=0;j<gh.size();j++)
            {
                if(gh[j]>='a'&&gh[j]<='z'||gh[j]=='"')
                {
                    grr+=gh[j];
                    fp++;
                }
                else if(fp>0)
                {
                   grr+=gh[j];
                }
            }
            prr[i]=grr;

            for(int j=0;j<v.size();j++)
            {
                if(v[j].second==prr[i])
                {
                    v2.push_back(make_pair(v[j].first,v[j].second));
                    break;
                }
            }
        }
        sort(v2.begin(),v2.end());
      //  cout<<10<<endl;

       // for(int i=0;i<v2.size();i++)cout<<v2[i].first<<" "<<v2[i].second<<endl;

          for(int i=0;i<v2.size();i++)
          {
              string g=v2[i].second;
              int counter=0;
              for(int i=0;i<v.size();i++)
              {
                  if(g!="9"&&g==v[i].second&&i-1>=0&&flag[i-1]==1)
                  {
                      cout<<"put "<<g<<" "<<"after "<<v[i-1].second<<endl;
                      flag[i]=1;
                      counter++;
                      break;
                  }
              }
              if(counter==0&&g!="9")
              {
                    cout<<"put "<<g<<" "<<"first"<<endl;
              }
          }
          cout<<"END"<<endl;
       }

   }
//for(int i=0;i<prr.size();i++)cout<<prr[i];
 //cout<<endl;
//for(int i=0;i<v.size();i++)cout<<v[i].second;
}
