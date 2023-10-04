#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
     map<char,double>m;
     map<char,double>::iterator it;
     string s;
     double b,sum;

    while(q--)
    {
        int n;
        scanf("%d",&n);

        while(n--)
        {
            char a;

          cin>>a;
            scanf("%lf",&b);
            m[a]=b;
        }
        cin>>n;
       sum=0;
       cin.ignore();
        while(n--)
        {
           s="";
            getline(cin,s);
            for(int i=0;i<s.size();i++)
            {
             it=m.find(s[i]);
             if(it!=m.end())
             {
                 sum+=it->second;
             }
            }

            //cout<<s<<endl;
        }
      //  cout<<1<<endl;
       double ka=sum/100;
      printf("%0.2lf$\n",ka);
      m.clear();
    }
    return 0;
}
