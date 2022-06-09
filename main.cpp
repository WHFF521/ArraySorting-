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
    printf("请输入数组的大小和成员范围\n");
    scanf("%d%d",&num_,&range_);
    creatNum Cnum(num_,range_); 
    Cnum.CreatRandomFile();//创建随即数组txt文件
    ArraySorting shuzu(num_);
    //shuzu.printf_Array();//
    shuzu.StlSort();
    return 0;
}