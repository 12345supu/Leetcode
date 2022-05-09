class Solution {
public:
    vector<string> r;
    void solve(vector<string> s, string cur="", int i=0)
    {
        if (cur.size() == s.size()){
            if (cur != "")
            r.push_back(cur);
            return ;
        }
        for(int j = 0 ; j<s[i].size(); j++){
            solve(s,cur+s[i][j],i+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        map<int,string> m;
        m[2]="abc"; m[3]="def"; m[4]="ghi";
        m[5]="jkl"; m[6]="mno"; m[7]="pqrs";
        m[8]="tuv"; m[9]="wxyz";
        // for(auto x:m)
        //     cout<<x.first<<" "<<x.second<<" ";
        vector<string> s;
        for(char c:digits){
            s.push_back(m[c-48]);
        }
        
        solve(s);
        
        return r;
    }
};