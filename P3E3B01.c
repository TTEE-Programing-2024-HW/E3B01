#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(void)
{
	printf("                                                                           \n"); 
	printf("       EEEEEEEEEE     3333333333      BBBBBBBBBB       0000000000      111 \n"); 
	printf("       EEEEEEEEEE     33333333333     BBBBBBBBBBB      0000000000      111 \n"); 
	printf("       EEE                     333    BBB      BBB     000    000      111 \n"); 
	printf("       EEE                     333    BBB      BBB     000    000      111 \n"); 
	printf("       EEEEEEEEEE     3333333333      BBBBBBBBBB       000    000      111 \n"); 
	printf("       EEEEEEEEEE     3333333333      BBBBBBBBBB       000    000      111 \n"); 
	printf("       EEE                     333    BBB      BBB     000    000      111 \n"); 
	printf("       EEE                     333    BBB      BBB     000    000      111 \n"); 
	printf("       EEEEEEEEEE     33333333333     BBBBBBBBBBB      0000000000      111 \n"); 
	printf("       EEEEEEEEEE     3333333333      BBBBBBBBBB       0000000000      111 \n");   
	printf("                                                                           \n");  //顯示個人風格封面 

	int code=0,z=0;			//宣告變數
char ch,fault; 			
	srand( time(NULL) );
	getch(fault);
	system("CLS");			//清除螢幕
	printf("輸入4個數字的密碼:"); 
	scanf("%d",&code);			//輸入密碼並偵測
int seat[9][9]={0,0}, q, w, e, r, a, b;		
while(code!= 2024)			//判斷是否有錯誤 
{
	z++;
	if(z>= 3)		//如果超過設定的次數則關閉程式 
	{
		system("pause");
		return 0;
	}
	printf("\n密碼輸入錯誤 %d次，還有%d次機會\n",z,3-z);			//告知目前錯誤的次數 
	printf("輸入4個數字的密碼:");			//輸入密碼並偵測 
	scanf("%d", &code);
}
int length=8,height=0;			//設定亂數座位上下限 
	for(e=0;e<=9;e++)			//產生亂數座位
	{
		q=rand() % (length-height+1)+height;
		w=rand() % (length-height+1)+height;
	if (seat[q][w] == 1)
		e--;
		seat[q][w] = 1;
	}
	menu:			//顯示主選單 
	system("CLS");																
	printf("。．。．。．。．。．。．\n");  //顯示螢幕主選單 
	printf("．   a.顯示現有座位   。\n");
	printf("。   b.電腦排位       ．\n");
	printf("．   c.自主選位       。\n");
	printf("。   d.系統結束       ．\n");
	printf("．。．。．。．。．。．。\n");
	printf("輸入一個字元:");			//輸入abcd並偵測 												
	fflush(stdin);
	scanf("%c", &ch);
	system("CLS");
}
