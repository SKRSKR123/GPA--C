#include<stdio.h>
#include"StuInfo.h"
void insert();
void print();
void menu();
void init();
void gate();
extern int len;
extern int stusum;
void insert()
{
	int choice,insertsite,i;
	//struct student insertinfo;
	//newsum=stusum+addstusum;
	//insertinfo=gate();
	printf("                        ������Ҫ��ӵ�λ��:[1---%d]:",len);
	scanf("%d",&insertsite);
	gate();
	/*for(len=stusum;len<newsum;len++)
	{
		printf("                        ������Ҫ���ѧ����ѧ�ţ�");
		scanf("%ld",&stuinfo[len].stuid);
		printf("                        ������Ҫ���ѧ����������");
		scanf("%s",stuinfo[len].name);
		printf("                        ������Ҫ���ѧ������ѧ�ɼ���");
		scanf("%f",&stuinfo[len].MA);
		printf("                        ������Ҫ���ѧ�������ĳɼ���");
		scanf("%f",&stuinfo[len].CH);
		printf("                        ������Ҫ���ѧ����Ӣ��ɼ���");
		scanf("%f",&stuinfo[len].EN);
		stuinfo[len].sum=stuinfo[len].MA+stuinfo[len].CH+stuinfo[len].EN;
		printf("                        Ҫ���ѧ�����ܳɼ�Ϊ��%0.1f\n",stuinfo[len].sum);
	}
	stusum=newsum;*/
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
