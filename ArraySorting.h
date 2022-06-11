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
        void quick_sort();//��������
        void StlSort();//STL�е�sort
        void selectSort();//ѡ������
        void insertionSort();//��������
        void bubbleSort();//ð������
        void mergeSort();//�鲢����
        void Shell_sort();//ϣ������
        void radixsort();//��������
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
