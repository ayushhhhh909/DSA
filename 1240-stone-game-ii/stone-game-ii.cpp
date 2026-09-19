class Solution {
public:
int t[2][101][101];

    int solveforalice(vector<int>&piles,int person,int i,int M){
        int n=piles.size();
        
        
  
  
        if(i>=n){
            return 0;
        }
        if(t[person][i][M]!=-1){
            return t[person][i][M];
        }
        int stones=0;
        int result;
        if(person == 1)
            result = 0;
            else
             result = INT_MAX;
        for(int x=1;x<=min(2*M,n-i);x++){
            stones+=piles[i+x-1];
            
            
            if(person==1){
                
                result=max(result,stones+solveforalice(piles,0,i+x,max(M,x)));


            }
            if(person==0){
                
                result=min(result,solveforalice(piles,1,i+x,max(M,x)));
            }
        }
        return t[person][i][M]=result;

    }
    int stoneGameII(vector<int>& piles) {
        int M=1;
        int person;
        memset(t,-1,sizeof(t));
 
 
        return solveforalice(piles,1,0,M);

        
    }
};