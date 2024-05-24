#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
// 定義學生結構體
struct man																		
{
    char name[10];// 學生姓名
	int id;// 學生學號
	int mg;// 數學成績
	int pg;// 物理成績
	int eg;// 英文成績
	float avg;// 平均成績
};
int main(void)
{
	int password = 0, w, n=0;
	char ch;
	struct man stu[10];// 定義最多10位學生
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
		printf("                                                                           \n");//顯示個人風格封面 
		system("PAUSE");// 暫停顯示
		system("CLS");// 清除屏幕
	} 
	// 密碼驗證
	printf("請輸入4位數密碼 =>");												
	scanf("%d", &password);
	w = 0;
	while(password != 2024)//判斷是否有錯誤													 
	{
		w+=1;
		if(w >= 3)// 錯誤次數超過三次																
		{
			printf("密碼錯誤次數過多，程式結束。\n");
			system("pause");
			return 0;
		}
		printf("\n密碼輸入錯誤 %d次，還有 %d次機會\n", w, 3 - w);				
		printf("請輸入4位數密碼 =>");											 
		scanf("%d", &password);
	}
	// 主選單 
    system("CLS");// 清除屏幕		
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN);
    printf("----------[Grade System]----------\n");
    printf("|  a. Enter student grades       |\n");
    printf("|  b. Display student grades     |\n");
    printf("|  c. Search for student grades  |\n");
    printf("|  d. Grade ranking              |\n");
    printf("|  e. Exit system                |\n");
    printf("----------------------------------\n");
    printf("請輸入 a~e 選項\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
    return 0;
}

