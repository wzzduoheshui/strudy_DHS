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

// 64 λ������� printf("%lld")
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//#include <limits.h>
//
//using namespace std;
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
//int get_b(const vector<int>& arr)//����arr��Ȩֵ
//{
//    vector<int> b;
//    for (int i = 0; i < (arr.size() - 1); i++)
//    {
//        b.push_back(arr[i] + arr[i + 1]);
//    }
//    return get_extremum(b);
//}
//
//void my_swap(vector<int>& arr, int a, int b)//����
//{
//    int tmp = arr[a];
//    arr[a] = arr[b];
//    arr[b] = tmp;
//}
//
//int min_weight = INT_MAX;//�����С��Ȩֵ
//vector<int> v_result;//���Ȩֵ������
//
//void result(const vector<int>& arr)//���
//{
//    int result = get_b(arr);//�õ�arr��Ȩֵ
//    if (result < min_weight)
//    {
//        min_weight = result;
//        v_result = arr;
//    }
//}
//
//void permutetion(vector<int>& arr, int pos)//ȫ��
//{
//    if (pos >= arr.size())//ѭ���ݹ����
//    {
//        result(arr);
//    }
//    for (int i = pos; i < arr.size(); i++)
//    {
//        if (min_weight > 1)
//        {
//            my_swap(arr, pos, i);//����i��jλ�õ�����
//            permutetion(arr, pos + 1);
//            my_swap(arr, pos, i);
//        }
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
//    //��ӡ���
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