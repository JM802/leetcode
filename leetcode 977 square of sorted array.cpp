#include <iostream>
#include <vector>
#include <climits>
#include<algorithm>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> res(n);
        int k = nums.size() - 1;
        int i = 0;
        int j = nums.size() - 1;
        while(i<=j)
        {
            if(nums[i]*nums[i]>nums[j]*nums[j])
            {
                res[k] = nums[i] * nums[i];
                k--;
                i++;
            }
            else
            {
                res[k] = nums[j] * nums[j];
                k--;
                j--;
            }
        }
        return res;
    }
};

int main()
{
    int num;
    vector<int> nums;
    while(cin>>num)
    {
        nums.push_back(num);
    }
    Solution s;
    vector<int> res = s.sortedSquares(nums);
    for_each(res.begin(), res.end(), [](int m)
             { cout << m << " "; });
    return 0;
}