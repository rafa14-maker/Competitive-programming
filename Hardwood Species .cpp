#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    getchar();
	getchar();
    while(q--)
    {
        map<string,int>mp;
        vector<string>v;
        string s;
        int n=0;
        while(getline(cin,s))
        {
            if(s.compare("") == 0)
				break;
           if(mp[s]==0) v.push_back(s);
            mp[s]++;
            n++;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" "<<fixed<<setprecision(4)<<(mp[v[i]]*100.0)/n<<endl;
        }
        if(q)cout<<endl;
    }
}
