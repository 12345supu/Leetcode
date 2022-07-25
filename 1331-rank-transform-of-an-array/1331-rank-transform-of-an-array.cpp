class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> s;
        for(int i=0;i<arr.size();i++)
            s.insert(arr[i]);
	    unordered_map<int,int> m;
	    int rank=1;
        for(auto i: s)  
            m[i]=rank++;
	    for(int i=0;i<arr.size();i++) 
            arr[i] = m[arr[i]];
	    return arr;
    }
};