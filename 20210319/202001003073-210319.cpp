/*************************************************
 * File name: 202001003073-210319.cpp
 * Author: ������
 * Organization: ���ӿƼ���ѧ��ɽѧԺ������ϢѧԺ����20C��
 * Version: 1.0
 * Date: 001-1.0-202103191211
 * Description: �������ѭ������5��ѧ���ɼ����ж����Ƿ�ϸ�
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//��ʼ���������
	int score = 0, i = 1;
	
	//ѭ����
	while ( i <= 5 )
	{
		cout << "Please input student " << i << " score: ";
		cin >> score;
		
		//�жϼ����
		if ( score >= 60 )
			cout << "Qualified!\n\n";
		else
			cout << "Unqualified!\n\n";
		i++;
	}
}

/*************************************************
������ʹ��MIT-LicenseЭ�顣��������Э������ƿ����ʹ�ñ�����
����Ǵ�𲿷ֻ�ȫ��ֱ�ӳ�Ϯ����Դ������ɿγ���ҵ����Ϊ���ɴ���ɵĺ���������޹ء�
������ϵ��ʽ��i@znzhou.top��
*************************************************/
