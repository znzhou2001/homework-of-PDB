/*************************************************
 * File name: 202001003073-210423.cpp
 * Author: ������
 * Organization: ���ӿƼ���ѧ��ɽѧԺ������ϢѧԺ����20C��
 * Version: 1.0
 * Date: 001-1.0-202104232110
 * Description: ��������ж�һ���ַ����Ƿ�Ϊ���ġ�
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>
#include <string.h>

void main ()
{
	//��ʼ���������
	char str[100];
	int i, flag=0;

	//���鴦��
	cin.getline(str,strlen(str));
	for ( i=0; i<strlen(str)/2; i++ )
		if ( str[i] != str[strlen(str)-i-1] )
			flag++;

	//����ж�
	if ( flag )
		cout << "no\n";
	else 
		cout << "yes\n";
}

/*************************************************
������ʹ��MIT-LicenseЭ�顣��������Э������ƿ����ʹ�ñ�����
����Ǵ�𲿷ֻ�ȫ��ֱ�ӳ�Ϯ����Դ������ɿγ���ҵ����Ϊ���ɴ���ɵĺ���������޹ء�
������ϵ��ʽ��i@znzhou.top��
*************************************************/