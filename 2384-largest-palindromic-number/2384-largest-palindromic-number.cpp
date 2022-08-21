class Solution {
public:
    string largestPalindromic(string num) {
        map<char,int> m;
        for(auto x : num){
            m[x]++;
        }
        vector<char> e , o;
        
        for(auto x : m){
            if(x.second == 1){
                o.push_back(x.first);
            }else{
                if(x.second%2 ==1){
                    o.push_back(x.first);
                    m[x.first]--;
                }
                e.push_back(x.first);
            }
        }

        sort(o.begin(),o.end(),greater<int>());
        sort(e.begin(),e.end());

        deque<char> dq;
        if(o.size()>0) 
            dq.push_front(o[0]);
        if(e.size()==1 && e[0] == '0')
        {
            if(dq.empty()) 
                dq.push_front('0');
        }
        else{
            for(auto x : e){
                int c = m[x]/2;
                while(c-- > 0){
                    dq.push_back(x);
					dq.push_front(x);
                }
            }
        }
        
        string res = "";
        while(dq.empty()==false)
        {
            res += dq.front();
            dq.pop_front();
        }
        return res;
    }
};