#ifndef creatnum_h
#define creatnum_h
#include<stdlib.h>
#include<time.h>
using namespace std;
class creatNum
{
    public:
        creatNum(int x,int y){num=x,range=y;};
        void CreatRandomFile(){CreatRandomFile(num,range);};// num数据个数，range 数据范围
    private:
        int num;
        int range;
        void CreatRandomFile(int n,int r);
};


#endif
