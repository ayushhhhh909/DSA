class Solution {
public:
    string sortSentence(string s) {
        int n=s.size();
        vector<string> ans(10);
        stringstream ss(s);
        string word;
        while(ss>>word){
            int pos=word.back()-'0';
            word.pop_back();
            ans[pos]=word;
        }
        string arr;
        for(int i=1;i<ans.size();i++){
            if(ans[i]!=""){
                arr+=ans[i]+" ";
            }
        }
        arr.pop_back();
        return arr;
        
        


    }
};