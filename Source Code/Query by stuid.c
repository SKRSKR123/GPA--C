#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"StuInfo.h"
void Querybystuid();
void menu();
void print();
extern int len;
void Querybystuid ()
{
	int Querystuid,i,choice;
	int flag;
	flag=1;
	if(len==0)
	{
		printf("                       *******û��ѧ����Ϣ����������ѧ����Ϣ******\n");
		menu();
	}
	else
	{
	
		printf("                       ������Ҫ��ѯ��ѧ��:");
		scanf("%ld",&Querystuid);
		for(i=0;i<=len;i++)
		{
			if(Querystuid==stuinfo[i].stuid)
			{
				printf("                        ��ѯ����ѧ���ĳɼ�!!\n");
				printf("                        ѧ����Ϣ����:\n");
				printf("                        ѧ��    ����    ����    Ӣ��    ��ѧ    �ܳɼ�\n");
		    	printf("                        %ld      %s      %.2f    %.2f    %.2f      %.2f\n",stuinfo[i].stuid,stuinfo[i].name,stuinfo[i].CH,stuinfo[i].EN,stuinfo[i].MA,stuinfo[i].sum);
		
			}
			else
			{
				flag=0;
			}
		
		}
		
 	}	
	printf("                       ح---------------------------------------ح\n");
	printf("                       ح              ��ӳɹ���               ح\n");
	printf("                       ح---------------------------------------ح\n");
	printf("                       ح            1.������ѯѧ����Ϣ         ح\n");
	printf("                       ح            2.��ӡ                     ح\n");
	printf("                       ح            0.�˳�                     ح\n");
	printf("                       ح---------------------------------------ح\n");
	printf("                        ����������ѡ��:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				
				Querybystuid();
				break;
			}
		case 2:print();break;
		case 0:
			{
			
				printf("                        �˳�\n");
				menu();
			}
	}

}
