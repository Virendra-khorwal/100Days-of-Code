class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] >= nums[i + 1])
            {
                int temp = nums[i] - nums[i + 1] + 1;
                nums[i + 1] += temp;
                count += temp;
            }
        }

        return count;
    }
};