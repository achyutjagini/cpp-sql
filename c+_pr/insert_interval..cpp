    bool flag = false;

    vector<vector<int>> v;
    
    for(int i = 0; i < intervals.size(); i++) {
        int x = intervals[i][0], y = intervals[i][1];
        
        if(flag) { 
            v.push_back(intervals[i]);
            continue;
        }
        
        if(x < newInterval[0]) {
            if(y < newInterval[0]) {
                v.push_back(intervals[i]);
            }
            else {
                newInterval[0] = x;
                if(newInterval[1] < y) {
                    newInterval[1] = y;
                }
            }
        }
        else if((x == newInterval[1]) || (x <= newInterval[1] && y >= newInterval[1]) ) {
            newInterval[1] = y;
        }
        else if(x > newInterval[1]) {
            v.push_back(newInterval);
            v.push_back(intervals[i]);
            flag = true;
        }
    }
    
    if(!flag) {
        v.push_back(newInterval);
    }
    
    return v;
}