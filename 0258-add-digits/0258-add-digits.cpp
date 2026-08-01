class Solution {
public:
    int addDigits(int num) {
        int rem=0;
        int sum=0;
        while(num>0){
            rem=num%10;
            sum=sum+rem;
            num=num/10;
            if(num==0){
                num=sum;
                sum=0;
                if(num<10){
                    return num;
                }
            }
        }
        return 0;
    }
};