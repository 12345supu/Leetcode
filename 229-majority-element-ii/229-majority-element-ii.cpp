class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        int r=1,s=0,c1=0,c2=0;
        for (int i=0;i<nums.size();i++) 
	    {
		  if(nums[i]==r) 
              c1++;
		  else if(nums[i]==s)
              c2++;
		  else if(c1==0) 
          {
              r=nums[i];
              c1=1;
          }    
		  else if(c2==0) 
          {
              s=nums[i];
              c2=1;
          }    
		  else 
          {
              c1--;
              c2--;
          }
        }
        c1=0;
        c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==r)
                c1++;
            if(nums[i]==s)
                c2++;
        }
        if(c1>nums.size()/3)
                v.push_back(r);
        if(c2>nums.size()/3)
            v.push_back(s);
        return v;
    }
};