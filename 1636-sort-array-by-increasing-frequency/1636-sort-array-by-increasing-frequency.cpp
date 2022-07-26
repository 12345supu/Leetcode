class Solution {
public:
    static bool comp(pair<int,int> &a,pair<int,int> &b){
        if(a.first==b.first){
            return a.second>b.second;
        }
       else  return a.first<b.first; 
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        pair<int,int> p;
        vector<pair<int,int>> v;
        for(auto i=m.begin();i!=m.end();i++){
            p.first = i->second;
            p.second = i->first;
            v.push_back(p);
        }
        
        nums.clear();
        sort(v.begin(),v.end(),comp);
        int n = v.size();
        for(int i=0;i<n;i++){
            
            for(int j=0;j<v[i].first;j++){
                nums.push_back(v[i].second);
            }
        }
        return nums;
    }
};