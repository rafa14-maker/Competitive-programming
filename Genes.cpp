#include<bits/stdc++.h>
using namespace std;

map<string,string>persons;
map<string,vector<string> >parents;

void resolve(string child,string parent1,string parent2)
{
    if(persons.find(parent1)==persons.end())
    {
        resolve(parent1,parents[parent1][0],parents[parent1][1]);
    }
    if(persons.find(parent2)==persons.end())
    {
         resolve(parent2,parents[parent2][0],parents[parent2][1]);
    }
    bool has_gene = false;

    if(persons[parent1]!="non-existent"&&persons[parent2]!="non-existent")has_gene=true;
    else if (persons[parent1]!="dominant"&&persons[parent2]!="dominant")has_gene=true;

    if(has_gene)
    {
       if(persons[parent1]=="dominant"&&persons[parent2]=="dominant")persons[child]="dominant";
       else if(persons[parent1]=="dominant"&&persons[parent2]=="recessive") persons[child]="recessive";
        else if(persons[parent1]=="recessive"&&persons[parent2]=="dominant")persons[child]="recessive";
       else persons[child]="recessive";
    }
    else persons[child]="non-existent";
}

bool truth(const pair<string,string>&a,const pair<string,string>&b)
{
    return a.first<b.first;
}

int main()
{
    int n;
    string a,b;
    vector<pair<string,string> >result;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(b=="non-existent"||b=="dominant"||b=="recessive")
        {
            persons[a]=b;
        }
        else parents[b].push_back(a);
    }
    for(map<string,vector<string> >::iterator it=parents.begin();it!=parents.end();it++)
    {
        resolve(it->first,it->second[0],it->second[1]);
    }
    for(map<string,string>::iterator it = persons.begin();it!=persons.end();it++)
    {
        result.push_back(make_pair(it->first,it->second));
    }
    sort(result.begin(),result.end(),truth);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i].first<<" "<<result[i].second<<endl;
    }
    return 0;
}
