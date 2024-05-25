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
int i,j;
// ��J�ǥͦ��Z
void enter_grades(struct man stu[], int *n) {
    printf("�п�J�ǥͼƶq (5~10)�G");
    scanf("%d", n);

    if (*n < 5 || *n > 10) {
        printf("�ƶq�����b5��10����\n");
        return;
    }
    for (i = 0; i < *n; i++) {
        printf("�п�J��%d��ǥͪ��m�W�G", i + 1);
        scanf("%s", stu[i].name);
        printf("�п�J6��Ʀr���Ǹ��G");
        scanf("%d", &stu[i].id);

        if (stu[i].id < 100000 || stu[i].id > 999999) {
            printf("�Ǹ�������6��Ʀr\n");
            i--;
            continue;
        }

        printf("�п�J�ƾǦ��Z (0~100)�G");
        scanf("%d", &stu[i].mg);
        printf("�п�J���z���Z (0~100)�G");
        scanf("%d", &stu[i].pg);
        printf("�п�J�^�妨�Z (0~100)�G");
        scanf("%d", &stu[i].eg);

        if (stu[i].mg < 0 || stu[i].mg > 100 || stu[i].pg < 0 || stu[i].pg > 100 || stu[i].eg < 0 || stu[i].eg > 100) {
            printf("���Z�����b0��100����\n");
            i--;
            continue;
        }

        stu[i].avg = (stu[i].mg + stu[i].pg + stu[i].eg) / 3.0;
    }
    printf("���Z��J�����I\n");
    system("PAUSE");
}
// ��ܩҦ��ǥͦ��Z
void display_grades(struct man stu[], int n) {
    system("CLS");
    for (i = 0; i < n; i++) {
        printf("�m�W: %s, �Ǹ�: %d, �ƾ�: %d, ���z: %d, �^��: %d, ����: %.1f\n",
               stu[i].name, stu[i].id, stu[i].mg, stu[i].pg, stu[i].eg, stu[i].avg);
    }
    printf("�����N���^�D���...");
    getch();
}
// �j�M�ǥͦ��Z
void search_grades(struct man stu[], int n) {
    system("CLS");
    char find[10];
    printf("�п�J�n�j�M���ǥͩm�W�G");
    scanf("%s", find);

    int found = 0;
    for (i= 0; i < n; i++) {
        if (strcmp(stu[i].name, find) == 0) {
            printf("�m�W: %s, �Ǹ�: %d, �ƾ�: %d, ���z: %d, �^��: %d, ����: %.1f\n",
                   stu[i].name, stu[i].id, stu[i].mg, stu[i].pg, stu[i].eg, stu[i].avg);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("�䤣��Ӿǥ͸�ơC\n");
    }

    printf("�����N���^�D���...");
    getch();
}
// ���������Z�ƧǨ���ܾǥͱƦW
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
        printf("�m�W: %s, �Ǹ�: %d, �������Z: %.1f\n",
               stu[i].name, stu[i].id, stu[i].avg);
    }

    printf("�����N���^�D���...");
    getch();
}
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
	while (1) {
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
    fflush(stdin);// �M���зǿ�J�w�İ�
    ch = getch();
	// �ھڿﶵ��������\��
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
            printf("�L�Ī��ﶵ�A�Э��s��J�C\n");
            system("PAUSE");
        }
    }
    return 0;
}
