class Solution {
public:
    // q=extension and p=reflection 
    // ext * p = ref * q
    int mirrorReflection(int p, int q) {
        while(q%2==0 && p%2==0)
        {
            q/=2;
            p/=2;
        }
        if(q%2==0 && p%2!=0)
            return 0;
        else if(q%2!=0 && p%2==0)
            return 2;
        else
            return 1;
    }
};