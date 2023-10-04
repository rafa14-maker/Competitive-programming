#include<bits/stdc++.h>
using namespace std;

vector<int>pl_no;
vector<char>result;
vector<int>prb_no;
vector<int>tot;

int frr_player[105];
int frr_penalty[105];

int main()
{
    int q;
    cin>>q;
    string s;

    while(q--)
    {
        pl_no.clear();
        result.clear();
        prb_no.clear();
        tot.clear();
        memset(frr_player,0,sizeof frr_player);
        memset(frr_penalty,0,sizeof frr_penalty);
        int pno,prbno,mim,sol;
        int po=0;
        string s;
         cin>>s;
    cin>>s;

        while(getline(cin, s), s.size()>0) {
	    stringstream ss(s);
	    ss >> pno >> prbno >> mim >> sol;
        cout<<1<<endl;
            if(po>4)break;
            if(sol=='I'||sol=='C')
            {
                pl_no.push_back(pno);
                prb_no.push_back(prbno);
                tot.push_back(mim);
                result.push_back(sol);
            }
            if(sol=='C')
            {
                int tm=mim;
                int len=pl_no.size()-1;
                for(int i=0;i<len;i++)
                {
                    if(pl_no[i]==pno&&prb_no[i]==prbno&&result[i]=='I')
                    {
                        tm+=tot[i];
                    }
                }
                frr_player[pno]++;
                frr_penalty[pno]+=tm;
            }
            po++;
        }
        for(int i=0;i<=100;i++)
        {
            if(frr_player[i]>0&&frr_penalty[i]>0)
                cout<<i<<endl;
        }


      /*  vector<pair<int,int> >v;
        for(int i=0;i<=100;i++)
        {
            if(frr_player[i]>0&&frr_penalty[i]>0)
                v.push_back(make_pair(frr_player[i],frr_penalty[i]));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(v[i].first==v[j].first&&v[i].second>v[j].second)
                    swap(v[i].second,v[j].second);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            int a=v[i].first,b=v[i].second;
            for(int i=0;i<=100;i++)
            {
                if(a==frr_player[i]&&b==frr_penalty[i])
                {
                    cout<<i<<" "<<a<<" "<<b<<endl;
                    break;
                }
            }
        }*/
    }
}
