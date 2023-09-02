/*
 提示：此文件需要编译为1_control.exe
*/
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <cassert>
#include <cstring>
using namespace std;
void ring(const string& path){ // 修改参数类型为const string&
    //响铃命令例:powershell -c (New-Object Media.SoundPlayer 'ring.wav').PlaySync()
    string ring_path="powershell -c (New-Object Media.SoundPlayer '";
    if(path=="none"){
        Beep(500,500);
        Sleep(200);
        Beep(500,500);
        Sleep(200);
        Beep(500,500);
        cout<<"test"<<endl;
    }else{
        ring_path=ring_path + path;
        ring_path=ring_path + "').PlaySync()";
        system(ring_path.c_str());
        cout<<"test2"<<endl;
}
}
int main(int argc,char *argv[]){
     ifstream file("ring_path.txt");
     if(!file){
        cout<<"cannot open file:ring_path.txt"<<endl;
    }
    vector<vector<string>> path;
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
    path.push_back(row);
  }
  // 关闭文件
  file.close(); // 关闭文件，避免内存泄漏和文件占用

  assert(!path.empty()); // 判断data是否为空，如果为空，抛出异常
   cout<<"path1"<<path[0][0]<<endl;
   cout<<"path2"<<path[1][0]<<endl;
   cout<<argv[1];
   if(argc==2){
       if(strcmp(argv[1],"1")==0){ 
           ring(path[0][0]); // 不需要使用c_str()方法
           cout<<"runmode1";
       }else{ring(path[1][0]);
        cout<<"runmode2";
          } // 不需要使用c_str()方法
   }else{cout<<"Usage:~ + 1/2";}
    
}
