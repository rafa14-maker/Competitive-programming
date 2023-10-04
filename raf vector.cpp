#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>g1;
    vector<int>::iterator i;


    for(int j=1;j<=5;j++)
    {
        g1.push_back(j);
    }
    cout<<"output of begin and end"<<endl;

    for( i=g1.begin();i!=g1.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    cout<<g1.max_size()<<endl;
    cout<<g1.size()<<endl;
    cout<<g1.capacity()<<endl;
     cout<<g1.empty()<<endl;
     cout<<g1.at(1)<<endl;
     g1.insert(g1.begin(),5);

    g1.pop_back();
      for( i=g1.begin();i!=g1.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;


  cout<<g1[0]<<endl;


    return 0;
}
