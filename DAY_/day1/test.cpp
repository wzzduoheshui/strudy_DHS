#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num = 0;
    cin >> num;
    vector<int> arr;
    int a = 0;
    for (int i = 0; i < (3 * num); ++i)
    {
        cin >> a;
        arr.push_back(a);
    }

    std::sort(arr.begin(), arr.end());

    long sum = 0;
    for (int i = 0; i < num; ++i)
    {
        sum += arr[arr.size() - 2 * (i + 1)];
    }

    cout << sum << endl;
}
// Ì°ÐÄËã·¨
 





//#include <iostream>
//
//using namespace std;
//
////int func()
////{
////	int i, j, k = 0;
////	for (i = 0, j = -1; j = 0; i++, j++)
////	{
////		k++;
////	}
////	return k;
////}
////int main()
////{
////	cout << func();
////	return 0;
////}
//
//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 2, c = 3, d = 0;
//	if (a == 1 && b++ == 2)
//		if (b != 2 || c-- != 3)
//			printf("%d,%d,%d\n", a, b, c);
//		else
//			printf("%d,%d,%d\n", a, b, c);
//	else
//		printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}