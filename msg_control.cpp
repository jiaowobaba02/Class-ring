#include<iostream>
#include<windows.h>

using namespace std;
void msg(char *title,char *info){
    MessageBox(GetForegroundWindow(),title,info,4);
}
int main(int argc,char *argv[]){
    if(argc==3){
    cout<<"showed"<<" title"<<argv[1]<<" info: "<<argv[2]<<endl;
    msg(argv[1],argv[2]);
   }else{
    cout<<argv[0]<<":Usage:title infomation";
    }
}
