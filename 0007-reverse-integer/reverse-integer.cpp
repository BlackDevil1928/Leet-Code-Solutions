class Solution {
public:
    int reverse(int x) {
        int num = x;
        long long rev = 0;
        while(num!=0){
            rev = rev*10 + num%10;
            num /= 10;
        }
        if (rev > INT_MAX || rev< INT_MIN) return 0;
        return rev;
    }
};
