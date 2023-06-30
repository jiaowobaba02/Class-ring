#include<iostream>
#include<ctime>
#include<windows.h>
#define qdo 262
#define qre 294
#define qmi 330
#define qfa 349
#define qso 392
#define qla 440
#define qsi 494
#define do 523
#define re 578
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988
#define do1 1046
#define re1 1175
#define mi1 1318
#define fa1 1480
#define so1 1568
#define la1 1760
#define si1 1976
#define sqdo 277
#define sqre 311
#define sqfa 370
#define sqso 415
#define sqla 466
#define sdo 554
#define sre 622
#define sfa 740
#define sso 831
#define sla 932
#define sdo1 1046
#define sre1 1245
#define sfa1 1480
#define sso1 1661
#define sla1 1865
#ifndef UNICODE
#define UNICODE
#endif
#define WM_LBUTTONDOWN    0x0201

using namespace std;
int test(){
    int pai=400,ban=200;
	int ting=128;
	Beep(la,ban);
	Beep(si,ban);
	Sleep(ting);

	Beep(do1,pai+ban);
	Beep(si,ban);
	Sleep(ting);
	Beep(do1,pai);
	Sleep(ting);
	Beep(mi1,pai);
	Sleep(ting);

	Beep(si,3*pai);
	Sleep(ting);
	Beep(mi,ban);
	Beep(mi,ban);

	Beep(la,ban+pai);
	Beep(so,ban);
	Sleep(ting);
	Beep(la,pai);
	Sleep(ting);
	Beep(do1,pai);
	Sleep(ting);

	Beep(so,2*pai);
	Sleep(ting);
	return 0;
	}
