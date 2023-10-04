#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<int,int> >v;
    for(int i=0;i<s.size()-1;i++)
    {
        int counter=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[i]==s[j]&&s[i+1]==s[j+1])
            {
                counter++;
            }
        }
        v.push_back(make_pair(counter,i));
    }
    sort(v.begin(),v.end());

    reverse(v.begin(),v.end());

    int k = v [0].second;
    cout<<s[k]<<s[k+1]<<endl;

}
