#include<stdio.h>
#include<stdlib.h>
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
	printf("       EEE                     333    BBB      BBB     000    000      111     QQQ QQQ \n"); 
	printf("       EEEEEEEEEE     33333333333     BBBBBBBBBBB      0000000000      111      QQQQQ  \n"); 
	printf("       EEEEEEEEEE     3333333333      BBBBBBBBBB       0000000000      111       QQQ   \n");   
	printf("                                                                           \n");  //��ܭӤH����ʭ� 

	system("pause");  //�ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	system("CLS");  //�M���e�� 
    	
    int password=2024,i,p,e,j,k;      
    printf("�п�J�K�X:");         //��J�K�X�A�P�_�O�_���T        
                            
    for (i=0;i<3;i++)
    {
    	scanf("%d",&p);     
        if(p==password)         
		{         
            break;
        }
        else 
        if(i<2)
		{
           printf("�K�X���~�A�Э��s��J:");
		   printf("%c",'\a');
		} 
    }
    	if (i<3)       //�P�_��J���� 
    	{
			printf("�w��!!\n");
			system("pause");
			system("CLS");    
		}
		else
		{
	        printf("�K�X���~�A��J���Ƥw�F�W��\n");        
			printf("%c",'\a');
    	    
			system("pause");
  			return 0;
		}

	menu:
		
	printf("�C�D�C�D�C�D�C�D�C�D�C�D�C�D\n");  //��ܿù��D��� 
	printf("�D   a.�e�X�����T����  �C\n");
	printf("�C   b.��ܭ��k��     �D\n");
	printf("�D   c.����               �C\n");
	printf("�C�D�C�D�C�D�C�D�C�D�C�D�C�D\n");		
	
	printf("�п�J�@�Ӧr��:");
	fflush(stdin);                //��input buffer�b��
	scanf("%c",&e);
	system("CLS");	
	
	if(e==65||e==97)                           //�P�_��J���r�� 
	{
		m1:
		printf("�п�J�@��a��n���r��:");
		fflush(stdin);                       //��input buffer�b��
		scanf("%c",&e);

		if(e<97||e>110)                      //�P�_��J���r���O�_���T 
		{
			printf("��J���~�A�Э��s��J\n\n");
			system("pause");
			system("CLS");
			goto m1;			
		}
		else
		{
			i=97;
			j=e;
			k=1;
			while((e-k)>95)	                  	//�L�X�T����
			{
				while(i<j)
				{
					printf(" ");
					i++;
				}
				while(j<e)
				{
					printf("%c",j);
					j++;
				}
				printf("%c\n",e);
				j=(e-k);
				i=97;
				k++;
			}
			printf("\n");					
			system("pause");
			system("CLS");
			goto menu;			
		}
	}
	else if(e==66||e==98)
	{
		m2:
		printf("�п�J�@��1~9�����:");
		fflush(stdin);                      //��input buffer�b��
		scanf("%d",&e);
		
		if(e<1||e>9)                       //�P�_��J���r���O�_���T
		{
			printf("��J���~�A�Э��s��J\n\n");
			system("pause");
			system("CLS");
			goto m2;
		}
		else
		{
			for(j=1;j<=e;j++)                //�L�X���k�� 
			{
				for(k=1;k<=9;k++)
				{
					if(e<k)
						break;
					else if(k==9)
						printf("%dX%d=%2d\n",j,k,j*k);
					else
						printf("%dX%d=%2d\n",j,k,j*k);				
				}
	
			}
			printf("\n");		
			system("pause");
			system("CLS");
			goto menu;
		}	
	}
	
	else if(e==67||e==99)
	{
		m3: 
		printf("Continue? (y/n):");
		fflush(stdin);                          //��input buffer�b��
		scanf("%c",&e);
		
		if(e==89||e==121)                    //�P�_��J���r���O�_���T 
		{	
			printf("��^�ؿ�\n\n");	
			system("pause");
			system("CLS");
			goto menu;
		}
		else if(e==78||e==110) 
		{
			printf("����\n\n");
			system("pause");
			return 0;			
		}
		else
		{
			printf("��J���~�A�Э��s��J\n\n");
			system("pause");
			system("CLS");
			goto m3;
		}		

	}
	else
	{
		printf("��J���~�A�Э��s��J\n\n");
		system("pause");
		system("CLS");
		goto menu;					
	}
		
	system("pause");
	return 0;	

}


