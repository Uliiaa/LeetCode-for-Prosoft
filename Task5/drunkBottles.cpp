class Solution {
public:
    int maxBottlesDrunk(int fullBottles, int numExchange) {
        int emptyBottles = 0;
        int drunkBottles = 0;

        while (fullBottles > 0 || emptyBottles == numExchange){
            if (emptyBottles != numExchange){
                --fullBottles;
                ++emptyBottles;
                ++drunkBottles;
            } else {
                emptyBottles = 0;
                ++fullBottles;
                ++numExchange;
            }
        }

        return drunkBottles;
    }
};