int ring(){
    Beep(500,500);
    Sleep(200);
    Beep(500,500);
    Sleep(200);
    Beep(500,500);
    cout<<"rang"<<endl;
    return 0;
}
int main(){
	HWND hwnd1;
	hwnd1=GetForegroundWindow();
	int x;
	//MessageBox(GetForegroundWindow(),"【标题】","【要说的话】",4);
	//printf("%d\n",x);
    ring();
    time_t now = time(NULL);
    time_t forin = time(NULL);
    cout<<"running..."<<endl;
    int j=2;
    int r[100]={0};
    tm* d = localtime(&now);
    cout<<d->tm_wday<<endl;
    cout << d->tm_hour << ":" << d->tm_min <<endl;
    for (int i=0;i<=j;i++){
    time_t forin = time(NULL);
    tm* t = localtime(&forin);
    cout<<"the"<<" loop "<<i<<" started at"<<t->tm_hour<<":"<<t->tm_min<<endl;
        if(t->tm_hour==7&& t->tm_min==0&&r[1]==0){
    ring();
    MessageBox(GetForegroundWindow(),"测试","测试文本",4);
	printf("%d\n",x);

    r[1]++;
        }
        if(t->tm_hour==8&& t->tm_min==40&&r[2]==0){
    ring();
	MessageBox(GetForegroundWindow(),"下课了","下课了",4);
	printf("%d\n",x);
	//SetWindowPos(hwnd1,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);//窗口置顶
	//ShowWindow(hwnd1,SW_RESTORE);		//激活并显示窗口
	//SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
	//SetWindowPos(hwnd1,HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
    r[2]++;
        }else
        if(t->tm_hour==8&& t->tm_min==50&&r[3]==0){
    ring();

    r[3]++;
        }
        else
        if(t->tm_hour==9&&t->tm_min==30&&r[4]==0){
    ring();
    MessageBox(GetForegroundWindow(),"下课了","下课了",4);
	printf("%d\n",x);
	/*SetWindowPos(hwnd1,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);//窗口置顶
	ShowWindow(hwnd1,SW_RESTORE);		//激活并显示窗口
	SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
	SetWindowPos(hwnd1,HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);*/

    r[4]++;
        }
        else
        if(t->tm_hour==10&& t->tm_min==15&&r[5]==0){
    ring();

    r[5]++;
        }
        else
        if(t->tm_hour==10&& t->tm_min==55&&r[6]==0){
    ring();
    MessageBox(GetForegroundWindow(),"下课了","下课了",4);
	printf("%d\n",x);
	/*SetWindowPos(hwnd1,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);//窗口置顶
	ShowWindow(hwnd1,SW_RESTORE);		//激活并显示窗口
	SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
	SetWindowPos(hwnd1,HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);*/

    r[6]++;
        }
        else
        if(t->tm_hour==11&& t->tm_min==5&&r[7]==0){
    ring();

    r[7]++;
        }
        else
        if(t->tm_hour==11&& t->tm_min==45&&r[8]==0){
    ring();
    MessageBox(GetForegroundWindow(),"下课了","下课了",4);
	printf("%d\n",x);
	/*SetWindowPos(hwnd1,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);//窗口置顶
	ShowWindow(hwnd1,SW_RESTORE);		//激活并显示窗口
	SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
	SetWindowPos(hwnd1,HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);*/

    r[8]++;
        }
        else
        if(t->tm_hour==12&& t->tm_min==40&&r[9]==0){
    ring();
    MessageBox(GetForegroundWindow(),"起床了","都给我起床",4);
	printf("%d\n",x);
	/*SetWindowPos(hwnd1,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);//窗口置顶
	ShowWindow(hwnd1,SW_RESTORE);		//激活并显示窗口
	SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
	SetWindowPos(hwnd1,HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);*/

    r[9]++;
        }
        else
        if(t->tm_hour==13&& t->tm_min==20&&r[10]==0){
    ring();
    MessageBox(GetForegroundWindow(),"下课了","下课了",4);
	printf("%d\n",x);
	/*SetWindowPos(hwnd1,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);//窗口置顶
	ShowWindow(hwnd1,SW_RESTORE);		//激活并显示窗口
	SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
	SetWindowPos(hwnd1,HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);*/

    r[10]++;
        }
        if(t->tm_hour==13&&t->tm_min==30&&r[11]==0){
    ring();

    r[11]++;
        }
        if(t->tm_hour==14&&t->tm_min==10&&r[12]==0){
    ring();
    MessageBox(GetForegroundWindow(),"下课了","下课了",4);
	printf("%d\n",x);
	/*SetWindowPos(hwnd1,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);//窗口置顶
	ShowWindow(hwnd1,SW_RESTORE);		//激活并显示窗口
	SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
	SetWindowPos(hwnd1,HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);*/

    r[12]++;
        }
        if(t->tm_hour==14&&t->tm_min==15&&r[13]==0){
    ring();

    r[13]++;
        }
        if(t->tm_hour==14&&t->tm_min==55&&r[14]==0){
    ring();
    MessageBox(GetForegroundWindow(),"收卷","为什么不收卷？",4);
	printf("%d\n",x);
	/*SetWindowPos(hwnd1,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);//窗口置顶
	ShowWindow(hwnd1,SW_RESTORE);		//激活并显示窗口
	SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
	SetWindowPos(hwnd1,HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);*/

    r[14]++;
        }
        if(t->tm_hour==15&&t->tm_min==0&&r[15]==0){
    ring();

    r[15]++;
        }if(t->tm_hour==15&&t->tm_min==40&&r[16]==0){
    ring();
    MessageBox(GetForegroundWindow(),"下课了","下课了",4);
	printf("%d\n",x);
	/*SetWindowPos(hwnd1,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);//窗口置顶
	ShowWindow(hwnd1,SW_RESTORE);		//激活并显示窗口
	SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
	SetWindowPos(hwnd1,HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);*/

    r[16]++;
        }if(t->tm_hour==15&&t->tm_min==50&&r[17]==0){
    ring();

    r[17]++;
        }
        if(t->tm_hour==16&&t->tm_min==30&&r[18]==0){
    ring();
    MessageBox(GetForegroundWindow(),"下课了","下课了",4);
	printf("%d\n",x);
	/*SetWindowPos(hwnd1,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);//窗口置顶
	ShowWindow(hwnd1,SW_RESTORE);		//激活并显示窗口
	SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);

	SetWindowPos(hwnd1,HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);*/
    r[18]++;
        }

        if(t->tm_hour==16&&t->tm_min==40&&r[19]==0){
    ring();

    r[19]++;
        }
        if(t->tm_hour==17&&t->tm_min==30&&r[20]==0){
    ring();
    MessageBox(GetForegroundWindow(),"下课了","下课了",4);
	printf("%d\n",x);
	/*SetWindowPos(hwnd1,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);//窗口置顶
	ShowWindow(hwnd1,SW_RESTORE);		//激活并显示窗口
	SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
	SetWindowPos(hwnd1,HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);*/

    r[20]++;
        }
        if(t->tm_hour==18&&t->tm_min==26&&r[21]==0){
        	MessageBox(GetForegroundWindow(),"下课了","老师，您好像过点了",4);
			printf("%d\n",x);
			/*SetWindowPos(hwnd1,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);//窗口置顶
			ShowWindow(hwnd1,SW_RESTORE);		//激活并显示窗口
			SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
			SetWindowPos(hwnd1,HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);*/
			r[21]++;
		}
        j++;
        Sleep(5000);

    }
    return 0;
}
