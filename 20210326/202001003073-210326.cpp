/*************************************************
 * File name: 202001003073-210326.cpp
 * Author: ������
 * Organization: ���ӿƼ���ѧ��ɽѧԺ������ϢѧԺ����20C��
 * Version: 1.0
 * Date: 001-1.0-202103261011
 * Description: �������ʹ�õ��������������ʵ���Ķ��η�����
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>
#include <math.h>

void main ()
{
	//��ʼ�����������
	double a, temp1, temp2;
	cout << "������һ����ʵ����";
	cin >> a;
	
	//�жϱ����Ϸ���
	if ( a > 0 )
	{
		temp1 = a;
		do  //��������
		{
			temp2 = temp1;
			temp1 = 0.5 * ( temp2 + ( a / temp2 ));
		} while ( fabs( temp1 - temp2 ) >= 0.00001 );  //�ж�ִ������
		cout << "\n��a = " << temp1 << endl;
	}
	else
		cout << "\n����������Ϸ���\n";

}

/*************************************************
������ʹ��MIT-LicenseЭ�顣��������Э������ƿ����ʹ�ñ�����
����Ǵ�𲿷ֻ�ȫ��ֱ�ӳ�Ϯ����Դ������ɿγ���ҵ����Ϊ���ɴ���ɵĺ���������޹ء�
������ϵ��ʽ��i@znzhou.top��
*************************************************/
