//
//#include <iostream>
//#include <vector>
//using namespace std;
//void  paile(int n, vector<int>& result) {
//    if (n == 1) result[0] = 1;
//    else if (n == 2) {
//        result[0] = 1;
//        result[1] = 2;
//    }
//    else if (n >= 3) {
//        int temp = n / 2 + 1;
//        int num;
//        result[0] = temp;
//        for (int i = 1; i < n; i++) {
//            if (i % 2 == 0) {
//                num = i / 2;
//                result[i] = temp + num;
//            }
//            else {
//                num = i / 2 + 1;
//                result[i] = temp - num;
//            }
//        }
//    }
//}
//int main() {
//    int n;
//    cin >> n;
//    vector<int> result(n, 0);
//    paile(n, result);
//    for (int i = 0; i < n; ++i) {
//        cout << result[i] << " ";
//    }
//    return 0;
//}

// 64 位输出请用 printf("%lld")
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//#include <limits.h>
//
//using namespace std;
//
//
//int get_extremum(const vector<int>& arr)//极值
//{
//    int max = arr[0], min = max;
//    vector<int>::const_iterator it = arr.begin();
//    while (it != arr.end())
//    {
//        if (*it > max)
//        {
//            max = *it;
//        }
//        if (*it < min)
//        {
//            min = *it;
//        }
//        it++;
//    }
//    return max - min;
//}
//
//int get_b(const vector<int>& arr)//返回arr的权值
//{
//    vector<int> b;
//    for (int i = 0; i < (arr.size() - 1); i++)
//    {
//        b.push_back(arr[i] + arr[i + 1]);
//    }
//    return get_extremum(b);
//}
//
//void my_swap(vector<int>& arr, int a, int b)//交换
//{
//    int tmp = arr[a];
//    arr[a] = arr[b];
//    arr[b] = tmp;
//}
//
//int min_weight = INT_MAX;//存放最小的权值
//vector<int> v_result;//存放权值的排列
//
//void result(const vector<int>& arr)//结果
//{
//    int result = get_b(arr);//得到arr的权值
//    if (result < min_weight)
//    {
//        min_weight = result;
//        v_result = arr;
//    }
//}
//
//void permutetion(vector<int>& arr, int pos)//全排
//{
//    if (pos >= arr.size())//循环递归结束
//    {
//        result(arr);
//    }
//    for (int i = pos; i < arr.size(); i++)
//    {
//        if (min_weight > 1)
//        {
//            my_swap(arr, pos, i);//交换i，j位置的数据
//            permutetion(arr, pos + 1);
//            my_swap(arr, pos, i);
//        }
//    }
//}
//int main()
//{
//    //生成长度为n的原始排列数组
//    int n = 0;//n个数组
//    cin >> n;
//    vector<int> a;
//    for (int i = 1; i <= n; i++)
//    {
//        a.push_back(i);
//    }
//
//    //全排
//    permutetion(a, 0);
//
//    //打印结果
//    vector<int>::iterator it = v_result.begin();
//    while (it < v_result.end())
//    {
//        cout << *it << " ";
//        it++;
//    }
//    cout << endl;
//
//    cout << min_weight;
//
//}