#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    deque<char>dq;
    for(int i=0;i<s.size();i++)dq.push_back(s[i]);

    int m;
    cin>>m;
    int counter=0;
    while(m--)
    {
        int k;
        cin>>k;
        if(k==1)
        {
            counter++;
        }
        else
        {
            int l;
            char p;
            cin>>l>>p;
            if(counter%2==0)
            {
                if(l==1)
                {
                    dq.push_front(p);
                }
                else
                {
                    dq.push_back(p);
                }
            }
            else if(counter%2==1)
            {
                if(l==1)
                {
                  dq.push_back(p);
                }
                else
                {
                     dq.push_front(p);
                }
            }
        }
    }
    if(counter%2==1)reverse(dq.begin(),dq.end());
    for(deque<char>::iterator it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it;
    }
    cout<<"\n";

}
