#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int LIS(vector<int> a, int i, vector<int> &dp)
{
    if (i == 0)
        return 1;
    if (dp[i] != -1)
        return dp[i];
    int length = 1;
    for (int j = i - 1; j >= 0; j--) 
    {
        if (a[i] > a[j]) 
        {
            length = max(length, LIS(a, j, dp) + 1);
        }
    }
    dp[i] = length;
    return length;
}

int main()
{
    vector<int> dp;
    vector<int> a = { 2, 5, 12, 3, 10, 6, 8, 14, 4, 11, 7, 15 };
    int n = a.size();
    cout << "Length of Longest Increasing Subsequence is: ";
    dp = vector<int>(n + 1, -1);
    int length = 1;
    for (int i = 0; i < n; i++)
    {
        length = max(length, LIS(a, i, dp));
    }
    cout<< length <<endl;
}