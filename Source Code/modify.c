#include<stdio.h>
#include<stdlib.h>
#include"StuInfo.h"
extern int len;
void menu();
void print();

void modify()
{
	int choice,i,modifyid;
	
	if(len==0)
	{
		printf("***********û��ѧ����Ϣ,������ѧ����Ϣ***********");
		menu();
	} 
	else
	{
	 	printf("������Ҫ�޸ĵ�ѧ��:");
		scanf("%ld",&modifyid);
		for(i=0;i<len+1;i++)
		{
			if(modifyid==stuinfo[i].stuid)
			{
				printf("�������޸ĺ�ѧ��:");
				scanf("%ld",&stuinfo[i].stuid);
				printf("�������޸�ѧ��������:");
				scanf("%s",stuinfo[i].name);
				printf("�������޸�ѧ����ѧ�ɼ�: ");
				scanf("%f",&stuinfo[i].MA);
				printf("�������޸�ѧ�����ĳɼ�: ");
				scanf("%f",&stuinfo[i].CH);
				printf("�������޸�ѧ��Ӣ��ɼ�: ");
				scanf("%f",&stuinfo[i].EN);
				stuinfo[i].sum=stuinfo[i].MA+stuinfo[i].CH+stuinfo[i].EN;
				printf("�޸�ѧ���ܷ�Ϊ:%0.1f\n",stuinfo[i].sum);
			}
			
		}
		printf("ح---------------------------------------ح\n");
		printf("ح             �޸ĳɹ���               ح\n");
		printf("ح---------------------------------------ح\n");
		printf("ح            1.�����޸�ѧ����Ϣ         ح\n");
		printf("ح            2.��ӡ                     ح\n");
		printf("ح            0.�˳�                     ح\n");
		printf("ح---------------------------------------ح\n");
		printf("����������ѡ��:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:modify();break;
			case 2:print();break;
			case 0:
				{
					printf("�˳�\n");
					menu();
				}
		}
	}
}
