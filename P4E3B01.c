#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
// �w�q�ǥ͵��c��
struct man																		
{
    char name[10];// �ǥͩm�W
	int id;// �ǥ;Ǹ�
	int mg;// �ƾǦ��Z
	int pg;// ���z���Z
	int eg;// �^�妨�Z
	float avg;// �������Z
};
int main(void)
{
	int password = 0, w, n=0;
	char ch;
	struct man stu[10];// �w�q�̦h10��ǥ�
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
		system("PAUSE");// �Ȱ����
		system("CLS");// �M���̹�
	} 
	// �K�X����
	printf("�п�J4��ƱK�X =>");												
	scanf("%d", &password);
	w = 0;
	while(password != 2024)//�P�_�O�_�����~													 
	{
		w+=1;
		if(w >= 3)// ���~���ƶW�L�T��																
		{
			printf("�K�X���~���ƹL�h�A�{�������C\n");
			system("pause");
			return 0;
		}
		printf("\n�K�X��J���~ %d���A�٦� %d�����|\n", w, 3 - w);				
		printf("�п�J4��ƱK�X =>");											 
		scanf("%d", &password);
	}
	// �D��� 
    system("CLS");// �M���̹�		
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN);
    printf("----------[Grade System]----------\n");
    printf("|  a. Enter student grades       |\n");
    printf("|  b. Display student grades     |\n");
    printf("|  c. Search for student grades  |\n");
    printf("|  d. Grade ranking              |\n");
    printf("|  e. Exit system                |\n");
    printf("----------------------------------\n");
    printf("�п�J a~e �ﶵ\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
    return 0;
}

