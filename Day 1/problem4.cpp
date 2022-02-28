// Approach 1

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            string s = to_string(nums[i]);
            if (s.size() % 2 == 0)
            {
                count++;
            }
        }

        return count;
    }
};

// Aproach 2
class Solution
{
public:
    int getDigi(int x)
    {
        return log10(x) + 1;
    }
    int findNumbers(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (getDigi(nums[i]) % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};