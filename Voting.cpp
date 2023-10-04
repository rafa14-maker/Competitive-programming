#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>D;
    queue<int>R;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        if(c=='D')D.push(i+1);
        if(c=='R')R.push(i+1);
    }
    while(D.empty()!=true&&R.empty()!=true)
    {
        if(D.front()<R.front())
        {
            R.pop();
            int f=D.front();
            D.pop();
            D.push(f+n);
        }
        else
        {
              D.pop();
            int f=R.front();
            R.pop();
            R.push(f+n);
        }
    }

    if(!D.empty())cout<<"D"<<endl;
    else cout<<"R"<<endl;
}
