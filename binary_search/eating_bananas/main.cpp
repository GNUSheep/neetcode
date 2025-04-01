class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *std::max_element(piles.begin(), piles.end());
        int output = 1;

        while(l <= r) {
            int rate = (r + l) / 2;

            int time = 0;
            for(auto &banana : piles) {
                time += std::ceil((double)banana / rate);
            }
            cout << time << " " << rate << endl;
            if(time <= h) {
                r = rate - 1;
                output = rate;
            }else {
                l = rate + 1;
            }
        }

        return output;
    }
    
};
