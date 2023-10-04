#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y) {
	return x.first - x.second > y.first - y.second;
}

int main()
{
    int game,goal;
    while(scanf("%d %d",&game,&goal)==2){
    vector<pair<int,int> >arr;
     int counter=0,win=0,draw=0;
    while(game--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)win++;
        else if(a==b)draw++;
        else arr.push_back(make_pair(a,b));
    }
    sort(arr.begin(),arr.end(),cmp);

    counter=win*3;

    if(goal==draw)
    {
        counter+=draw*3;
        goal=0;
    }
    else if(goal>draw)
    {
        counter+=draw*3;
        goal-=draw;
    }
    else if(goal<draw)
    {
        counter =counter + (goal * 3);
        draw=draw-goal;
        counter=counter+ draw;
        goal = 0;
    }
      for(int i=0;i<arr.size();i++)
    {
       int needGoals = abs(arr[i].first - arr[i].second) + 1;
        if(goal >= needGoals)
        {
            counter+=3;
            goal -= needGoals;
        }
        else if(goal == needGoals - 1)
        {
            counter++;
            goal -= needGoals - 1;
        }
        else
            break;
    }


     cout<<counter<<endl;

    }
}
