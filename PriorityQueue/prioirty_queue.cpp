#include <iostream>
#include <queue>
using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq; // Min Heap implementation
    // For max heap : priority_queue<int> p;
    for (int i = 0; i < nums.size(); i++)
    {
        pq.push(nums[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    return pq.top();
}

int main()
{
    vector<int> v = {1, 4, 3, 2, 5, 2, 7};
    int ans = findKthLargest(v, 2);
    cout << "Ans = " << ans << endl;
}
