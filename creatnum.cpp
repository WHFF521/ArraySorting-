#include<iostream>
#include<stdlib.h>
#include "creatnum.h"
#include <fstream>  
using namespace std;

void creatNum::CreatRandomFile(int n,int r)
{
    ofstream outfile;
    outfile.open("in.in");
    srand((unsigned)time(NULL));
    for(int i=1;i<=n;i++){
        outfile<<rand()%r<<" ";
        if(i%20==0) outfile<<endl;
    }
    outfile<<endl;
    outfile.close();
}


