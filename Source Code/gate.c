#include<stdio.h>
#include"StuInfo.h"
extern int len;
void gate()
{
	
	
	stuinfo[len].sum = 0;
	printf("                        ���������������Ϣ:\n");
	printf("                        ������ѧ��:");
	scanf("%ld",&stuinfo[len].stuid);
	printf("                        ����������:");
	scanf("%s",stuinfo[len].name );
	printf("                        ��������ѧ�ɼ�:");
	scanf("%f",&stuinfo[len].MA); 
	printf("                        ������ѧ��Ӣ��ɼ�:");
	scanf("%f",&stuinfo[len].EN);
	printf("                        ������ѧ�����ĳɼ�:");
	scanf("%f",&stuinfo[len].CH);
	printf("                        ��ѧ�����ܳɼ�Ϊ:%6.1f\n",stuinfo[len].sum=stuinfo[len].MA+stuinfo[len].EN+stuinfo[len].CH);
	len++;
}
