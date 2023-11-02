#define _CRT_SECURE_NO_WARNINGS
#include "stack.hpp"

int main()
{
    mystack::Stack<int, vector<int>> st;
    //mystack::Stack<int ,list<int>> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}