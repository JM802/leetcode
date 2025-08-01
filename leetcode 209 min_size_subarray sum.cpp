#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int result = INT_MAX;
        int sublen = 0;
        for (int i = 0; i < nums.size();i++)
        {
            int sum1 = 0;
            for (int j = i; j < nums.size();j++)
            {
                sum1 += nums[j];
                if(sum1>=target)
                {
                    sublen = j - i + 1;
                    result = (result < sublen) ? result : sublen;
                }
            }
        }
        if(result==INT_MAX)
        {
            return 0;
        }
        return result;
    }
};

int main()
{
    vector<int> nums;
    int target;
    int num;
    cin >> target;
    while(cin>>num)
    {
        nums.push_back(num);
    }
    Solution s;
    int res = s.minSubArrayLen(target, nums);
    cout << res << endl;
    return 0;
}
