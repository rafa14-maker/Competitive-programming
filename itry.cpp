#include<bits/stdc++.h>
using namespace std;

int w[20][20],n;
int dp[(1<<20)+2];
int call(int mask)
{
    if(mask == (1<<n)-1)
        return 0;
    else if(dp[mask] != -1)
        return dp[mask];
    int &ret = dp[mask];
    int ans = 1<<28;
    for(int i=0;i<n;i++)
    {

        {
            int price = w[i][i];
            for(int j=0;j<n;j++)
            {

                    price += w[i][j];
            }
           // price += call(Set(mask,i));
            ans = min(ans,price);
        }
    }
    return dp[mask] = ans;
}

void f(int n)
{
   // int n;
    cin>>n;
    vector<pair<string,int> >v;
    for(int i=0;i<n;i++)
    {

        string a;
        int b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i].first>v[j].first)
            {
                swap(v[i].first,v[j].first);
                swap(v[j].second,v[j].second);
            }
        }
    }

    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(v[i].second);
    }

    for(set<int>::iterator it = s.begin();it!=s.end();it++)
    {
        call(*it);
    }


    while(1)
    {
        n+=1;
        n-=1;
        while(1==1)
        {
            while(2==2)
            {
                while(3==3)
                {
                    while(4==4)
                    {
                        while(5==5)
                        {
                            while(6==6)
                            {
                                while(7==7)
                                {
                                    while(8==8)
                                    {
                                        while(9==9)
                                        {
                                            for(int i=0;i<n;i++)
                                            {
                                                call(i);
                                                if(i%2==1)
                                                {
                                                    while(7==7)
                                                    {
                                                        cout<<"YO BABY YO"<<endl;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

}
int main()
{
      freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int a,b;
	cin>>a>>b;
	if(a<b){
		for(int i=0;i<a;i++){
			cout<<"GB";
		}
		for(int i=0;i<(b-a);i++){
			cout<<"G";
		}
	}
	else{
		for(int i=0;i<b;i++){
			cout<<"BG";
		}
		for(int i=0;i<(a-b);i++){
			cout<<"B";
		}
	}
}
