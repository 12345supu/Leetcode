class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> v(rectangles.size());
        for(int i=0;i<rectangles.size();i++)
        {
            int s=min(rectangles[i][0],rectangles[i][1]);
            v.push_back(s);
        }
        sort(v.begin(),v.end(), greater<int>());
        int m=v[0],c=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==m)
                c++;
            else
                break;
        }
        return c;
    }
};