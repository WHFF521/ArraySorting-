# 九种数组排序方法时间复杂度的比较

## 1.构思和想法

  程序设计老师留的作业，本来挺好做的，我自己想整点花样儿，结果给自己找了不少麻烦。想法是利用c++的多文件一个一个写的，先随机数输出一个文件，然后再用各种方法排序测试。

## 2.遇到的各种问题

  ### （1）vscode多文件编译问题

   众所周知vscode只是一个记事本一样的存在，所有东西都要自己去设置，劝退了不少小白（要不是有xd帮我我也早就被劝退了）。vscode编译文件之前用的插件 code runner ,但是这个是默认只编译当前文件，所以其他的 .h 文件和 .cpp都不会被编译，造成报错。

报错会说：undefined reference to XXX, error: ld returned 1 exit status 

百度了半天终于找到解决问题的方法。

方法就是vscode设置里搜code runner，然后找Code-runner: Executor Map,在settings.json里编辑

```
//"c": "cd $dir && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
// "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
```

这两行注释掉，复制一遍，换成下面代码

```
"c": "cd $dir && gcc *.c -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
"cpp": "cd $dir && g++ *.cpp -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
```

这样做有一个弊端，就是每次编译的时候会把整个文件夹的**所有文件**全部编译，解决方法也很简单，

~~建立新文件夹只放需要编译的文件~~

[错误更改借鉴的博友原贴链接]: https://blog.csdn.net/m0_58562487/article/details/124790162



### （2）多文件中.h文件的写法

前后加

```c++
#ifndef ArraySorting_h//你文件的名字
#define ArraySorting_h
//代码部分
#endif
```

我之前一直写 "#ifndef  ArraySorting.h" 报错说我语法不对，然后我把.h去了虽然说编译不报错但是感觉怪怪的，后来在网上查才知道文件的.h要写成_h，而且头文件的命名最好是 _NAME_H这种的。

### (3) freopen的应用错误

  以前竞赛一直用的freopen，但是也不知道到底的怎么用的，就知道加进去。现在我直接加类里面去会发生创建文件后后面的代码就运行不了，程序自动退出的问题。我也不知道怎么解决。最好的解决办法就是~~~换一种读入写出的方法~~

```
#include<fstream>
	ofstream outfile;
    outfile.open("in.txt");
    outfile<<rand()%r<<" ";//写入文件in.txt
    
    ifstream infile;
    infile.open("in.txt");
    infile>>t;//从in.txt文件读入
```

简单来说就是替换cin,cout的位置就行了。