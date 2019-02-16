***** 1st solution*****

vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>res(2,0),temp;
        temp=nums;
        int i=0,j=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(1){
            if(nums[i]+nums[j]==target)
                break;
            if(nums[i]+nums[j]>target)  j--;
            else    i++;
        }
        int k=0;
        for(int p=0;p<temp.size();p++)
        {
            if((temp[p]==nums[i]||temp[p]==nums[j]) && k<2)
                res[k++]=p;
        }
        return res;
    }
    
    
    
    ***** 2nd solution*****

vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            if(map.count(nums[i])==1)   return {map[nums[i]],i};
            map[target-nums[i]]=i;
        }
        return {0,0};
    }
