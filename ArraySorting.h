#ifndef ArraySorting_h
#define ArraySorting_h
#include<ctime>
#include<windows.h>
using namespace std;
class clacTime
{
    public:
        void begin();
        void end();
        void lastTime();
    private:
       // clock_t Begin;
        //clock_t End;
        DWORD Begin;
        DWORD End;
};
 class  ArraySorting
 {
     public:
        ArraySorting(int x);
        ~ArraySorting();
        void printf_Array();
        void quick_sort();//øÏÀÊ≈≈–Ú
        void StlSort();//STL÷–µƒsort
        void selectSort();//—°‘Ò≈≈–Ú
        void insertionSort();//≤Â»Î≈≈–Ú
        void bubbleSort();//√∞≈›≈≈–Ú
        void mergeSort();//πÈ≤¢≈≈–Ú
        void Shell_sort();//œ£∂˚≈≈–Ú
        void radixsort();//ª˘ ˝≈≈–Ú
    private:
        int* a;
        int length;
        void qsort(int* q,int l,int r);
        void mergeSort(int* q,int l,int r);
        void Merge(int *arr, int l, int mid, int r);
        void group_sort(int* q, int len, int start, int step);
        int maxbit(int* q, int n);
 };

#endif
