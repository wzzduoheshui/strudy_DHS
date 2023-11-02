#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::list;
using std::string;

namespace mystack
{
    template<typename T, typename Container>
    class Stack
    {
    public:
        void push(const T& x)
        {
            _con.push_back(x);
        }

        void pop()
        {
            _con.pop_back();
        }

        T& top()
        {
            return _con.back();
        }

        const T& top() const
        {
            return _con.back();
        }

        bool empty() const
        {
            return _con.empty();
        }

        size_t size() const
        {
            return _con.size();
        }

    private:
        Container _con;
    };
}