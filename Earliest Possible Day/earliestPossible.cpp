class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int, int>> seeds(n);
        
        for (int i = 0; i < n; ++i) {
            seeds[i] = {growTime[i], plantTime[i]};
        }
        
        
        sort(seeds.begin(), seeds.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
            return a.first > b.first;
        });
        
        int currentDay = 0;
        int result = 0;     
        
        for (const auto& [g, p] : seeds) {
            currentDay += p;             
            result = max(result, currentDay + g);
        }
        
        return result;
    }
};

