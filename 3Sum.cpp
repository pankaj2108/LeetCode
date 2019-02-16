*****1st solution*****

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int> > vect;
        sort(nums.begin(),nums.end());
        for(int x=0;x<nums.size();x++){
            int i=x+1,j=nums.size()-1;
            int target=nums[x];
            while(i<j){
                if(i==x)    i++;
                else if(j==x)   j--;
                    if(nums[i]+nums[j]+target==0)
                    {
                        vect.push_back({target,nums[i],nums[j]});
                        i++;j--;
                    }
                    else if(nums[i]+nums[j]+target>0)  j--;
                    else    i++;
                }
            }
        set<vector<int> >s(vect.begin(),vect.end());
         vect.assign(s.begin(),s.end());
        return vect;
    }

