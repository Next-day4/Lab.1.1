#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define Name "�����"
#define Surname "����������"
#define GroupName "��-22"
#define Faculty "���"
#define University "�ϲ"

char Input_Name[120];
char Input_Surname[120];

int grade1;
int grade2;
int grade3;
int grade4;
int grade5;

double AVGmark;

int main()
{
 SetConsoleOutputCP(1251);
 SetConsoleCP(1251);

 system("color 5");

 printf("%s %s �ϲ ��� ��-22", Name, Surname);

 while(1 == 1)
{
 printf("\n ������: ��'�,�������,grade1,grade2,grade3,grade4,grade5:");

 scanf("%s %s %d %d %d %d %d",&Input_Name,&Input_Surname,&grade1,&grade2,&grade3,&grade4,&grade5);

 AVGmark = (double)(grade1+grade2+grade3+grade4+grade5)/5;

 printf("%s %s AVG:%lf",Input_Name,Input_Surname,AVGmark);}

  return 0;
}

