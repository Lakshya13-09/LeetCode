class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int i = 1; i < n; i++){
            string temp = "";
            int c = 1;
            for(int j = 1; j < s.size(); j++){
                if(s[j] == s[j - 1]){
                    c++;
                }
                else{
                    temp += to_string(c) + s[j-1];
                    c = 1;
                }
            }
            temp += to_string(c) + s.back();
            s = temp;
        }
        return s;
    }
};