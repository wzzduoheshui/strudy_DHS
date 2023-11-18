#include <iostream>

using namespace std;






int main()
{
	int num = 100;
	int count = num;
	for(int i = 2; i < num; ++i)
	{
		for(int j = 2; j < i; ++j)
		{
			if(i % j == 0)
			{
				cout << i << " " << j << " " << i % j << endl;
				--count;
				break;
			}
			if(j > i)
			{
				cout << i ;	
			}
		}
	}
	cout << count << endl;
	return 0;
}

//int main()
//{
//	int count = 0;
//	for(int i = 1; i < 100; i++)
//	{
//		if(i < 90)
//		{
//			if(i % 10 == 9)
//			{
//				++count;
//			}
//		}	
//		else
//		{
//			if(i % 10 == 9)
//			{
//				count += 2;
//			}
//			else 
//			{
//				++count;
//			}
//		}
//	}
//	cout << count << endl;
//	return 0;
//} 


//int main()
//{
//	std::cout << "hello world" << std::endl;
//	return 0;
//}
