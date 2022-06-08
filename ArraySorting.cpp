#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<fstream>
#include"ArraySorting.h"
using namespace std;

ArraySorting::ArraySorting(int x)
{
    length=x;
    cout<<"!!!"<<endl;
    a=new int[x+1];
    ifstream infile;
    infile.open("in.txt");
    for(int i=1;i<=x;i++)
    {
        int t;
       infile>>t;
        a[i]=t;
        cout<<a[i]<<" ";
    } 
    cout<<endl;
    infile.close();
}

ArraySorting::~ArraySorting()
{
    delete[] a;
}

void ArraySorting::printf_Array()
{
    for(int i=1;i<=length;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void ArraySorting::quick_sort()
{
    
}