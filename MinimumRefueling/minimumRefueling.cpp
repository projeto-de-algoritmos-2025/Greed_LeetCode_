#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        vector<int> fuels;
        int fuel = startFuel;
        int stops = 0;
        int i = 0;
        int n = stations.size();

        while (fuel < target) {
            while (i < n && stations[i][0] <= fuel) {
                fuels.push_back(stations[i][1]);
                ++i;
            }

            if (fuels.empty()) return -1;

            sort(fuels.begin(), fuels.end());

            fuel += fuels.back();
            fuels.pop_back();
            ++stops;
        }

        return stops;
    }
};
