#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    priority_queue<int>pq;
    stack<int>st;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        queue<int>q;
    priority_queue<int>pq;
    stack<int>st;
        int a=0,b=0,c=0,d,e,f=-9;


        while(n--){
             cin>>d>>e;
        if(d==1)
        {
            if(a==0)q.push(e);
            if(b==0)pq.push(e);
            if(c==0)st.push(e);
        }
        else if(d==2)
        {
            if(a==0)
            {
              if(q.size()>0)   f=q.front();
                if(q.size()>0&&f==e)
                {
                    q.pop();
                }
                else
                {
                    a++;
                }
            }
             if(b==0)
            {
               if(pq.size()>0)  f=pq.top();
                if(pq.size()>0&&f==e)
                {
                    pq.pop();
                }
                else
                {
                    b++;
                }
            }
             if(c==0)
            {
             if(st.size()>0)   f=st.top();
                if(st.size()>0&&f==e)
                {
                    st.pop();
                }
                else
                {
                    c++;
                }
            }
        } }

        if(a==0&&b==0&&c==0||a==0&&b==0||b==0&&c==0||c==0&&a==0)cout<<"not sure"<<endl;
        else if(a!=0&&b!=0&&c!=0)cout<<"impossible"<<endl;
        else if(a==0)cout<<"queue"<<endl;
        else if(b==0)cout<<"priority queue"<<endl;
        else if(c==0)cout<<"stack"<<endl;
    }
}
