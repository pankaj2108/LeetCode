*****1st solution*****

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int> > vect;
        sort(nums.begin(),nums.end());
        for(int x=0;x<nums.size();x++){
            int i=x+1,j=nums.size()-1;
            int target=nums[x];
            while(i<j){
                    if(nums[i]+nums[j]+target==0)
                    {
                        vect.push_back({target,nums[i],nums[j]});
                        i++;j--;
                    }
                    else if(nums[i]+nums[j]+target>0)  j--;
                    else    i++;
                }
            }
        set<vector<int> >s(vect.begin(),vect.end());    //removes duplicates.
         vect.assign(s.begin(),s.end());
        return vect;
    }





*******best solution *******


vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int> > vect;
        sort(nums.begin(),nums.end());
        for(int x=0;x<nums.size();x++){
            int i=x+1,j=nums.size()-1;
            int target=nums[x];
            while(i<j){
                    if(nums[i]+nums[j]+target==0)
                    {
                        vect.push_back({target,nums[i],nums[j]});
                        while(i<j && nums[i]==nums[i+1])    i++;        //since vector is sorted so it 
                                                                        //skips same consecutive numbers to avoid duplicates
                        while(i<j && nums[j]==nums[j-1])    j--;
                        i++;
                        j--;
                    }
                    else if(nums[i]+nums[j]+target>0)  j--;
                    else    i++;
                }
            while(x+1<nums.size() && nums[x]==nums[x+1])    x++;
            }
        return vect;
    }
