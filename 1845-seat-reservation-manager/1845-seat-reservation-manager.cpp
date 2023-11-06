class SeatManager {
public:
    int count;
    priority_queue<int, vector<int>, greater<int>> pq;
    SeatManager(int n) 
    {
        count = 1; 
    }
    
    int reserve() 
    {
        if(pq.empty())
            return count++;
        
        int n = pq.top();
        pq.pop();
        return n;
    }
    
    void unreserve(int seatNumber) 
    {
        pq.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */