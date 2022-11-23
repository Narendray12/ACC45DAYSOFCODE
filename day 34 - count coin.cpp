class Solution
{
public:
    int arrangeCoins(int n)
    {
        int k, triangles = 0;

        k = n;
        for (int j = 1; j <= k; j++)
        {
            if (k >= j)
            {
                triangles++;
                k = k - j;
            }
        }
        return triangles;
    }
};