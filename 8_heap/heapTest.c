#include "heap.h"

int main()
{
    Hp heap;
    heapInit(&heap);
    // heapPush(&heap,1);
    // heapPush(&heap,4);
    // heapPush(&heap,3);
    // heapPush(&heap,2);
    // heapPush(&heap,7);
    // heapPush(&heap,9);
    heapDateType arr[] = { 27,15,19,18,28,34,65,49,25,37 };
    for (int i = 0; i < sizeof(arr) / sizeof(heapDateType); ++i)
    {
        heapPush(&heap, arr[i]);
    }


    heapPrint(&heap);
    printf("size = %d\n", heapSize(&heap));

    heapPop(&heap);
    heapPrint(&heap);
    printf("size = %d\n", heapSize(&heap));//3
    printf("heapTop = %d\n", heapTop(&heap));//4

    heapEmpty(&heap);
    heapPrint(&heap);
    printf("size = %d\n", heapSize(&heap));//3

    return 0;
}