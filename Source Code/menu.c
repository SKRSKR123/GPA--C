#include<stdio.h>
#include<stdlib.h>
void init();
void windows();
void insert();
extern int stusum;
extern int addstunum;
void menu()
{
	int choice;
	while(1)
	{
		printf("                        ----------------------\n");
		printf("                       |1.��ʼ��              |\n");
		printf("                       |2.���ѧ���ɼ�        |\n");
		printf("                       |3.ɾ��ѧ���ɼ�        |\n");
		printf("                       |4.��������ѯѧ���ɼ�  |\n");
		printf("                       |5.��ѧ�Ų�ѯѧ���ɼ�  |\n");
		printf("                       |6.�޸�ѧ����Ϣ        |\n");
		printf("                       |7.���ܷ�����          |\n");
		printf("                       |0.����                |\n");
		printf("                        ----------------------\n");
		printf("                        ��ѡ��Ҫ�鿴����:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("                        1.��ʼ��\n");
					init();
					printf("\n");
					break;
				}
			case 2:
				{
					printf("                        2.���ѧ���ɼ�\n");
					insert();
					break;
				}
			case 3:
				{
					printf("                        3.ɾ��ѧ���ɼ�\n");
					break;
				}
			case 4:
				{
					printf("                        4.��������ѯѧ���ɼ�\n");
					break;
				}
			case 5:
				{
					printf("                        5.��ѧ�Ų�ѯѧ���ɼ�\n");
					break;
				}
			case 6:
				printf("                        6.�޸�ѧ����Ϣ\n");
				break;
			case 7:
				{
					printf("                        7.���ܷ�����\n");
					break;
				}
			case 0:
				{
					printf("                        0.�˳�\n");
					break;
				}
			default:
				printf("                       ��������ȷѡ��!!!!\n");
		}
		if(choice==0)
		{
			windows();
		}
	}
}