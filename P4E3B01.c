#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <string.h>
#include<windows.h>
struct man																		
{
    char name[10];
	int id;
	int mg;
	int pg;
	int eg;
	float avg;
};//�ϥε��c 
int main(void)
{	
	int password = 0, w, n=0, i, j, k, bs[10]={ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};	
	char ch, find[10];
	struct man stu[10];
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
		printf("                                                                           \n");//��ܭӤH����ʭ� 
		system("PAUSE");
		system("CLS");
	} 
	
	printf("�п�J4��ƱK�X =>");												
	scanf("%d", &password);//��J�K�X�ð���
	w = 0;
	while(password != 2024)//�P�_�O�_�����~													 
	{
		w+=1;
		if(w >= 3)//�p�G�W�L�]�w�����ƫh�����{��																
		{
			system("pause");
			return 0;
		}
		printf("\n�K�X��J���~ %d���A�٦� %d�����|\n", w, 3 - w);				
		printf("�п�J4��ƱK�X =>");											 
		scanf("%d", &password);
	}
	menu:
	system("CLS");		
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN);
	printf("----------[Grade System]----------\n");
	printf("|  a. Enter student grades       |\n");
	printf("|  b. Display student grades     |\n");
	printf("|  c. Search for student grades  |\n");
	printf("|  d. Grade ranking              |\n");
	printf("|  e. Exit system                |\n");
	printf("----------------------------------\n");
	printf("�п�Ja~e\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
	scanf("%c", &ch);
	return 0;
}

