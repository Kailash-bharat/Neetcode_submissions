/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<pair<int,int>> v;
        for(auto i:intervals){
            v.push_back(make_pair(i.start,1));
            v.push_back(make_pair(i.end,-1));
        }
        int ans=0;
        int rooms=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i].second==-1){
                rooms--;
            }
            else{
                rooms++;
                ans=max(ans,rooms);
            }
        }
        return ans;
    }
};
