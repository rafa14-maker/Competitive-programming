// name : muhammad fahim hossain rafayeat

#include<bits/stdc++.h>
using namespace std;

int s[1000005],e[1000005];
vector < pair<int,int> > vect;
int main()
{
    int count1=0;
    int temp=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i]>>e[i];
        vect.push_back(make_pair(s[i],e[i]));
    }
    sort(vect.begin(),vect.end());
    for(int i=0;i<n;i++)
    {
        if(vect[i].second<temp)
            count1++;
        else
            temp=vect[i].second;
    }
    cout<<count1<<endl;
}
