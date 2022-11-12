class MedianFinder {
     multiset<int> ms;
     multiset<int>:: iterator it1;
     multiset<int>:: iterator it2;
public:
    MedianFinder() {  

    }    
    void addNum(int num) 
    {    
        ms.insert(num);
        if(ms.size() == 1) 
        {
            it1 = ms.begin();
            it2 = ms.begin();
            return;
        }            
        if(ms.size() % 2 == 0) 
        {
            if(num < *it1)
                it1--;
            else 
                it2++;            
        }
        else 
        {
            if(num < *it1)
                it2--;
            else if(num >= *it2)
                it1++;
            else
            {
                it1++;
                it2--;
            }
        }       
        
    }
    
    double findMedian() {
        return (*it1 + *it2)/2.0;
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */