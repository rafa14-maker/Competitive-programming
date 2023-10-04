#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >v;
int n;

int flag=-1;


int boss2(vector<int>frr)
{
    int counter=0;
    for(int i=0;i<frr.size();i++)
    {
        for(int j=0;j<frr.size();j++){
        if(v[i]>v[j])swap(v[i],v[j]),counter++;
        }
    }
    return counter;
}

vector<int>boss1(vector<int>frr)
{

    for(int i=0;i<frr.size();i++)
    {
        for(int j=0;j<frr.size();j++){
        if(v[i]>v[j])swap(v[i],v[j]);
        }
    }
    return frr;
}




void f(int pos,vector<int>frr,int counter)
{
   // cout<<pos<<" "<<counter<<endl;
    if(pos>=n)
    {

        int p=boss2(frr);
        frr=boss1(frr);

        int po=0;
        for(int i=0;i<frr.size()-1;i++)
        {
            if(frr[i]>frr[i+1])po++;
        }
        if(po==0)
        {
            if(flag==-1)flag=p;
            else flag=min(flag,p);
        }
        return ;
    }
vector<int>krr;
vector<int>crr;

for(int i=0;i<frr.size();i++)
{
    krr.push_back(frr[i]);
    crr.push_back(frr[i]);
}

krr.push_back(v[pos].first);
crr.push_back(v[pos].second);


   f(pos+1,krr,counter);
   f(pos+1,crr,counter+1);
}

int main()
{
    cin>>n;
    int arr[n+5],frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>frr[i];
    for(int i=0;i<n;i++)
    {
        v.push_back(make_pair(arr[i],frr[i]));
    }
    vector<int>fo;
    f(0,fo,0);
    cout<<flag<<endl;
}
