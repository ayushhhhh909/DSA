class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> hash(1001,0);
        vector<int>ans;
        int x;
        for(int x:arr1){
            hash[x]++;
        }
        for(int i=0;i<arr2.size();i++){
            x=arr2[i];
            while(hash[x]>0){
                ans.push_back(x);
                hash[x]--;
            }
        }
        for(int i = 0; i < hash.size(); i++) {
                while(hash[i] > 0) {
                        ans.push_back(i);
                                hash[i]--;
                                    }}
        return ans;                            


        
        
        
    }
};