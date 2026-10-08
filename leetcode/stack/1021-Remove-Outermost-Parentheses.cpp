class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";

        int count=0;

        for (char i :s){

            if(i=='('){
            if(count!=0)
                ans+=i;
                count++;
            }
            else{
                count=count-1;

                if(count!=0){
                    ans+=i;
                }
            }

        }
        return ans;

        
    }
};