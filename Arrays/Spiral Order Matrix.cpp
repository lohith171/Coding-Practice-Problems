//https://www.interviewbit.com/old/problems/spiral-order-matrix-i/

vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int top=0,bot=A.size()-1,left=0,right=A[0].size()-1,dir=0;
    vector<int>res;
    while(top<=bot && left<=right){
        if(dir==0){
            for(int i=left;i<=right;i++){
                res.push_back(A[top][i]);
            }
            top++;
        }else if(dir==1){
            for(int i=top;i<=bot;i++){
                res.push_back(A[i][right]);
            }
            right--;
        }else if(dir==2){
            for(int i=right;i>=left;i--){
                res.push_back(A[bot][i]);
            }
            bot--;
        }else{
            for(int i=bot;i>=top;i--){
                res.push_back(A[i][left]);
            }
            left++;;
        }
        dir=(dir+1)%4;
    }
    return res;
    
}
