#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n = 0;//长度为n
    cin >> n;
    vector<vector<int>> all;
    vector<int> tmp;
    for (int i = 1; i <= n; i++)
    {
        tmp.push_back(i);
    }
    all.push_back(tmp);
    //原始排列初始化




}





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////小美定义一个数组a的权值计算如下：首先将a的每一对相邻两项求和，得到一个b数组。
////那么b数组的最大值减最小值即为a数组的权值。
//// 例如，若a = [2, 1, 3]，那么b = [3, 4]，b数组的极差是1。因此a数组的权值为1。
//// 现在小美希望你能构造一个长度为n的排列，满足权值尽可能小。你能帮帮她吗？
//// 排列是指一个长度为n的数组，其中 1 到n每个元素恰好出现一次。
//
////第一版用的递归
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
//int get_b(const vector<int>& arr)
//{
//    vector<int> b;
//    for (int i = 0; i < (arr.size() - 1); i++)
//    {
//        b.push_back(arr[i] + arr[i + 1]);
//    }
//    return get_extremum(b);
//}
//
//void my_swap(vector<int>& arr, int a, int b)
//{
//    int tmp = arr[a];
//    arr[b] = arr[a];
//    arr[a] = tmp;
//
//}
//
//void permutetion(vector<int>& arr, int pos)
//{
//    if (pos >= arr.size())
//    {
//        vector<int> result;//存放结果
//        if (result.size() == 0)
//        {
//            result = arr;
//            result.push_back(get_b(arr));
//        }
//        get_b(arr);
//    }
//    for (int i = pos; i < arr.size(); i++)
//    {
//        my_swap(arr, pos, i);//交换i，j位置的数据
//        permutetion(arr, pos + 1);
//        my_swap(arr, pos, i)
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
//}
//// 64 位输出请用 printf("%lld")
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//int sum = 0;
//
////打印数组内容
//void print(int array[], int len) {
//	printf("{");
//	for (int i = 0; i < len; ++i)
//		cout << array[i] << " ";
//	printf("}\n");
//}
//
////实现两数交换
//void swap(int* o, int i, int j) {
//	printf("%d和%d交换:交换后为：", i, j);
//	int tmp = o[i];
//	o[i] = o[j];
//	o[j] = tmp;
//}
//
////实现数组颠倒
//void reverse(int array[], int s, int e) {
//	printf("从%d位置颠倒:颠倒为：", s - 1);
//	while (s < e) {
//		swap(array, s, e);
//		++s, --e;
//	}
//	print(array, 4);
//
//}
//
////快排比较函数
//int compare(const void* a, const void* b) {
//	return *(int*)(a)-*(int*)(b);//如果小于0，a排在前面b前面
//}
//
////字典序实现数组全排列并打印
//void permutation(int array[], int len) {
//	qsort(array, len, sizeof(array[0]), compare);//快速排序
//	++sum;
//	print(array, len);
//
//	while (true) {
//		int pos = -1;
//		//从后往前寻找第一个替换点
//		for (int i = len - 2; i >= 0; --i)
//			if (array[i] < array[i + 1]) {
//				pos = i;
//				break;
//			}
//		if (pos == -1)
//			return;//排列结束
//
//		//从后向前寻找第一个大于替换点所在元素
//		int subsIndex = -1;
//		for (int i = len - 1; i > pos; --i)
//			if (array[i] > array[pos]) {
//				subsIndex = i;
//				break;
//			}
//		//交换
//		swap(array, pos, subsIndex);
//		print(array, 4);
//		//颠倒
//		reverse(array, pos + 1, len - 1);
//		++sum;
//		print(array, len);
//	}
//}
//
//int main() {
//	int A[] = { 1,4,3,2 };
//	permutation(A, 4);
//	cout << "sum:" << sum << endl;
//	getchar();
//}






////
////int main()
////{
////	for (int i = 0; i < 10; i++)
////	{
////		cout << i << endl;
////	}
////	return 0;
////}
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
//
//
//
//int get_weights()//权值
//{
//
//}
//
//void my_swap(int& a, int& b)
//{
//    int tmp = a;
//    a = b;
//    b = tmp;
//}
//
//void permutetion(const vector<int>& arr)
//{
//    int i = 0;
//    for (int j = i; j < arr.size(); j++)
//    {
//        my_swap(arr[i], arr[j]);
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
//   // permutetion()
//
//}

//int main() {
//    int n = 0;//排列的长度
//    cin >> n;
//    vector<int> arr;
//    for (int i = 0; i < n; i++)
//    {
//        int j = 0;
//        cin >> j;
//        arr.push_back(j);
//    }
//    int x = 0, y = 0;
//    cin >> x >> y;
//    vector<int>::iterator it = arr.begin();
//    while (it != arr.end())
//    {
//        if (((*it) == x && *(it + 1) == y) || ((*it) == y && *(it + 1) == x))
//        {
//            cout << "YES" << endl;
//            return 0;
//        }
//        it++;
//    }
//    cout << "NO" << endl;
//    return 0;
//}