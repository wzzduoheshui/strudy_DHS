#define _CRT_SECURE_NO_WARNINGS
#include "list.hpp"

using namespace DHRS;

void test1();//²âÊÔÎ²²å\µü´úÆ÷
void test2();


int main()
{
    test2();
    return 0;
}

void test2()
{
    mylist<int> lt;
    lt.push_back(1);
    lt.push_back(2);
    lt.push_back(3);
    lt.push_back(4);

    for (auto e : lt)
    {
        cout << e << " ";
    }
    cout << endl;

    lt.push_head(4);
    lt.push_head(3);
    lt.push_head(2);
    lt.push_head(1);

    for (auto e : lt)
    {
        cout << e << " ";
    }
    cout << endl;

    lt.pop_back();
    lt.pop_head();

    for (auto e : lt)
    {
        cout << e << " ";
    }
    cout << endl;
}
void test1()
{
    mylist<int> lt;
    lt.push_back(1);
    lt.push_back(2);
    lt.push_back(3);
    lt.push_back(4);
    
    int i = 0;
    mylist<int>::iterator it = lt.begin();
    while (it != lt.end())
    {
        it++;
        lt.insert(it, i);
        i++;
    }

    for (auto e : lt)
    {
        cout << e << " ";
    }
    cout << endl;


    //mylist<int>::iterator it = l1.begin();
    //while (it != l1.end())
    //{
    //    cout << it-> << " ";
    //    it++;
    //}
    //cout << endl;

    //for (auto e : l1)
    //{
    //    cout << e << " ";
    //}
    //cout << endl;

}