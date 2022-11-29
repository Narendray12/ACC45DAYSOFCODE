class Solution
{
public:
    int binarysearch(vector<int> &arr, int no, int size)
    {
        int end = size - 1, start = 0;
        int mid = start + ((end - start) / 2);
        while (start <= end)
        {
            if (arr[mid] == no)
            {
                return mid;
            }
            if (no > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + ((end - start) / 2);
        }
        return -1;
    }
    int search(vector<int> &arr, int target)
    {

        return binarysearch(arr, target, arr.size());
    }
};