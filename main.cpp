#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
#include "creatnum.h"
#include "ArraySorting.h"
using namespace std;


int main()
{
    int num_,range_;
    printf("����������Ĵ�С�ͳ�Ա��Χ\n");
    scanf("%d%d",&num_,&range_);
    creatNum Cnum(num_,range_); 
    Cnum.CreatRandomFile();//�����漴����txt�ļ�
    ArraySorting shuzu(num_);
    //shuzu.printf_Array();//
    shuzu.StlSort();
    return 0;
}