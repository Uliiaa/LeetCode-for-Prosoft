class Solution {
public:
    int getReversed (int num){
        int reversedNum = 0;

        while (num > 0){
            reversedNum = num % 10 + reversedNum * 10;
            num /= 10;
        }

        return reversedNum;
    }

    bool isPalindrome (int num){
        if (num > 0){
            return getReversed(num) == num;
        } else {
            return false;
        }
    }
};