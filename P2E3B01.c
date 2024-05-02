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
	printf("                                                                           \n");  //顯示個人風格封面 

	system("pause");  //螢幕畫面暫停，並等待使用者按任意鍵
	system("CLS");  //清除畫面 
    	
    int password=2024,i,p,e,j,k;      
    printf("請輸入密碼:");         //輸入密碼，判斷是否正確        
                            
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
           printf("密碼錯誤，請重新輸入:");
		   printf("%c",'\a');
		} 
    }
    	if (i<3)       //判斷輸入次數 
    	{
			printf("歡迎!!\n");
			system("pause");
			system("CLS");    
		}
		else
		{
	        printf("密碼錯誤，輸入次數已達上限\n");        
			printf("%c",'\a');
    	    
			system("pause");
  			return 0;
		}

	menu:
		
	printf("。．。．。．。．。．。．。．\n");  //顯示螢幕主選單 
	printf("．   a.畫出直角三角形  。\n");
	printf("。   b.顯示乘法表     ．\n");
	printf("．   c.結束               。\n");
	printf("。．。．。．。．。．。．。．\n");		
	
	printf("請輸入一個字元:");
	fflush(stdin);                //使input buffer淨空
	scanf("%c",&e);
	system("CLS");	
	
	if(e==65||e==97)                           //判斷輸入的字元 
	{
		m1:
		printf("請輸入一個a到n的字元:");
		fflush(stdin);                       //使input buffer淨空
		scanf("%c",&e);

		if(e<97||e>110)                      //判斷輸入的字元是否正確 
		{
			printf("輸入錯誤，請重新輸入\n\n");
			system("pause");
			system("CLS");
			goto m1;			
		}
		else
		{
			i=97;
			j=e;
			k=1;
			while((e-k)>95)	                  	//印出三角形
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
		printf("請輸入一個1~9的整數:");
		fflush(stdin);                      //使input buffer淨空
		scanf("%d",&e);
		
		if(e<1||e>9)                       //判斷輸入的字元是否正確
		{
			printf("輸入錯誤，請重新輸入\n\n");
			system("pause");
			system("CLS");
			goto m2;
		}
		else
		{
			for(j=1;j<=e;j++)                //印出乘法表 
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
		fflush(stdin);                          //使input buffer淨空
		scanf("%c",&e);
		
		if(e==89||e==121)                    //判斷輸入的字元是否正確 
		{	
			printf("返回目錄\n\n");	
			system("pause");
			system("CLS");
			goto menu;
		}
		else if(e==78||e==110) 
		{
			printf("結束\n\n");
			system("pause");
			return 0;			
		}
		else
		{
			printf("輸入錯誤，請重新輸入\n\n");
			system("pause");
			system("CLS");
			goto m3;
		}		

	}
	else
	{
		printf("輸入錯誤，請重新輸入\n\n");
		system("pause");
		system("CLS");
		goto menu;					
	}
		
	system("pause");
	return 0;	

}


