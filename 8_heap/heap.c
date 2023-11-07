#include "heap.h"

void heapPrint(Hp* hp)
{
    assert(hp);
    int i = 0;
    for (i = 0; i < hp->_size; i++)
    {
        printf("%d->", hp->_heap[i]);
    }
    printf("\n");
}

void heapInit(Hp* hp)
{
    assert(hp);
    hp->_heap = NULL;
    hp->_size = 0;
    hp->_capacity = hp->_size;
}

void heapPush(Hp* hp, heapDateType x)
{
    assert(hp);
    if (hp->_size == hp->_capacity)//判断是否满了
    {
        size_t _newcapacity = hp->_capacity == 0 ? 4 : hp->_capacity * 2;
        heapDateType* tmp = (heapDateType*)realloc(hp->_heap, _newcapacity * sizeof(heapDateType));//开辟空间
        if (tmp == NULL)
        {
            printf("realloc fail\n");
            exit(1);
        }
        hp->_heap = tmp;
        hp->_capacity = _newcapacity;
    }

    hp->_heap[hp->_size] = x;
    ++hp->_size;

    adjustUp(hp);
}

void heapDateSwap(Hp* hp, int i, int j)
{
    heapDateType tmp = hp->_heap[i];
    hp->_heap[i] = hp->_heap[j];
    hp->_heap[j] = tmp;
}

void adjustUp(Hp* hp)
{
    assert(hp);

    int child = hp->_size - 1;
    while (child > 0)//parent不肯能小于0，但是一直到最后child会出现等于0的情况
    {
        int parent = (child - 1) / 2;

        if (hp->_heap[child] > hp->_heap[parent])
        {
            heapDateSwap(hp, child, parent);
            child = parent;
        }
        else
            break;
    }
}

// void adjustDown(Hp* hp)
// {
//     int parent = 0;
//     int leftChild = parent * 2 + 1;
//     int rightChild = parent * 2 + 2;
//     int maxChild;
//     while(leftChild < hp->_size)
//     {
//         if(rightChild < hp->_size - 1)
//         {
//             maxChild = hp->_heap[leftChild] > hp->_heap[rightChild] ? leftChild : rightChild;
//         }
//         else
//         {
//             maxChild = leftChild;
//         }
//         if(hp->_heap[parent] < hp->_heap[maxChild])
//         {
//             heapDateSwap(hp, maxChild, parent);
//             parent = maxChild;
//             leftChild = parent * 2 + 1;
//             rightChild = parent * 2 + 2;
//         }
//         else
//         {
//             break;
//         }
//     }
// }

void adjustDown(Hp* hp)
{
    int parent = 0;
    int child = parent * 2 + 1;
    while (child < hp->_size)
    {
        if (child + 1 < hp->_size && hp->_heap[child + 1] > hp->_heap[child])
        {
            ++child;
        }

        if (hp->_heap[child] > hp->_heap[parent])
        {
            heapDateSwap(hp, parent, child);
            parent = child;
            child = parent * 2 + 1;
        }
        else
        {
            break;
        }
    }
}

void heapPop(Hp* hp)
{
    assert(hp);
    assert(hp->_size > 0);

    heapDateSwap(hp, 0, hp->_size - 1);
    --hp->_size;

    adjustDown(hp);
}

// void heapPop(Hp* hp)
// {
//     assert(hp);
//     for(int i = 0; i < hp->_size - 1; ++i)
//     {
//         hp->_heap[i] = hp->_heap[i + 1];
//     }
//     --hp->_size;
// }

heapDateType heapTop(Hp* hp)
{
    assert(hp);
    return hp->_heap[0];
}

size_t heapSize(Hp* hp)
{
    assert(hp);
    return hp->_size;
}

void heapDestory(Hp* hp)
{
    free(hp->_heap);
    hp->_heap = NULL;
    hp->_capacity = hp->_size = 0;
}

void heapEmpty(Hp* hp)
{
    assert(hp);
    hp->_size = 0;
}