#include<iostream>
#include<stdlib.h>
#include "creatnum.h"
#include <fstream>  
using namespace std;

void creatNum::CreatRandomFile(int n,int r)
{
      cout<<"@@"<<endl;
    ofstream outfile;
    outfile.open("in.txt");
    srand((unsigned)time(NULL));
    for(int i=1;i<=n;i++){
        outfile<<rand()%r<<" ";
        if(i%20==0) outfile<<endl;
    }
    outfile<<endl;
    outfile.close();
    cout<<"@@"<<endl;
}


