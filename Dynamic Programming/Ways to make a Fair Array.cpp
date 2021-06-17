 //https://leetcode.com/problems/ways-to-make-a-fair-array/

int waysToMakeFair(vector<int>& nums) {
        int teven=0,todd=0,res=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)teven+=nums[i];
            else todd+=nums[i];
        }
        int ev=0,od=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                teven-=nums[i];
                if(teven+od==todd+ev)res++;
                ev+=nums[i];
            }else{
                todd-=nums[i];
                if(teven+od==todd+ev)res++;
                od+=nums[i];
            }
        }
        return res;
    }
