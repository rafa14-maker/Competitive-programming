#include<bits/stdc++.h>
using namespace std;

void solve(int n,int test)
{
    vector<string>vn;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        vn.push_back(s);
    }
    int m;
    cin>>m;
    vector<string>vm;
    cin.ignore();
    for(int i=0;i<m;i++)
    {
        string s;
        getline(cin,s);
        vm.push_back(s);
    }
    printf("Run #%d: ",test);
    int cnt=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(vm[i]==vn[j])
            {
                cnt++;
                break;
            }
        }
    }
    if(cnt==m)
    {
        cout<<"Accepted"<<endl;
        return;
    }

}

int main()
{
    int test=0;
    while(1)
    {
        test++;
        int n;
        cin>>n;
        if(n==0)break;
        else solve(n,test);
       // break;
    }
}
