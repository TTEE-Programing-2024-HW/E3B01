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
	switch(ch)			//根據輸入的字元選擇功能															 
	{
	case'A':			//a. 顯示現有座位																
	case'a':
		printf("\\123456789\n");			//印出座位表											
		for (q= 8;q>=0;q--)
		{
			printf("%d",q+1);
			for (w=0;w<=8;w++)
			{
				if (seat[q][w] == 0)
					printf("-");
				else
					printf("*");
			}
					printf("\n");
		}
	printf("(按下任意鍵回到主選單)\n");									//提示回到主選單 
	getch(fault);
	goto menu;
	case'B':			//b.電腦排位 																
	case'b':
		printf("請輸入人數(1~4)=>");
		scanf("%d",&r);
	while(r<1||r>4)			//判斷和要求的人數有沒有不同 												
	{
		system("CLS");
		printf("人數錯誤，請重新輸入！\n");				//判斷為否，重新輸入							 
		printf("請輸入人數(1~4)=>");			//印出輸入人數 
		scanf("%d",&r);
	}
		system("CLS");
		z=0;
		while (z<=1)			//設定位置次數上限 													
		{
			while(e!=1)			//產生座位的亂數													 
			{
				q= rand() % (length-height+1)+height;
				w= rand() % (length-height+1)+height;
					if (seat[q][w] !=1)			//將產生的亂數座位安排成選中的座位 											
					{
						if (r==1)
						{
							seat[q][w]=2;			//1個座位 										
							e=1;
						}
						else if (r==2 && (w+1)<=8 && seat[q][w+1] != 1)
						{
							seat[q][w]=2;			//2個座位 										
							seat[q][w+1]=2;
							e= 1;
						}
						else if (r==3 && (w+ 2)<=8 && seat[q][w+1] !=1 && seat[q][w+2] != 1)
						{
							seat[q][w] = 2;			//3個座位									
							seat[q][w+1] = 2;
							seat[q][w+2] = 2;
							e=1;
						}
						else if (r==4 && (w+ 1)<= 8 && (q+1)>=0 && seat[q][w+1] != 1 && seat[q+1][w] != 1 && seat[q+1][w+1] != 1)
						{
							seat[q][w] = 2;			//4個座位								 
							seat[q+1][w] = 2;
							seat[q][w+1] = 2;
							seat[q+1][w+1] = 2;
							e=1;
						}
					}
				else
					e=0;			//電腦沒找到符合條件的位置 													
			}
				printf("\\123456789\n");			//印出座位表
				for (q=8;q>=0;q--)
				{
					printf("%d",q+1);
					for (w=0;w<=8;w++)
					{
					if (seat[q][w] == 0)
						printf("-");
					else if (seat[q][w] == 1)
						printf("*");
					else
						printf("@");
					}
					printf("\n");
				}
				printf("接受此電腦排位嗎(y / n)？\n");			//印出是否接受 
				printf("(不接受次數達兩次將退回主選單)\n");
				fflush(stdin);
				scanf("%c", &ch);
			while(ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')				//判斷字元是否是需要的 
				{
					system("CLS");
					printf("錯誤訊息，請重新輸入！\n");			//輸入錯誤，需要使用者重新輸入 
					printf("接受此電腦排位嗎(y / n)？");
					scanf("%c", &ch);
				}
				
				if(ch == 'Y' || ch == 'y')			//判斷輸入者的選擇 										
				{
					for (q=8;q>=0;q--)			//將挑中的位置變成已預訂的座位 										
					{
						for (w=0;w<= 8;w++)
						{
							if (seat[q][w]==2)
								seat[q][w]=1;
						}
					}
					e=0;
					goto menu;
				}
				else
				{
					z++;
					e=0;
					for (q=8;q>=0;q--)			//將沒挑到的位置放棄										
					{
						for (w=0;w<=8;w++)
						{
							if (seat[q][w] == 2)
								seat[q][w] = 0;
						}
					}
					system("CLS");
				}	
				}
			printf("\n已選擇兩次不接受，退回主選單。");
			printf("\n(按下任意鍵回到主選單)\n");			//回到主選單 
			getch(fault);
			goto menu;
	case'D':			//d.系統結束															 
	case'd':
			printf("Continue? (y/n)");			//確認輸入者是否繼續											 
			fflush(stdin);
			scanf("%c", &ch);
			while(ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')			//確認是否為需要中的字元 
			{
				system("CLS");
				printf("錯誤訊息，請重新輸入！\n");			//判斷為錯誤，要求輸入者重新輸入 								
				printf("請輸入一個字元 =>");
				scanf("%c", &ch);
			}
			
			if(ch == 'Y' || ch == 'y')			//確認輸入者的選擇 											
				return 0;
			else
				goto menu;
			return 0;
			
		default:																			
			printf("錯誤訊息，請重新輸入！\n");			//輸入的字元和要求不同，要求輸入者重新輸入
			printf("(按下任意鍵回到主選單)\n");
			getch(fault);
			system("CLS");
			goto menu;
			
	}
	return 0;
}
//心得：這次的作業三覺得c.自主選位比較難寫，而且我也試了很多次但就是沒法成功，所以就乾脆放棄了。 
