class KthLargest {
public:
priority_queue<int, vector<int>, greater<int>> pq;
int val;

KthLargest(int k, vector<int>& nums) {
    val = k;

    for(int x : nums) {
        pq.push(x);
        if(pq.size() > val)
            pq.pop();
    }
}

int add(int num) {
    pq.push(num);

    if(pq.size() > val)
        pq.pop();

    return pq.top();
}
};