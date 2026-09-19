class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int mindiff=arr[1]-arr[0];
        
        
        for(int i=0;i<n-1;i++){
            mindiff=min(mindiff,arr[i+1]-arr[i]);
            
            
        }
        vector<vector<int>>sol;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]==mindiff){
                sol.push_back({arr[i],arr[i+1]});
            }
        }
        return sol;

        
    }
};