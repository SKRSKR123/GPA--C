#include<stdio.h>
#include<stdlib.h>
#include"StuInfo.h"
extern void menu();
extern void init();
extern void print();
extern int len;


void del()
{
	int choice,delsite,i;
	printf("������ɾ����λ��:");
	scanf("%d",&delsite);
	if(delsite>1&&delsite<=len+2)
	{
		for(i=delsite;i<len;i++)
		{
			stuinfo[i-1]=stuinfo[i];
		}
		len--;
		
	}
	else
	{
		printf("                        �����λ�ô���!!\n");
	}
	printf("                       ح---------------------------------------ح\n");
	printf("                       ح              ��ӳɹ���               ح\n");
	printf("                       ح---------------------------------------ح\n");
	printf("                       ح            1.����ɾ��ѧ����Ϣ         ح\n");
	printf("                       ح            2.��ӡ                     ح\n");
	printf("                       ح            0.�˳�                     ح\n");
	printf("                       ح---------------------------------------ح\n");
	printf("                        ����������ѡ��:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				
				del();
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
