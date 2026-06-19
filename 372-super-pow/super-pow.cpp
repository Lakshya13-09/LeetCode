class Solution {
public:
    const int MOD = 1337;
    int modPow(int a , int k){
        int res = 1;
        a %= MOD;
        while(k > 0){
            if(k & 1){
                res = (res * a) % MOD;
            }
            a = (a * a) % MOD;
            k >>=1;
        }
        return res;
    }
    int superPow(int a, vector<int>& b) {
        int res = 1;
        for( int digit : b){
            res = modPow(res , 10) * modPow(a, digit) % MOD;
        }
        return res;
    }
};