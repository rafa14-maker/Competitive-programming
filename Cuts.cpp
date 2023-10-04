#include<bits/stdc++.h>
using namespace std;

int Set(int n,int pos)
{
    return (n | (1<<pos));
}
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        string str;
        cin>>str;
        vector<pair<int,int> >v;
        long long counter=0;
        for(int i=0;i<n;i++)
        {
         //  cout<<counter<<endl;
            if(i==0)
            {
                v.push_back(make_pair(0,arr[i]-1));
                 v.push_back(make_pair(arr[i],str.size()-1));
                 long long a=0,b=0;
               //  cout<<0<<" "<<arr[i]-1<<" "<<arr[i]<<" "<<<<endl;
               int frr[30]={0};
                       for(int k=0;k<=arr[i]-1;k++)
                       {
                          // cout<<str[k];
                             int p = (int)str[k]-'a';
                             frr[p]=1;
                       }
                      // cout<<endl;
                        for(int k=arr[i];k<=str.size()-1;k++)
                       {
                            //cout<<str[k];
                             int p = (int)str[k]-'a';
                             if(frr[p]==1)frr[p]=2;
                             else frr[p]=3;
                       }
                       // cout<<endl;
                       for(int k=0;k<30;k++)if(frr[k]==1||frr[k]==3)counter++;
                      // sum+=counter;
            }

            else
            {
                for(int j=0;j<v.size();j++)
                {
                    if(v[j].first<=arr[i]&&v[j].second>=arr[i])
                    {
                        int tmp = v[j].first;
                        v[j].first = arr[i];
                        v.push_back(make_pair(tmp,arr[i]-1));
                       //int ck1 = tmp,ck2 = arr[i]-1;

                       int frr[30]={0};
                       for(int k=v[j].first;k<=v[j].second;k++)
                       {
                         //   cout<<str[k];
                             int p = (int)str[k]-'a';
                             frr[p]=1;
                       } //cout<<endl;
                        for(int k=tmp;k<=arr[i]-1;k++)
                       {
                           // cout<<str[k];
                             int p = (int)str[k]-'a';
                           if(frr[p]==1)frr[p]=2;
                           else frr[p]=3;
                       } //cout<<endl;
                       for(int k=0;k<30;k++)if(frr[k]==1||frr[k]==3)counter++;
                       break;
                    }
                }
            }

        } //for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;
        cout<<counter<<endl;
    }
}
