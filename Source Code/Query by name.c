#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"StuInfo.h"
void Querybyname();
void menu();
void print();
extern int len;
void Querybyname()
{
	char Queryname[20];
	int i,choice,flag=1;
	if(len==0)
	{
		printf("                         ********û��ѧ����Ϣ����������ѧ����Ϣ******\n");
	    menu;
	}
	else
	{
		printf("                        ������Ҫ��ѯѧ��������:");
		scanf("%s",Queryname);
		for(i=0;i<=len;i++)
		{
			if(strcmp(Queryname,stuinfo[i].name)==0)
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
				
				Querybyname();
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
