#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n = 0;//����Ϊn
    cin >> n;
    vector<vector<int>> all;
    vector<int> tmp;
    for (int i = 1; i <= n; i++)
    {
        tmp.push_back(i);
    }
    all.push_back(tmp);
    //ԭʼ���г�ʼ��




}





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////С������һ������a��Ȩֵ�������£����Ƚ�a��ÿһ������������ͣ��õ�һ��b���顣
////��ôb��������ֵ����Сֵ��Ϊa�����Ȩֵ��
//// ���磬��a = [2, 1, 3]����ôb = [3, 4]��b����ļ�����1�����a�����ȨֵΪ1��
//// ����С��ϣ�����ܹ���һ������Ϊn�����У�����Ȩֵ������С�����ܰ������
//// ������ָһ������Ϊn�����飬���� 1 ��nÿ��Ԫ��ǡ�ó���һ�Ρ�
//
////��һ���õĵݹ�
//int get_extremum(const vector<int>& arr)//��ֵ
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
//        vector<int> result;//��Ž��
//        if (result.size() == 0)
//        {
//            result = arr;
//            result.push_back(get_b(arr));
//        }
//        get_b(arr);
//    }
//    for (int i = pos; i < arr.size(); i++)
//    {
//        my_swap(arr, pos, i);//����i��jλ�õ�����
//        permutetion(arr, pos + 1);
//        my_swap(arr, pos, i)
//    }
//}
//int main()
//{
//    //���ɳ���Ϊn��ԭʼ��������
//    int n = 0;//n������
//    cin >> n;
//    vector<int> a;
//    for (int i = 1; i <= n; i++)
//    {
//        a.push_back(i);
//    }
//
//    //ȫ��
//    permutetion(a, 0);
//
//}
//// 64 λ������� printf("%lld")
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//int sum = 0;
//
////��ӡ��������
//void print(int array[], int len) {
//	printf("{");
//	for (int i = 0; i < len; ++i)
//		cout << array[i] << " ";
//	printf("}\n");
//}
//
////ʵ����������
//void swap(int* o, int i, int j) {
//	printf("%d��%d����:������Ϊ��", i, j);
//	int tmp = o[i];
//	o[i] = o[j];
//	o[j] = tmp;
//}
//
////ʵ������ߵ�
//void reverse(int array[], int s, int e) {
//	printf("��%dλ�õߵ�:�ߵ�Ϊ��", s - 1);
//	while (s < e) {
//		swap(array, s, e);
//		++s, --e;
//	}
//	print(array, 4);
//
//}
//
////���űȽϺ���
//int compare(const void* a, const void* b) {
//	return *(int*)(a)-*(int*)(b);//���С��0��a����ǰ��bǰ��
//}
//
////�ֵ���ʵ������ȫ���в���ӡ
//void permutation(int array[], int len) {
//	qsort(array, len, sizeof(array[0]), compare);//��������
//	++sum;
//	print(array, len);
//
//	while (true) {
//		int pos = -1;
//		//�Ӻ���ǰѰ�ҵ�һ���滻��
//		for (int i = len - 2; i >= 0; --i)
//			if (array[i] < array[i + 1]) {
//				pos = i;
//				break;
//			}
//		if (pos == -1)
//			return;//���н���
//
//		//�Ӻ���ǰѰ�ҵ�һ�������滻������Ԫ��
//		int subsIndex = -1;
//		for (int i = len - 1; i > pos; --i)
//			if (array[i] > array[pos]) {
//				subsIndex = i;
//				break;
//			}
//		//����
//		swap(array, pos, subsIndex);
//		print(array, 4);
//		//�ߵ�
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
//int get_extremum(const vector<int>& arr)//��ֵ
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
//int get_weights()//Ȩֵ
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
//    //���ɳ���Ϊn��ԭʼ��������
//    int n = 0;//n������
//    cin >> n;
//    vector<int> a;
//    for (int i = 1; i <= n; i++)
//    {
//        a.push_back(i);
//    }
//
//    //ȫ��
//   // permutetion()
//
//}

//int main() {
//    int n = 0;//���еĳ���
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