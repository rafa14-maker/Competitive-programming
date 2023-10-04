#include<bits/stdc++.h>
using namespace std;

bool match(string a,string b)
{
 string s,k;
 for(int i=0;i<a.size();i++)if(a[i]!=' ')s+=a[i];
 for(int i=0;i<b.size();i++)if(b[i]!=' ')k+=b[i];
 sort(s.begin(),s.end());
 sort(k.begin(),k.end());
 return s==k;
}

int main()
{
    int q;
    cin>>q;
      cin.ignore();
    cin.ignore();
    while(q--)
    {
        vector<string>vs;
        vector<string>vk;
        while(1)
        {
            string s;
            getline(cin,s);
            if(s=="")break;
            vs.push_back(s);
          /*  string krr;
            for(int i=0;i<s.size();i++)if(s[i]!=' ')krr+=s[i];
            sort(krr.begin(),krr.end());
            vk.push_back(krr);*/
        }

  //  sort(vk.begin(),vk.end());
    sort(vs.begin(),vs.end());

    for(int i=0;i<vs.size();i++)
    {
        for(int j=i+1;j<vs.size();j++)
        {
            if(match(vs[i],vs[j]))
            {
                cout<<vs[i]<<" = "<<vs[j]<<endl;
            }
        }
    }
    if(q)cout<<"\n";
    }
}
