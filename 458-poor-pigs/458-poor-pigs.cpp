class Solution {
public:
    //(T+1)^p=N....t=test/die....p=no_of_pig
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int t=minutesToTest/minutesToDie;
        return ceil(log(buckets)/log(t+1));
    }
};