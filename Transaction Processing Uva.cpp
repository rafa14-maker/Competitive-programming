#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,string>mp;
    char arr[105];
    while(1)
    {
        char a,b,c;
        cin>>a>>b>>c;
        string s;
        s+=a;
        s+=b;
        s+=c;
        gets(arr);
        if(s=="000")break;
        string f;

        for(int i=0;i<strlen(arr);i++)
        {
            f+=arr[i];
        }
        mp[s]=f;
    }
    float frr[1000];
    for(int i=0;i<1000;i++)frr[i]=0;
    vector<string>id[1000];
    vector<float>num[1000];
    vector<int>v;

    while(1)
    {
        char a,b,c;
        cin>>a>>b>>c;
        string s;cin>>s;
        float p;
        cin>>p;
        p/=100;
        //char a,b,c;
       //cin>>a>>b>>c;
        int k=(int)(a-'0');
         k*=10;
         k+=(int)(b-'0');
         k*=10;
         k+=(int)(c-'0');
         if(k==0&&s=="000")break;
        v.push_back(k);
         id[k].push_back(s);
         num[k].push_back(p);
         frr[k]+=p;
    }

    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1])v[i-1]=-1;
    }

    for(int i=0;i<v.size();i++)
    {
        int a=v[i];
        if(a==-1)continue;
        if(frr[a]!=0)
        {
            if(a>=100)printf("*** Transaction %d is out of balance ***\n",a);
            else if(a>=10) printf("*** Transaction 0%d is out of balance ***\n",a);
            else printf("*** Transaction 00%d is out of balance ***\n",a);

            for(int i=0;i<id[a].size();i++)
            {
                cout<<id[a][i]<<" ";
                string s=mp[id[a][i]];
                int k=37-s.size();
                if(num[a][i]<0)k--;
                int p;
               if(num[a][i]<0)  p=(-1)*num[a][i];
               else  p=num[a][i];
                if(p>=10)k--;
                if(p>=100)k--;
                cout<<s;
                while(k--)cout<<" ";
                printf("%.2f\n",num[a][i]);
            }
            cout<<"999"<<" ";
            cout<<"Out of Balance";
            int k=24;

            k--;
            if(frr[a]>0)k--;
                float p;
               if(frr[a]<0)  p=(-1)*frr[a];
               else  p=frr[a];
                if(p>=10)k--;
                if(p>=100)k--;

            while(k--)cout<<" ";
           if(frr[a]<0)printf("%.2f\n",(float)p);
           else printf("-%.2f\n",(float)p);
           cout<<"\n";
        }
    }
}
