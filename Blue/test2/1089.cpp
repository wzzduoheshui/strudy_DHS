#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

void test(vector<int>& arr)
{
    int dest = 0;
    int cur = 0;
    int n = arr.size();
    while (cur < arr.size() && dest < arr.size())
    {
        if (arr[cur] == 0)
        {
            dest += 2;
        }
        else
        {
            ++dest;
        }
        ++cur;
    }
    if (dest >= n)
    {
        arr[n - 1] = 0;
        --cur;
        dest -= 2;
    }
    while (dest != cur)
    {
        if (dest < arr.size() && cur >= 0)
        {
            if (cur == 0)
            {
                arr[dest--] = 0;
                arr[dest--] = 0;
            }
            else
            {
                arr[dest--] = arr[cur];
            }
            --cur;
        }
        else
        {
            
        }
    }
}
int main()
{
	//vector<int> arr = { 1, 0, 2, 3, 0, 4, 5, 0 };
    vector<int> arr = { 8,4,5,0,0,0,0,7 };
    test(arr);

	return 0;
}