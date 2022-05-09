class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> q;
    int size;
    KthLargest(int k, vector<int>& nums) {
        size = k;
        for(int i: nums){
            q.push(i);
            if(q.size()>k) q.pop();
        }
    }
    
    int add(int val) {
        q.push(val);
        if(q.size()>size)q.pop();
        int mini = q.top();
        return mini;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */