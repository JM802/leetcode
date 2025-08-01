#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int slow = 0;
        for (int fast = 0; fast < nums.size();fast++)
        {
            if(nums[fast]!=val)
            {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
    }
};


int main()
{
    vector<int> nums;
    int val;
    int num;
    while(cin>>num)
    {
        nums.push_back(num);
    }
    cin >> val;
    Solution s;
    int res = s.removeElement(nums, val);
    cout << res << endl;
    return 0;
}