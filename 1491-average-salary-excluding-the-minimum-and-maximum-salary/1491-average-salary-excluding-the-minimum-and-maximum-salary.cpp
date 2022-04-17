class Solution {
public:
    double average(vector<int>& salary) {
        double avg,sum=0;
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++)
        {
            sum+=salary[i];
        }
        avg=sum/(salary.size()-2);
        return avg;
        
    }
};