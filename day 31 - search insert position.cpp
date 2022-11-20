class Solution
{
public:
    int search(vector<int> &arr, int size, int no)
    {
        int start = 0;
        int end = size - 1;
        int mid = start + ((end - start) / 2);
        while (start <= end)
        {
            if (arr[mid] == no)
            {
                return mid;
            }
            if (arr[mid] > no)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            mid = start + ((end - start) / 2);
        }
        return -1;
    }
    int searchInsert(vector<int> &arr, int target)
    {
        if (search(arr, arr.size(), target) + 1)
        {
            return search(arr, arr.size(), target);
        }
        else
        {
            int start = 0;
            int end = arr.size() - 1;
            int mid = start + ((end - start) / 2);
            while (start <= end)
            {
                if (arr[mid] > target)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
                mid = start + ((end - start) / 2);
            }
            return mid;
        }
    }
};