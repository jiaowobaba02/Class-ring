#include<iostream>
#include<ctime>
#include <fstream>
#include <sstream>
#include <vector>
#include <cassert>
#include <cstring>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main() {
  // 打开csv文件
  ifstream file("class_form.csv");
  if (!file) {
    cout << "无法打开文件" << endl;
    return 1;
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
    // 读取每一个单元格
    while (getline(ss, cell, ',')) {
      // 把单元格的数据放到一维向量中
      row.push_back(cell);
    }
    // 把一维向量放到二维向量中
    data.push_back(row);
  }
  // 关闭文件
  file.close();
  string class_form =".\\class_form.exe";
  // 获取二维向量的行数和列数
  int rows = data.size();
  int cols = data[0].size();
  
  vector<string> begin_time_read; // 注意这里改成了string类型
  vector<string> end_time_read; // 注意这里改成了string类型
  vector<int> begin_time_hour; // 注意这里改成了int类型
  vector<int> begin_time_min; // 注意这里改成了int类型
  vector<int> end_time_hour; // 注意这里改成了int类型
  vector<int> end_time_min; // 注意这里改成了int类型
  
  for (int i = 1; i < rows; i++) {
    // 获取开始时间和结束时间的字符串
    string begin_time = data[i][0]; 
    string end_time = data[i][1]; 
    
    // 把开始时间和结束时间的字符串放到动态数组中
    begin_time_read.push_back(begin_time); 
    end_time_read.push_back(end_time); 
    
    // 把开始时间和结束时间的字符串转换成整数，并且分离小时和分钟
    begin_time_hour.push_back(stoi(begin_time) / 100); 
    begin_time_min.push_back(stoi(begin_time) % 100); 
    end_time_hour.push_back(stoi(end_time) / 100); 
    end_time_min.push_back(stoi(end_time) % 100); 
  } 
  int cache[rows][2]={0};
  for(int x =1;x<=rows-1;x++){
     cache[x][1]=0;
     cache[x][2]=0;
      
  }
  
  for (int j = 0; j < rows - 1; j++) {
    cout << "begin_time" << j + 1 << ": " << begin_time_hour[j] << ":" << begin_time_min[j] << endl;
    cout << "end_time" << j + 1 << ": " << end_time_hour[j] << ":" << end_time_min[j] << endl;
  }
  time_t now =time(NULL);
  tm *t = localtime(&now);
  cout<<t->tm_hour<<":"<<t->tm_min<<endl;
  for(int k=0;k<=2;k++){
    k--;
    time_t now=time(NULL);
    tm*t = localtime(&now);
    for(int l=0;l<rows - 1;l++){
      if(t->tm_hour==begin_time_hour[l]&&t->tm_min==begin_time_min[l]&&cache[l][1]==0){
        cout<<"begin_ring rung"<<endl;
        cache[l][1]++;
        class_form=class_form +" 1 ";
        class_form=class_form + to_string(l+1);
        system(".\\1_control.exe 1");
         system(class_form.c_str());
        class_form =".\\class_form.exe";
         
        //add ring_begin
      }else{
      if(t->tm_hour==end_time_hour[l]&&t->tm_min==end_time_min[l]&&cache[l][2]==0){
        cout<<"end_ring rung"<<endl;
        cache[l][2]++;
        class_form=class_form +" 2 ";
        class_form=class_form + to_string(l+1);
         system(".\\1_control.exe 2");
         system(class_form.c_str());
        class_form =".\\class_form.exe";
        //add ring_end
         
    }}
  }
  Sleep(50);
  }
  return 0;
}
