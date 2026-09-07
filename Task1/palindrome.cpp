class Solution {
public:
    int getReversed (int copyNum){
        int reversedNum = 0;

        while (copyNum > 0){
            reversedNum = copyNum % 10 + reversedNum * 10;
            copyNum /= 10;
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