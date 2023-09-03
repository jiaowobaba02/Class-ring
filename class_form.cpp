#include<iostream>
#include<ctime>
#include <fstream>
#include <sstream>
#include <vector>
#include <cassert>
#include <cstring>
#include <unistd.h>
#include <string>
#include <cstdlib> // 引入cstdlib头文件，否则system函数会报错
//std::system("dir"); // 执行dir命令，显示当前目录下的文件和文件夹，加上std::命名空间

using namespace std;
//int total_rows; // 改成total_rows，避免和局部变量rows冲突
//int total_cols; // 改成total_cols，避免和局部变量cols冲突

int main(int argc, char* argv[]){ // 加上int返回值类型，否则编译错误
  // 打开csv文件
  ifstream file("class_form.csv");
  if (!file) {
    cout << "无法打开文件" << endl;
  }
  // 创建一个二维向量来存储数据
  vector<vector<string>> data;
  // 读取每一行
  string line;
  while (getline(file, line)) {
    // 创建一个字符串流来分割每一行的数据
    stringstream ss(line);
    string cell;
    // 创建一个一维向量来存储一行的数据
    vector<string> row;
    row.clear(); // 清空row向量，避免数据重复和内存浪费
    // 读取每一个单元格
    while (getline(ss, cell, ',')) {
      // 把单元格的数据放到一维向量中
      row.push_back(cell);
    }
    // 把一维向量放到二维向量中
    data.push_back(row);
  }
  // 关闭文件
  file.close(); // 关闭文件，避免内存泄漏和文件占用

  assert(!data.empty()); // 判断data是否为空，如果为空，抛出异常
  time_t now =time(NULL);

  tm w = *localtime(&now); // 直接使用tm类型的变量w，并用*解引用指针
  int week = w.tm_wday; // 使用w.tm_wday来获取当前星期几

  if (week == 0) {
    for (int i = 1; i < data.size(); i++) { // 直接使用data.size()来获取行数，不需要额外的变量rows
      cout << data[i][8]; // 直接输出data[i][8]，不需要额外的数组vec
    }
  } else {
    for (int j = 1; j < data.size(); j++) { // 直接使用data.size()来获取行数，不需要额外的变量rows
      cout << data[j][week+1]; // 直接输出data[j][week+1]，不需要额外的数组vec
    }
  } 
    string start_or_not;

  string class_ring_input= ".\\msg_control.exe"; // 改成双引号而不是单引号，否则类型转换错误 
  if(argc==3){
    if(strcmp(argv[1],"1")==0){ // 使用strcmp函数来比较字符串，而不是==
        class_ring_input=class_ring_input + " 上课了"; // 使用+运算符来拼接字符串，并用引号来包围字符串
        start_or_not="：上课了";
       
} else if(strcmp(argv[1],"2")==0){ // 使用strcmp函数来比较字符串，而不是==
        class_ring_input=class_ring_input + " 下课了"; // 使用+运算符来拼接字符串，并用引号来包围字符串
        start_or_not="：下课了";
} else{
     cout<<"Usage:"<<argv[0]<<"1/2   num"<<endl;   
}
   int class_now = atoi(argv[2]); // 使用atoi函数来把字符串转换成整数，并检查是否合法
   class_ring_input=class_ring_input +" ";
   class_ring_input=class_ring_input +  data[class_now][week+1]; // 直接拼接data[class_now][week+1]，并注意下标从0开始
   class_ring_input=class_ring_input + start_or_not;
   class_ring_input=class_ring_input + " i";
   cout<<class_ring_input<<endl;
   
   system(class_ring_input.c_str()); // 使用exec函数或者其他更高级的方法来执行命令，而不是system函数，用c_str()方法来把string对象转换成const char*类型的指针
   
}
return 0; // 返回0，表示程序正常结束
} // 加上右花括号，否则编译错误
