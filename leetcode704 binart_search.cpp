#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        while(left<=right)
        {
            int mid = (left + right) / 2;
            if(target<nums[mid])
            {
                right = mid - 1;
            }
            else if(target>nums[mid])
            {
                left = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
};


int main()
{
    vector<int> nums;
    int target;
    int num;
    while(cin>>num)
    {
        nums.push_back(num);
    }
    cin >> target;
    Solution s;
    int res=s.search(nums, target);
    cout << res << endl;
    return 0;
}