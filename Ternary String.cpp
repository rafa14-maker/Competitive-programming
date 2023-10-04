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
        int l=0,r=0;
        bool a=false,b=false,c=false;
        int one=0,two=0,three=0,counter=1e7;

        while(1)
        {

            if((!a||!b||!c)&&r<s.size())
            {
                if(s[r]=='1')one++,a=true;
                if(s[r]=='2')two++,b=true;
                if(s[r]=='3')three++,c=true;
                r++;
                if(a&&b&&c)counter=min(counter,r-l);
              //  r++;
                // continue;
            }
            else if(a&&b&&c&&l<s.size())
            {
                 if(s[l]=='1')one--;
                if(s[l]=='2')two--;
                if(s[l]=='3')three--;
                l++;
                if(one==0)a=false;
                if(two==0)b=false;
                if(three==0)c=false;
                  if(a&&b&&c)counter=min(counter,r-l);
                  //continue;
            }
           else break;
                     //  cout<<l<<" "<<r<<" "<<one<<" "<<two<<" "<<three<<" "<<counter<<endl;
        }
       if(counter!=1e7) cout<<counter<<endl;
       else cout<<0<<endl;
    }
}
