#include<stdio.h>
#include<string.h>
void init();
extern void menu();
extern void print(); 

struct student
	{
		int  stuid;
		char name[20];
		float CH,MA,EN;
		float sum;
	}stuinfo[100];
extern int len;

void init()
{
	int choice;
	while(1)
	{
		printf("                        �������ѧ��ѧ��\n                     [����'-1'�����ϼ��˵�]:");
		scanf("%d",&stuinfo[len].stuid);
		if(stuinfo[len].stuid==-1)
		{
			break;
		}
		printf("                        �������ѧ������:");
		scanf("%s",stuinfo[len].name);
		printf("                        �������ѧ�������ĳɼ�:");
		scanf("%f",&stuinfo[len].CH);
		printf("                        �������ѧ������ѧ�ɼ�:");
		scanf("%f",&stuinfo[len].MA);
		printf("                        �������ѧ����Ӣ��ɼ�:");
		scanf("%f",&stuinfo[len].EN);
		stuinfo[len].sum=0;
		
		printf("                        ��ѧ�����ܳɼ�Ϊ%6.1f\n",stuinfo[len].sum=stuinfo[len].CH+stuinfo[len].MA+stuinfo[len].EN);
	
		len++;
		
		
    }
	printf("                        ح----------------------------------ح\n");
	printf("                        ح            1.��ʼ��              ح\n");
	printf("                        ح            2.��ӡ                ح\n");
	printf("                        ح            0.�˳�                ح\n");
	printf("                        ح----------------------------------ح\n");
	printf("                        ����������ѡ��:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:init();break;
		case 2:print();break;
		case 3:
			{
				printf("                        �˳�\n");
				menu();
			}
		default:
			printf("                        ��������ȷ��ѡ��:");
			scanf("%d",&choice);
	}
	
}
