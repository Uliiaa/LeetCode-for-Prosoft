class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());

        int maxCoinsNum = 0;
        int pilesSize = piles.size();

        for (int i = pilesSize - 2; i >= pilesSize / 3; i -= 2){
            maxCoinsNum += piles[i];
        }

        return maxCoinsNum;
    }
};