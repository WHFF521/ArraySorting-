#ifndef ArraySorting_h
#define ArraySorting_h
 
 class  ArraySorting
 {
     public:
        ArraySorting(int x);
        ~ArraySorting();
        void printf_Array();
        void quick_sort();
    private:
        int* a;
        int length;
 };

#endif
