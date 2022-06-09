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
        void quick_sort();
        void StlSort();
    private:
        int* a;
        int length;
 };

#endif
