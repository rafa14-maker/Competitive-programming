#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    map<int,int>frr;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        frr[a]++;
        s.insert(a);
    }
    set<int>::iterator it;
    int len=s.size()-1;

    vector<int>v;

    for (it = s.begin(); it != s.end(); ++it)
    {
        v.push_back(*it);
    }



    for(int i=v.size()-1;i>=0;i--)
    {
      if(frr[v[i]]%2==1)
        {
            cout<<"Customer-A"<<endl;
            return 0;
        }
    }
    cout<<"Customer-B"<<endl;

}
