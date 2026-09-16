class Solution {
public:
    bool isPalindrome (int num){
        if (num % 10 == 0 && num != 0){
            return false;
        }

        int reverse = 0;
        while(num > reverse){
            reverse = reverse * 10 + num % 10;
            num /= 10;
        }

        return reverse / 10 == num || reverse == num;
    }
};