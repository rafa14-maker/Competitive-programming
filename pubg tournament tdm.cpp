#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string arr[]={"Bubon","shafkat","mahim","shifat","rakib","fardin","rizu","fahim","Orko"};

    vector<string>v;

    for(int i=0;i<9;i++)
    {
        string frr;
        for(int j=i+1;j<9;j++)
        {
            frr="";
            frr+=arr[i];
            frr+=" vs ";
            frr+=arr[j];
            v.push_back(frr);
        }
    }
 //  cout<<v.size()<<endl;
   /* for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }*/

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    int cnt  = 19;

    do{
            cnt--;
             if(cnt == 0)break;

    }while(next_permutation(v.begin(),v.end()));

  for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

}

int main()
{
    solve();
}
