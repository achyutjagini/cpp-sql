#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
     {
        
        int n=intervals.size();
        vector <vector<int>> res;
        
        for(int i=0;i<n;i++)
        {   if(newInterval[0]>intervals[i][1]) 
                res.push_back(intervals[i]);
                
            else if(newInterval[1] <intervals[i][0])
               { res.push_back(newInterval);

                //vector<vector<int>>::iterator it=intervals[i];
                //res.insert(it,intervals.begin(),intervals.end());

                return res;
               }
                       
            else
                newInterval= {min(intervals[i][0],newInterval[0]),max(intervals[i][1],newInterval[1])};
        }   
        res.push_back(newInterval);
                
        return res;
                       
    }

int main()
{
vector<vector<int>> res;
vector<vector<int>> intervals;
intervals.push_back({1,3});
intervals.push_back({6,9});
     for (int i = 0; i < intervals.size(); i++) {
        for (int j = 0; j < intervals[i].size(); j++)
            cout << intervals[i][j] << " ";
        cout << endl;
    }
vector<int> newinter={2,7};

res=insert(intervals,newinter);
 for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }

}