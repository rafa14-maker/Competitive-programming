#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e5+5;
const int BLOCK = 174;

multiset<int>mt[N];
int ans[N];
int arr[N];
int answer;
int pk;
bool tr ;
struct query
{
    int l,r,ind;
}Q[N];
int n,m,k;

void add(int index)
{
   // cnt[a[index]]++;
   // if(cnt[a[index]]==1) answer++;

   int u = arr[index];
  // cout <<u<<" "<< mt[u].size() << endl;
   mt[u].insert(index);
  //  cout <<u<<" "<< mt[u].size() << endl;

   if(mt[u].size()>=2)
   {
        auto it = mt[u].begin();
        int l = *it;
        auto pt = mt[u].rbegin();
        int r = *pt;

      //  cout << l <<" "<< r<<endl;

        if(abs(l-r)>answer)
        {
          //  cout << "yes"<<endl;
            answer = abs(l-r);
            pk = u;
          //  tr = true;
        }
   }

}

void cal(int left,int right)
{
     for(int i=left;i<=right;i++)
        {
            int uk = arr[i];
            if(mt[uk].size()>1)
            {
                auto it = mt[uk].begin();
                int f = *it;
                auto pt = mt[uk].rbegin();
                int p = *pt;

                if(abs(f-p)>answer)
                {
                    answer = abs(f-p);
                    pk = uk;
                }
            }
        }
}

void del(int index)
{
   // cnt[a[index]]--;
   // if(cnt[a[index]]==0) answer--;

   int u = arr[index];
 //  cout <<u<<" "<< mt[u].size() << endl;
   mt[u].erase(index);
  // cout <<u<<" "<< mt[u].size() << endl;

  if(u == pk)
   {
      // cout << "yes" << endl;
      // cout << pk << endl;
      tr = true;
    /*    for(int i=left;i<=right;i++)
        {
            int uk = arr[i];
            if(mt[uk].size()>1)
            {
                auto it = mt[uk].begin();
                int f = *it;
                auto pt = mt[uk].rbegin();
                int p = *pt;

                if(abs(f-p)>answer)
                {
                    answer = abs(f-p);
                    pk = uk;
                }
            }
        } */
   }

}

bool cmp(query f,query s)
{
    if((f.l/BLOCK)!=(s.l/BLOCK))
        return (f.l/BLOCK)<(s.l/BLOCK);
    else
        return f.r<s.r;
}


void solve()
{
   // cout<<"yes"<<endl;

   cin>>n>>m>>k;

   for(int i=1;i<=n;i++)
   {
       cin>>arr[i];
   }

   for(int i=1;i<=k;i++)
   {
       int lk,rk;
       cin>>lk>>rk;
       Q[i].l = lk;
       Q[i].r = rk;
       Q[i].ind = i;
   }

   sort(Q+1,Q+k+1,cmp);

   int cl=0,cr=0;

   for(int i=1;i<=k;i++)
    {
        int left=Q[i].l,right=Q[i].r;
        tr = false;

        while(cl<left){
            del(cl);
            cl++;
        }
        while(cl>left){
            add(cl-1);
            cl--;
        }
        while(cr<=right){
            add(cr);
            cr++;
        }
        while(cr>(right+1)){
          del(cr-1);
            cr--;
        }
        if(cr>right)
        {
            del(cr);
            cr--;
        }
        if(tr)cal(cl,cr);
        cout<<left<<" "<<right<<" "<<pk<<" " << mt[pk].size() <<" "<<answer<< endl;
        ans[Q[i].ind]=answer;
    }

  // for(int i=0;i<k;i++)cout << ans[i] <<"\n";
}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
    solve();
}

