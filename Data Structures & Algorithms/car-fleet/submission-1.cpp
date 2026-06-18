class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,double>> poswithtime;
        for(int i=0;i<position.size();i++){
            double time = (double)(target-position[i])/(double)speed[i];
            poswithtime.push_back({position[i],time});
        }
        sort(poswithtime.begin(),poswithtime.end());
        int ans=0;
        double maxtime=-1.0;
        // stack<int> st;
        for(int i=n-1;i>=0;i--){
            if(maxtime<poswithtime[i].second){
                ans++;
                maxtime=poswithtime[i].second;
            }
        }

        return ans;
    }
};
