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
	printf("                                                                           \n");  //��ܭӤH����ʭ� 

	int code=0,z=0;			//�ŧi�ܼ�
char ch,fault; 			
	srand( time(NULL) );
	getch(fault);
	system("CLS");			//�M���ù�
	printf("��J4�ӼƦr���K�X:"); 
	scanf("%d",&code);			//��J�K�X�ð���
int seat[9][9]={0,0}, q, w, e, r, a, b;		
while(code!= 2024)			//�P�_�O�_�����~ 
{
	z++;
	if(z>= 3)		//�p�G�W�L�]�w�����ƫh�����{�� 
	{
		system("pause");
		return 0;
	}
	printf("\n�K�X��J���~ %d���A�٦�%d�����|\n",z,3-z);			//�i���ثe���~������ 
	printf("��J4�ӼƦr���K�X:");			//��J�K�X�ð��� 
	scanf("%d", &code);
}
int length=8,height=0;			//�]�w�üƮy��W�U�� 
	for(e=0;e<=9;e++)			//���ͶüƮy��
	{
		q=rand() % (length-height+1)+height;
		w=rand() % (length-height+1)+height;
	if (seat[q][w] == 1)
		e--;
		seat[q][w] = 1;
	}
	menu:			//��ܥD��� 
	system("CLS");																
	printf("�C�D�C�D�C�D�C�D�C�D�C�D\n");  //��ܿù��D��� 
	printf("�D   a.��ܲ{���y��   �C\n");
	printf("�C   b.�q���Ʀ�       �D\n");
	printf("�D   c.�ۥD���       �C\n");
	printf("�C   d.�t�ε���       �D\n");
	printf("�D�C�D�C�D�C�D�C�D�C�D�C\n");
	printf("��J�@�Ӧr��:");			//��Jabcd�ð��� 												
	fflush(stdin);
	scanf("%c", &ch);
	system("CLS");
	switch(ch)			//�ھڿ�J���r����ܥ\��															 
	{
	case'A':			//a. ��ܲ{���y��																
	case'a':
		printf("\\123456789\n");			//�L�X�y���											
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
	printf("(���U���N��^��D���)\n");									//���ܦ^��D��� 
	getch(fault);
	goto menu;
	
	}
	return 0;
}
