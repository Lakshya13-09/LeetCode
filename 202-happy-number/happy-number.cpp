class Solution {
public:
    bool isHappy(int n) {
        if(n<=0){
            cout<<"not happy number";
            return 0;
        }
        int s;
        while(n!=1 && n!=4){
            s=0;
            while(n>0){
                int d=n%10;
                s=s+(d*d);
                n=n/10;
            }
        n=s;
        }
        if(s==1){
            return true;
        }
        else{
            return false;
        }
    }
};