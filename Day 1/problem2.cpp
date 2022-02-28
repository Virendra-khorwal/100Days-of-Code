class Solution
{

public:
    int gcd(int x, int y)
    {
        if (y == 0)
            return x;
        return gcd(y, x % y);
    }
    int findGCD(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        return gcd(nums[0], nums[nums.size() - 1]);
    }
};