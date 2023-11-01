#pragma once

#include <iostream>
#include <assert.h>

using std::cout;
using std::endl;

namespace DHRS
{
    //��������ڵ�
    template <class T>
    struct list_node
    {
        T data;
        list_node<T>* next;
        list_node<T>* prev;

        list_node(const T& x = T()/*�����������Ϊȱʡ��*/)//���캯��
            :data(x)
            , next(nullptr)
            , prev(nullptr)
        {}
    };
    
    //��һ������ָ����ܹ���һ��������
    //list��������vectorһ������ָͨ����Ϊ������,��Ϊlist�Ľ���ڴ洢�ռ��в����������ڣ�
    //list����������������ָ��list�ڵ㣬����������������ȷ�ĵ������ݼ���ȡֵ����Աȡ�õȲ���
    //�������Ǳ������з�װ������
    template <typename T,typename Ref,typename Ptr>
    struct __list_iterator
    {
        typedef list_node<T> Node;
        Node* node;
        typedef __list_iterator<T, Ref, Ptr> iterator;

        __list_iterator(Node* node)//�ṩһ�����Ĺ���(��ʹ��typedef����ô���캯��Ҳ����ԭ����)
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
        Ref operator*()//�������������ã����ڿ��ܳ��ֵ��޸�
        {
            return node->data;
        }
        Ptr operator->()
        {
            return &(operator*());
        }
        iterator operator++(int/*Ϊ������++it��Ӳ���*/)//it++
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
        typedef list_node<T> Node;//��������ڵ�
    public:
        //���������������������ڿ��Ը��ӷ���Ե������ṹ����и���
        typedef __list_iterator<T, T&, T*> iterator;//���������(�ǹ��е���Ҫ�ⲿҲ����ʹ�õ���)
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
            Node* _tail = _head->prev;//��סβ���
            Node* _newnode = new Node(x);//�����½��
            //��������
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
