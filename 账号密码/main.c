//2019.11.3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
void color(short x)	//�Զ��庯���ݲ����ı���ɫ
{
    if(x>=0 && x<=15)//������0-15�ķ�Χ��ɫ
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	//ֻ��һ���������ı�������ɫ
    else//Ĭ�ϵ���ɫ��ɫ
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}//������ɫ

int main()
{
	//��¼����
	int b=0;//bΪ����
	printf("�������û�����\n");
	FILE*p; //����һ���ļ�ָ��
     char ch;
	 int a;//aΪ���볤�ȣ�֮���ú���ȡ�á�
     char user[50]="1",pwd[]="1";
     scanf("%s.txt",&user);
	 char *firstName = user;
     char *lastName = ".txt";
     char *name = (char *) malloc(strlen(firstName) + strlen(lastName));
    sprintf(name, "%s%s", firstName, lastName);
    //printf("%s\n", name);
	while((b==0)&&((p=fopen(name,"r"))==NULL)){//�ж��˺ţ��ļ����Ƿ����
		printf("��⵽���ǵ�һ�δ򿪳����������������:\n");
		scanf("%s",&pwd);//����
		p=fopen(name,"w+");//��д�ķ�ʽ��
        a=strlen(pwd);//ȡ����
        //printf("%d\n",a);
        fwrite(pwd,strlen(pwd)+1,1,p);//д������ ������\0���ڣ�Ҫ+1
        fclose(p);//�ǵùر��ļ�
       //printf("%s\n",pwd);
        printf("���");
        color(15);printf("%d",a);
        color(7);printf("λ��������");
	    color(15);printf("%s",pwd);
	    color(7);printf("�ѳɹ������ˡ�\n");
	b=1;//��������ɹ����˳�������
	}

	    //printf("%d\n",a);
	    char ch1[]="0";
		printf("��⵽���Ѿ�ע�����������������룺\n");
		char string[50];
		char inpsd[50];

		p=fopen(name,"r+");//���ļ�
		fread(ch1,50,1,p);//���ļ�p���ݣ�����ch1
		fclose(p);
		//a=strlen(ch1);
		//printf("%s\n",ch1);
		scanf("%s",&inpsd);//��������
		//printf("%d\n",a);


		if(strcmp(ch1,inpsd)==0) {//�ж�ch1�����������Ƿ�һ��
		printf("���װ���");
		color(15);printf("%s",user);
	    color(7);printf(",��ϲ��ɹ���¼.\n");

			int i1=1,ran;
	//���㲿��
	while(1){//���1��Ϊ��ʹ����ѭ������
	 printf("��1����ô��");
	 color(15);printf("%s",user);
	 color(7);printf("���������м���B��?\n");
	 color(i1);
	int i,s=0,addn,choose2;

	scanf("%d",&addn);
	int x[20]={0};
		for(i=0;i<addn;i++)//�ӷ�����
		{
			printf("��%d����x[%d]=\n",i+1,i+1);
			scanf("%d",&x[i]);
			printf("��������%d\n",x[i]);
		}
	printf("��2����ѡ�������㷨?\n[1]�ӷ�,[2]�˷�\n");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:{
		for(i=0;i<addn;i++)
		{
			s=s+x[i];//�˷�
		}
		printf("�������������Ϊ��%d\n",s);
		}
		break;
		case 2:{
			s=1;
		for(i=0;i<addn;i++)
		{
			s=s*x[i];
		}
		printf("������������˻�Ϊ��%d\n",s);
		}

	}
	    color(i1);
		printf("POWER BY TITO\n");
		color(i1+1);
		srand(time(0));
		ran=rand()%6+2;//���ɡ�2.7����������
		printf("[���ξ������Ϊ%d]\n",ran-1);
		switch(ran-1){
		case 1:printf("PS.��ϲ�����Ǽž��ģ��·�����ʧ��һ����\n\nңԶ���ұ������·����Ѿ����ˡ�\n");break;
		case 2:printf("PS.����¥̨�շ���\n�δ��������ң\n������翷׷���\n���Ź��˵ĺþ�\n̾����·����תת\n��������δ��\n");break;
		case 3:printf("PS.���뿪�Ĳ������᲻�ظոպ�\n����������ͷ\n����һ�������ļ���\n");break;
		case 4:printf("PS.�ж�����Ϊ����ǰ�����Լ�������\n�ж�����Ϊ���������ڶ�ɱ����\n�ж�����Ϊ�˽������������ƭ\n���ж�������ƭֻΪ��ȡһ˿����\n�ж�����Ϊ������ȴ���ڱ��˵Ŀ���\n�ж����˻��ڿ���ֻΪ������һ��\n�ж�����Ϊ��һ����С�ĺ�Ϊ����\n�ж�����Ư����ҹ˼�����ѺͰ���\n�ж�����ָ�ֻ��ŵĸ����˽��ŵ���\n�ж����˽�������Լ�ȴ��������\n�ж��������ŵ���ȴ�����Լ����ֵ�\n�ж����˴�����ֵܱ�����������\n�ж����˸������Ǻ��ѵõ��ر�\n�ж�������Ծ�����������΢Ц\n�ж�����Ц���ڱ����з����\n�ж�����Ϊ�����������˱���������\n�ж�����Ϊ�˹���������������\n");break;
		case 5:printf("PS.�������࣬�����஡�\n�ȼ����ӣ��ƺ����ġ�\n�������죬����������\n�ȼ����ӣ��ƺ���񬡣\n������ޣ��������ѡ�\n�ȼ����ӣ��ƺ���ϲ��\n\n");break;
		case 6:printf("PS.�����𱿵�����\n\n");break;
		}

	    i1++;//����ɫ
	system("pause");
	system("cls");
	printf("���ǵ�[%d]������\n",i1);
			}//while


		}//if
	else{
		color(15);
	int ran;
		printf("�������ټ�����\n");
		color(2);
		printf("POWER BY TITO\n");
		color(3);
		srand(time(0));
		ran=rand()%6+2;
		printf("[���ξ������Ϊ%d]\n",ran-1);
		switch(ran-1){
		case 1:printf("PS.��ϲ�����Ǽž��ģ��·�����ʧ��һ����\n\nңԶ���ұ������·����Ѿ����ˡ�\n");break;
		case 2:printf("PS.����¥̨�շ���\n�δ��������ң\n������翷׷���\n���Ź��˵ĺþ�\n̾����·����תת\n��������δ��\n");break;
		case 3:printf("PS.���뿪�Ĳ������᲻�ظոպ�\n����������ͷ\n����һ�������ļ���\n");break;
		case 4:printf("PS.�ж�����Ϊ����ǰ�����Լ�������\n�ж�����Ϊ���������ڶ�ɱ����\n�ж�����Ϊ�˽������������ƭ\n���ж�������ƭֻΪ��ȡһ˿����\n�ж�����Ϊ������ȴ���ڱ��˵Ŀ���\n�ж����˻��ڿ���ֻΪ������һ��\n�ж�����Ϊ��һ����С�ĺ�Ϊ����\n�ж�����Ư����ҹ˼�����ѺͰ���\n�ж�����ָ�ֻ��ŵĸ����˽��ŵ���\n�ж����˽�������Լ�ȴ��������\n�ж��������ŵ���ȴ�����Լ����ֵ�\n�ж����˴�����ֵܱ�����������\n�ж����˸������Ǻ��ѵõ��ر�\n�ж�������Ծ�����������΢Ц\n�ж�����Ц���ڱ����з����\n�ж�����Ϊ�����������˱���������\n�ж�����Ϊ�˹���������������");break;
		case 5:printf("PS.�������࣬�����஡�\n�ȼ����ӣ��ƺ����ġ�\n�������죬����������\n�ȼ����ӣ��ƺ���񬡣\n������ޣ��������ѡ�\n�ȼ����ӣ��ƺ���ϲ��\n\n");break;
		case 6:printf("PS.�����𱿵�����\n\n");break;
		}
	system("pause");
	}


}
