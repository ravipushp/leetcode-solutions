class Solution {
public:
    int smallestNumber(int n, int t) {
        for (int i = n; ; i++) {   
            int temp = i;
            int pro = 1;

            while (temp > 0) {
                int rem = temp % 10;
                pro *= rem;
                temp /= 10;
            }

            if (pro % t == 0) {
                return i;
            }
        }
    }
};