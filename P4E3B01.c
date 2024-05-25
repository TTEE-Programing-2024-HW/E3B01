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
int i,j;
// 輸入學生成績
void enter_grades(struct man stu[], int *n) {
    printf("請輸入學生數量 (5~10)：");
    scanf("%d", n);

    if (*n < 5 || *n > 10) {
        printf("數量必須在5到10之間\n");
        return;
    }
    for (i = 0; i < *n; i++) {
        printf("請輸入第%d位學生的姓名：", i + 1);
        scanf("%s", stu[i].name);
        printf("請輸入6位數字的學號：");
        scanf("%d", &stu[i].id);

        if (stu[i].id < 100000 || stu[i].id > 999999) {
            printf("學號必須為6位數字\n");
            i--;
            continue;
        }

        printf("請輸入數學成績 (0~100)：");
        scanf("%d", &stu[i].mg);
        printf("請輸入物理成績 (0~100)：");
        scanf("%d", &stu[i].pg);
        printf("請輸入英文成績 (0~100)：");
        scanf("%d", &stu[i].eg);

        if (stu[i].mg < 0 || stu[i].mg > 100 || stu[i].pg < 0 || stu[i].pg > 100 || stu[i].eg < 0 || stu[i].eg > 100) {
            printf("成績必須在0到100之間\n");
            i--;
            continue;
        }

        stu[i].avg = (stu[i].mg + stu[i].pg + stu[i].eg) / 3.0;
    }
    printf("成績輸入完成！\n");
    system("PAUSE");
}
// 顯示所有學生成績
void display_grades(struct man stu[], int n) {
    system("CLS");
    for (i = 0; i < n; i++) {
        printf("姓名: %s, 學號: %d, 數學: %d, 物理: %d, 英文: %d, 平均: %.1f\n",
               stu[i].name, stu[i].id, stu[i].mg, stu[i].pg, stu[i].eg, stu[i].avg);
    }
    printf("按任意鍵返回主選單...");
    getch();
}
// 搜尋學生成績
void search_grades(struct man stu[], int n) {
    system("CLS");
    char find[10];
    printf("請輸入要搜尋的學生姓名：");
    scanf("%s", find);

    int found = 0;
    for (i= 0; i < n; i++) {
        if (strcmp(stu[i].name, find) == 0) {
            printf("姓名: %s, 學號: %d, 數學: %d, 物理: %d, 英文: %d, 平均: %.1f\n",
                   stu[i].name, stu[i].id, stu[i].mg, stu[i].pg, stu[i].eg, stu[i].avg);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("找不到該學生資料。\n");
    }

    printf("按任意鍵返回主選單...");
    getch();
}
// 按平均成績排序並顯示學生排名
void grade_ranking(struct man stu[], int n) {
    system("CLS");
    struct man temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (stu[i].avg < stu[j].avg) {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("姓名: %s, 學號: %d, 平均成績: %.1f\n",
               stu[i].name, stu[i].id, stu[i].avg);
    }

    printf("按任意鍵返回主選單...");
    getch();
}
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
	while (1) {
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
    fflush(stdin);// 清除標準輸入緩衝區
    ch = getch();
	// 根據選項執行對應功能
    switch (ch) {
        case 'a':
            enter_grades(stu, &n);
            break;
        case 'b':
            display_grades(stu, n);
            break;
        case 'c':
            search_grades(stu, n);
            break;
        case 'd':
            grade_ranking(stu, n);
            break;
        case 'e':
            
            break;
        default:
            printf("無效的選項，請重新輸入。\n");
            system("PAUSE");
        }
    }
    return 0;
}
