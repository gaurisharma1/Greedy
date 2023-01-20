#include<bits/stdc++.h>
using namespace std;

int fractional_kmp(vector<pair<int,int>>v,int k)
{
    sort(v.begin(),v.end());
    int res=0;
    int curr_cap=k;
    for(int i=0;i<v.size();i++)
    {
        int weight=v[i].first;
        int profit=v[i].second;
        if(weight<=curr_cap)
        {
            curr_cap-=weight;
            res+=profit;
            //cout<<res<<" ";

        }
        else
        {
            // cout<<res;
            res+=((profit*curr_cap)/weight);
            //cout<<res<<" ";
            break;
        }
    }
    //cout<<endl;
    return res;
}

int main()
{
    vector<pair<int,int>>v;

    int start[] = {50, 20, 30}; 
    int end[]   = {600, 500, 400}; 
    int k=70;
    int n = sizeof(start)/sizeof(end[0]); 
  
    //Inserting value in vector pair
    for (int i=0; i<n; i++) 
        v.push_back( make_pair(start[i],end[i]) ); 

    cout<<fractional_kmp(v,k);

    return 0;
}
