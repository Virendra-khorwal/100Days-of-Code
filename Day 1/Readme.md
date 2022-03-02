## Day 1

### Problem 1

[Minimum Operations to Make the Array Increasing](https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/)

#### Solution 
```c++
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

```

### Problem 2

[Find Greatest Common Divisor of Array](https://leetcode.com/problems/find-greatest-common-divisor-of-array/)

#### Solution 
```c++
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

```

### Problem 3

[Maximum Product of Two Elements in an Array](https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/)

#### Solution 
```c++
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int s = nums.size();
        return ((nums[s - 1] - 1) * (nums[s - 2] - 1));
    }
};

```

### Problem 4

[Find Numbers with Even Number of Digits](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/)

#### Solution 
```c++
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


```

```c++
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

```