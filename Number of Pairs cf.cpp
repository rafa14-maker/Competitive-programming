#include<bits/stdc++.h>
using namespace std;


void solve()
{
    //cout<<"hello"<<endl;

    int n,xl,yr;
    cin>>n>>xl>>yr;

    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    sort(arr,arr+n);

    vector<pair<int,int> >v;

    int idx=0;

    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            idx++;
        }
        else
        {
            if(arr[i]==arr[i-1])idx++;
            else
            {
                v.push_back(make_pair(arr[i-1],idx));
                idx=1;
            }
        }
    }


    v.push_back(make_pair(arr[n-1],idx));


    for(int i=1;i<v.size();i++)
    {
        int a=v[i-1].second;
        v[i].second+=a;
    }

    long long sum=0;

    for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;


    for(int i=0;i<v.size();i++)
    {
        int a=v[i].first;

        int l=0,r=v.size()-1;
        int low=n-1,high=0;

        while(l<=r)
        {
            int mid=(l+r)/2;

            if(v[mid].first+a>=xl)
            {
                low=min(mid,low);
                r=mid-1;
            }
            else l=mid+1;

        }
        l=0,r=v.size()-1;
         while(l<=r)
        {
            int mid=(l+r)/2;

            if(v[mid].first+a<=yr)
            {
                high=max(mid,high);
                l=mid+1;
            }
            else r=mid-1;

        }
        int ab,bb,cb,db;
       if(low>0) ab=v[low-1].second;
       else ab=0;
        bb=v[high].second;

        cb=v[low].first;
        db=v[high].first;

        if(a+cb>=xl&&a+cb<=yr&&a+db>=xl&&a+db<=yr)
        {
           // cout<<a<<" "<<bb<<endl;

            if(cb==db)
            {
                bb-=ab;
                long long ck=bb*(bb-1);
               ck/=2;
                sum+=ck;
            }
            else
            {
                long long ck = bb-ab;

               sum+=ck*v[i].second;

            }
        }

        //cout<<abx<<" "<<cbx<<endl;

      //  cout<<1<<endl;
    }


    cout<<sum<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();
 // solve();
}

