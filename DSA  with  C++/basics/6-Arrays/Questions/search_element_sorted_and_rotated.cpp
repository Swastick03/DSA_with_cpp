class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int s = 0, e = nums.size() - 1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[s] <= nums[mid])
            {
                if (nums[s] <= target && target <= nums[mid])
                {
                    e = mid;
                }
                else
                {
                    s = mid + 1;
                }
            }
            else if (nums[mid] <= nums[s])
            {
                if (nums[mid] <= target && target <= nums[e])
                {
                    s = mid + 1;
                }
                else
                {
                    e = mid;
                }
            }

            else
            {
                if (nums[mid] <= target)
                {
                    s = mid + 1;
                }
                else
                {
                    e = mid;
                }
            }
        }
        return -1;
    }
};