class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int k=0;
        for(char c:s){
          if(c=='('){  
            if(k>0){
                ans+=c;
            }
            k++;
          }
          else{
            k--;
            if(k>0){
                ans+=c;
            }
          }

        }
        return ans;


        
        
        
    }
};