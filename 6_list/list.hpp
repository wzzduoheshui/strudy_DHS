#pragma once

#include <iostream>
#include <assert.h>

using std::cout;
using std::endl;

namespace DHRS
{
    //定义链表节点
    template <class T>
    struct list_node
    {
        T data;
        list_node<T>* next;
        list_node<T>* prev;

        list_node(const T& x = T()/*这个是用来作为缺省的*/)//构造函数
            :data(x)
            , next(nullptr)
            , prev(nullptr)
        {}
    };
    
    //用一个结点的指针就能构造一个迭代器
    //list不能再像vector一样以普通指针作为迭代器,因为list的结点在存储空间中不是连续存在，
    //list迭代器必须有能力指向list节点，并且有能力进行正确的递增、递减、取值、成员取用等操作
    //所以我们必须自行封装迭代器
    template <typename T,typename Ref,typename Ptr>
    struct __list_iterator
    {
        typedef list_node<T> Node;
        Node* node;
        typedef __list_iterator<T, Ref, Ptr> iterator;

        __list_iterator(Node* node)//提供一个结点的构造(即使有typedef，那么构造函数也得用原来的)
            :node(node)
        {}

        bool operator!=(const iterator& it)const
        {
            return node != it.node;
        }
        bool operator==(const iterator& it)const
        {
            return node == it.node;
        }
        Ref operator*()//返回类型是引用，便于可能出现的修改
        {
            return node->data;
        }
        Ptr operator->()
        {
            return &(operator*());
        }
        iterator operator++(int/*为了区分++it添加参数*/)//it++
        {
            iterator tmp(*this);
            node = node->next;
            return tmp;
        }
        iterator& operator++()//++it
        {
            node = node->next;
            return *this;
        }
        iterator& operator--()
        {
            node = node->prev;
            return *this;
        }
        iterator operator--(int)//it++
        {
            iterator tmp(*this);
            node = node->prev;
            return tmp;
        }

    };

    template <class T>
    class mylist 
    {
        typedef list_node<T> Node;//定义链表节点
    public:
        //定义三个参数的意义在于可以更加方便对迭代器结构体进行复用
        typedef __list_iterator<T, T&, T*> iterator;//定义迭代器(是公有的需要外部也可以使用到的)
        typedef __list_iterator<T, const T&, const T*> const_iterator;

        mylist()
        {
            _head = new Node;
            _head->next = _head;
            _head->prev = _head;
        }


        void emptyInit()
        {
            _head = new Node;
            _head->next = _head;
            _head->prev = _head;
        }

        template <typename InputIterator>
        mylist(InputIterator first, InputIterator last)
        {
            emptyInit();
            while (first != last)
            {
                push_back(*first);
                ++first;
            }
        }

        void swap(mylist<T>& x)
        {
            std::swap(_head, x._head);
        }

        mylist(const mylist<T>& list)
        {
            emptyInit();
            mylist<T> tmp(list.begin(), list.end());
            swap(tmp);
        }

        void push_back(const T& x)
        {
            Node* _tail = _head->prev;//记住尾结点
            Node* _newnode = new Node(x);//申请新结点
            //重新连接
            _newnode->next = _head;
            _newnode->prev = _tail;
            _head->prev = _newnode;
            _tail->next = _newnode;
        }

        void push_head(const T& x)
        {
            insert(begin(), x);
        }

        void pop_back()
        {
            erase(--end());
        }

        void pop_head()
        {
            erase(begin());
        }
        
        iterator begin()
        {
            return iterator(_head->next);
        }
        iterator end()
        {
            return iterator(_head);
        }
        const_iterator begin()const
        {
            return const_iterator(_head->next);
        }
        const_iterator end()const
        {
            return const_iterator(_head);
        }

        iterator insert(iterator pos, const T& x)
        {
            Node* cur = pos.node;
            Node* prev = cur->prev;

            Node* newnode = new Node(x);

            //prev newnode cur
            prev->next = newnode;
            newnode->next = cur;
            cur->prev = newnode;
            newnode->prev = prev;

            return iterator(newnode);
        }

        iterator erase(iterator pos)
        {
            assert(pos != end());

            Node* cur = pos.node;
            Node* prev = cur->prev;
            Node* next = cur->next;

            prev->next = next;
            next->prev = prev;
            delete cur;

            return iterator(next);
        }

    private:
        Node* _head;
    };
}
