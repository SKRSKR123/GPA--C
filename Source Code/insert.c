#include<stdio.h>
#include"StuInfo.h"
void insert();
void print();
void menu();
void init();
void gate();
extern int len;

void insert()
{
	int choice,insertsite,i;
	
	printf("                        ������Ҫ��ӵ�λ��:[1---%d]:",len);
	scanf("%d",&insertsite);
	gate();
	
	if(insertsite>=1&&insertsite<=len+1)
	{
		for( i=len;i>insertsite-1;i--)
		{
			stuinfo[i+1]=stuinfo[i];
		}
		stuinfo[insertsite-1]=stuinfo[len+1];
		len++;
		
	
	}
	else
	{
		printf("                        �������λ������!!");
	}
	printf("                       ح---------------------------------------ح\n");
	printf("                       ح              ��ӳɹ���               ح\n");
	printf("                       ح---------------------------------------ح\n");
	printf("                       ح            1.�������ѧ����Ϣ         ح\n");
	printf("                       ح            2.��ӡ                     ح\n");
	printf("                       ح            0.�˳�                     ح\n");
	printf("                       ح---------------------------------------ح\n");
	printf("                        ����������ѡ��:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				
				insert();
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
