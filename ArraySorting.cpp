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

void ArraySorting::qsort(int* q,int l,int r)
{
    int i,j,mid;
	i=l;j=r;
	mid=q[(l+r)/2];
	while(i<=j)
	{
		while(q[i]<mid) i++;
		while(q[j]>mid) j--;
		if(i<=j)
		{
		swap(q[i],q[j]);
			i++;j--;
		}
	}
		if(l<j) qsort(q,l,j);
		if(i<r) qsort(q,i,r);
}
void ArraySorting::quick_sort()
{
    clacTime T;
    int *b=new int[length+100];
    for(int i=1;i<=length;i++) b[i]=a[i];
    T.begin();
    qsort(b,1,length);
    T.end();
    delete[] b;
    cout<<"快速排序的时间：";
    T.lastTime();
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
    cout<<"STL中sort算法所用时间： ";
    T.lastTime();
}


void ArraySorting::selectSort()
{
    clacTime T;
    int *b=new int[length+100];
    for(int i=1;i<=length;i++) b[i]=a[i];
    T.begin();
    int mi;
	for (int i=1;i<=length;i++)
	{
		mi = i;
		for (int j=i+1;j<=length;j++)
		{
			if (b[mi]>b[j])
			{
				mi=j;
			}
		}
		if (mi!=i)
		{
			swap(b[i],b[mi]);
		}
	}
    T.end();
    delete[] b;
    cout<<"选择排序的时间：";
    T.lastTime();
}

void ArraySorting::insertionSort()
{
    clacTime T;
    int *b=new int[length+100];
    for(int i=1;i<=length;i++) b[i]=a[i];
    T.begin();
     for(int i=2;i<=length;i++)
    {
        int j=i-1,k=b[i];
        while(j>=1&&b[j]>k)
        {
            b[j+1]=b[j];
            j--;
        }
        b[j+1]=k;
    }
    T.end();
    delete[] b;
    cout<<"插入排序的时间：";
    T.lastTime();
}

void ArraySorting::bubbleSort()
{
    clacTime T;
    int *b=new int[length+100];
    for(int i=1;i<=length;i++) b[i]=a[i];
    T.begin();
    for(int i=1;i<=length;i++)
    {
        for(int j=1;j<=length-i;j++)
        {
            if(b[j]>b[j+1])
            {
                int q=b[j];
                b[j]=b[j+1];
                b[j+1]=q;
            }
        }
    }
    T.end();
    delete[] b;
    cout<<"冒泡排序的时间：";
    T.lastTime();
}


void ArraySorting::Merge(int *arr, int l, int mid, int r) {
    int *temp = new int [r-l+1];
    int i = l;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= r)
        temp[k++] = arr[j++];
    for (i = 0; i < k; i++)
        arr[i + l] = temp[i];
    delete[] temp;
}

void ArraySorting::mergeSort(int* q,int l,int r)
{
     if (l< r) {
        int mid = (l + r) / 2;
        mergeSort(q, l, mid);
        mergeSort(q, mid + 1, r);
        Merge(q, l, mid, r);
    }
}
void ArraySorting::mergeSort()
{
    clacTime T;
    int *b=new int[length+100];
    for(int i=1;i<=length;i++) b[i]=a[i];
    T.begin();
    mergeSort(b,1,length);
    T.end();
    delete[] b;
    cout<<"归并排序的时间：";
    T.lastTime();
}


void ArraySorting::group_sort(int* q, int len, int start, int step)
{
	for (int i = start + step; i< len; i+= step)
	{
		int tmp = q[i];
		int j = i - step;
		while (j >= start && q[j] >= tmp)
		{
			q[j + step] = q[j];
			j -= step;
		}
		q[j + step] = tmp;
	}
}

void ArraySorting::Shell_sort()
{
    clacTime T;
    int *b=new int[length+100];
    for(int i=1;i<=length;i++) b[i]=a[i];
    T.begin();
    for(int step = length/2;step > 0;step /= 2)
	{
		for (int i = 1; i <=step; i++)
		{
			group_sort(b, length, i, step);
		}
	}
    T.end();
    delete[] b;
    cout<<"希尔排序的时间：";
    T.lastTime();
}

int ArraySorting::maxbit(int* q, int n) 
{
    int d = 1; //保存最大的位数
    int p = 10;
    for(int i = 1; i <=n; i++)
    {
        while(q[i] >= p)
        {
            p *= 10;
            ++d;
        }
    }
    return d;
}

void ArraySorting::radixsort()
{
    clacTime T;
    int *b=new int[length+100];
    for(int i=1;i<=length;i++) b[i]=a[i];
    T.begin();
    int d = maxbit(b, length);
    int *tmp=new int[length+10];
    int* count;
    count=new int[11]; //计数器
    int i, j, k;
    int radix = 1;
    for(i = 1; i <= d; i++) //进行d次排序
    {
        for(j = 0; j < 10; j++)
            count[j] = 0; //每次分配前清空计数器
        for(j = 1; j <=length; j++)
        {
            k = (b[j] / radix) % 10; //统计每个桶中的记录数
            count[k]++;
        }
        for(j = 1; j < 10; j++)
            count[j] = count[j - 1] + count[j]; //将tmp中的位置依次分配给每个桶
        for(j = length; j >= 1; j--) //将所有桶中记录依次收集到tmp中
        {
            k = (b[j] / radix) % 10;
            tmp[count[k]] = b[j];
            count[k]--;
        }
        for(j = 1; j <=length; j++) //将临时数组的内容复制到data中
            b[j] = tmp[j];
        radix = radix * 10;
    }
    
    T.end();
    delete[] count;
    delete[] tmp;
    delete[] b;
    cout<<"基数排序的时间：";
    T.lastTime();
}
/*for(int i=1;i<=length;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;*/