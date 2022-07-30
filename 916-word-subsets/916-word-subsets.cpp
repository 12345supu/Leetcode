class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;

	    int req[26] = {0};

	    for (string& b : words2)
        {
		    int newReq[26] = {0};
		    for (char&c : b) 
                newReq[c - 'a']++;
		    for (int i = 0; i < 26; ++i) 
                req[i] = max(req[i], newReq[i]);
	    }

	for (string&a : words1) 
    {
		int demand[26] = {0};
		bool flag = true;
		for (char&c : a) 
            demand[c - 'a']++;
		for (int i = 0; i < 26; ++i) 
        {
			if (demand[i] < req[i]) 
            {
				flag = false;
				break;
			}
		}
		if (flag) res.push_back(a);
	}

	return res;
    }
};