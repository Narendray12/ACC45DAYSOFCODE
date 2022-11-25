class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        for (int i = 0; i < matrix.size(); i++)
        {
            int end = matrix[i].size() - 1, start = 0;
            int mid = start + ((end - start) / 2);
            while (start <= end)
            {
                if (matrix[i][mid] == target)
                {
                    return true;
                }
                if (target > matrix[i][mid])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
                mid = start + ((end - start) / 2);
            }
        }
        return false;
    }
};