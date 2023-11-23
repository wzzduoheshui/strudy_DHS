#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

//class Solution {
//public:
//    int triangleNumber(vector<int>& nums) {
//        size_t size = nums.size();
//        std::sort(nums.begin(), nums.end());
//        int sum = 0;
//        for (int c = size - 1; c >= 2; --c)
//        {
//            int a = 0;
//            int b = c - 1;
//            while (a < b && b < c)
//            {
//                if (nums[a] + nums[b] > nums[c])
//                {
//                    sum += (b - a);
//                    --b;
//                    a = 0;
//                }
//                else
//                {
//                    ++a;
//                }
//            }
//        }
//        return sum;
//    }
//    
//    void print(const vector<int>& nums)
//    {
//        for (auto e : nums)
//        {
//            cout << e << " ";
//        }
//        cout << endl;
//    }
//};

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        size_t size = nums.size();
        int sum = 0;
        for (int c = size - 1; c > 1; --c)
        {
            for (int b = c - 1; b > 0; --b)
            {
                int left = 0;
                int right = b - 1;
                int mid = (left + right) / 2;
                int k = b;
                while (left < right)
                {
                    mid = (left + right) / 2;
                    if (nums[mid] + nums[b] <= nums[c])
                    {
                        k = mid;
                        left = mid + 1;
                    }
                    else
                    {
                        right = mid;
                    }
                }
                sum += b - mid;
            }
        }
        return sum;
    }

    void print(const vector<int>& nums)
    {
        for (auto e : nums)
        {
            cout << e << " ";
        }
        cout << endl;
    }

};

int main()
{
	vector<int> nums = { 2,3,2,4 };
    Solution s;
    s.print(nums);
    cout << s.triangleNumber(nums) << endl;
    s.print(nums);
	return 0;
}



//¿ìÀÖÊý£¨https://leetcode.cn/problems/happy-number/£©

//
//int numHappy(int n)
//{
//    int sum = 0;
//    while (n > 0)
//    {
//        int a = n % 10;
//        sum += a * a;
//        n /= 10;
//    }
//    return sum;
//}
//
//bool isHappy(int n) 
//{
//    int slow = numHappy(n);
//    int fast = numHappy(numHappy(n));
//
//    while (fast != slow)
//    {
//        fast = numHappy(numHappy(fast));
//        slow = numHappy(slow);
//    }
//
//    if (fast == 1)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//
//int main()
//{
//    int num = 19;
//    cout << isHappy(num) << endl;
//	return 0;
//}

//void test(vector<int>& arr)
//{
//    int dest = 0;
//    int cur = 0;
//    int n = arr.size();
//    while (cur < arr.size() && dest < arr.size())
//    {
//        if (arr[cur] == 0)
//        {
//            dest += 2;
//        }
//        else
//        {
//            ++dest;
//        }
//        ++cur;
//    }
//    if (dest >= n)
//    {
//        arr[n - 1] = 0;
//        --cur;
//        dest -= 2;
//    }
//    while (dest != cur)
//    {
//        if (dest < arr.size() && cur >= 0)
//        {
//            if (cur == 0)
//            {
//                arr[dest--] = 0;
//                arr[dest--] = 0;
//            }
//            else
//            {
//                arr[dest--] = arr[cur];
//            }
//            --cur;
//        }
//        else
//        {
//            
//        }
//    }
//}
//
//void duplicateZeros(vector<int>& arr) {
//    int dest = -1;
//    int cur = 0;
//    int n = arr.size();
//    while (dest < n)
//    {
//        if (arr[cur] == 0)
//        {
//            dest += 2;
//        }
//        else
//        {
//            ++dest;
//        }
//        ++cur;
//    }
//    if (dest == n)
//    {
//        arr[--dest] = 0;
//        --dest;
//        --cur;
//    }
//    else
//    {
//        --cur;
//    }
//    while (dest != cur)
//    {
//        if (arr[cur] == 0)
//        {
//            arr[dest--] == 0;
//            arr[dest--] == 0;
//        }
//        else
//        {
//            arr[dest--] = arr[cur];
//        }
//        --cur;
//    }
//
//}
//int main()
//{
//	vector<int> arr = { 1, 0, 2, 3, 0, 4, 5, 0 };
//    //vector<int> arr = { 8,4,5,0,0,0,0,7 };
//    duplicateZeros(arr);
//
//	return 0;
//}