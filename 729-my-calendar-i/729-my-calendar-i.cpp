class MyCalendar {
public:
    vector<pair<int, int>> books;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for (auto p : books)
        {
            int mx = p.first>start ? p.first : start;
            int mn = end>p.second ? p.second : end;
            if (mx<mn) 
                return false;
        }
        books.push_back(make_pair(start,end));
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */