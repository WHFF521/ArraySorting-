#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<stdlib.h>
#include<windows.h>
#include<ctime>
#include<fstream>
#include"ArraySorting.h"
using namespace std;

void clacTime::begin()
{
    //Begin=clock();
    Begin = GetTickCount();

}
void clacTime::end()
{
    //End=clock();
    End = GetTickCount();

}
void clacTime::lastTime()
{
    double duration;
    //duration = (double)(End - Begin)/CLOCKS_PER_SEC;
    duration=(End-Begin);
    cout << "duration : " << duration <<endl;
}
ArraySorting::ArraySorting(int x)
{
    length=x;
    a=new int[x+100];
    ifstream infile;
    infile.open("in.in");
    for(int i=1;i<=x;i++)
    {
        int t;
       infile>>t;
        a[i]=t;
    } 
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

void ArraySorting::StlSort()
{
    clacTime T;
    //int b[length];
    int *b=new int[length+100];
    for(int i=1;i<=length;i++) b[i]=a[i];
    T.begin();
    sort(b+1,b+length+1);
    T.end();
    delete[] b;
    T.lastTime();
}