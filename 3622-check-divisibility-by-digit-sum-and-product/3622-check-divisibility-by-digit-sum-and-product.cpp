class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int result=0;
        int temp=n;
        while(temp>0){
            int rem=temp%10;
            sum=sum+rem;
            pro=pro*rem;
            temp=temp/10;
        }
        result=sum+pro;
        if(n%result==0){
            return true;
        }
         return false;
    }
};