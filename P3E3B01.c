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
	case'B':			//b.�q���Ʀ� 																
	case'b':
		printf("�п�J�H��(1~4)=>");
		scanf("%d",&r);
	while(r<1||r>4)			//�P�_�M�n�D���H�Ʀ��S�����P 												
	{
		system("CLS");
		printf("�H�ƿ��~�A�Э��s��J�I\n");				//�P�_���_�A���s��J							 
		printf("�п�J�H��(1~4)=>");			//�L�X��J�H�� 
		scanf("%d",&r);
	}
		system("CLS");
		z=0;
		while (z<=1)			//�]�w��m���ƤW�� 													
		{
			while(e!=1)			//���ͮy�쪺�ü�													 
			{
				q= rand() % (length-height+1)+height;
				w= rand() % (length-height+1)+height;
					if (seat[q][w] !=1)			//�N���ͪ��üƮy��w�Ʀ��襤���y�� 											
					{
						if (r==1)
						{
							seat[q][w]=2;			//1�Ӯy�� 										
							e=1;
						}
						else if (r==2 && (w+1)<=8 && seat[q][w+1] != 1)
						{
							seat[q][w]=2;			//2�Ӯy�� 										
							seat[q][w+1]=2;
							e= 1;
						}
						else if (r==3 && (w+ 2)<=8 && seat[q][w+1] !=1 && seat[q][w+2] != 1)
						{
							seat[q][w] = 2;			//3�Ӯy��									
							seat[q][w+1] = 2;
							seat[q][w+2] = 2;
							e=1;
						}
						else if (r==4 && (w+ 1)<= 8 && (q+1)>=0 && seat[q][w+1] != 1 && seat[q+1][w] != 1 && seat[q+1][w+1] != 1)
						{
							seat[q][w] = 2;			//4�Ӯy��								 
							seat[q+1][w] = 2;
							seat[q][w+1] = 2;
							seat[q+1][w+1] = 2;
							e=1;
						}
					}
				else
					e=0;			//�q���S���ŦX���󪺦�m 													
			}
				printf("\\123456789\n");			//�L�X�y���
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
				printf("�������q���Ʀ��(y / n)�H\n");			//�L�X�O�_���� 
				printf("(���������ƹF�⦸�N�h�^�D���)\n");
				fflush(stdin);
				scanf("%c", &ch);
			while(ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')				//�P�_�r���O�_�O�ݭn�� 
				{
					system("CLS");
					printf("���~�T���A�Э��s��J�I\n");			//��J���~�A�ݭn�ϥΪ̭��s��J 
					printf("�������q���Ʀ��(y / n)�H");
					scanf("%c", &ch);
				}
				
				if(ch == 'Y' || ch == 'y')			//�P�_��J�̪���� 										
				{
					for (q=8;q>=0;q--)			//�N�D������m�ܦ��w�w�q���y�� 										
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
					for (q=8;q>=0;q--)			//�N�S�D�쪺��m���										
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
			printf("\n�w��ܨ⦸�������A�h�^�D���C");
			printf("\n(���U���N��^��D���)\n");			//�^��D��� 
			getch(fault);
			goto menu;
	case'D':			//d.�t�ε���															 
	case'd':
			printf("Continue? (y/n)");			//�T�{��J�̬O�_�~��											 
			fflush(stdin);
			scanf("%c", &ch);
			while(ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')			//�T�{�O�_���ݭn�����r�� 
			{
				system("CLS");
				printf("���~�T���A�Э��s��J�I\n");			//�P�_�����~�A�n�D��J�̭��s��J 								
				printf("�п�J�@�Ӧr�� =>");
				scanf("%c", &ch);
			}
			
			if(ch == 'Y' || ch == 'y')			//�T�{��J�̪���� 											
				return 0;
			else
				goto menu;
			return 0;
			
		default:																			
			printf("���~�T���A�Э��s��J�I\n");			//��J���r���M�n�D���P�A�n�D��J�̭��s��J
			printf("(���U���N��^��D���)\n");
			getch(fault);
			system("CLS");
			goto menu;
			
	}
	return 0;
}
//�߱o�G�o�����@�~�Tı�oc.�ۥD��������g�A�ӥB�ڤ]�դF�ܦh�����N�O�S�k���\�A�ҥH�N���ܩ��F�C 
