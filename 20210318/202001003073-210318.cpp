/*************************************************
 * File name: 202001003073-210318.cpp
 * Author: ������
 * Organization: ���ӿƼ���ѧ��ɽѧԺ������ϢѧԺ����20C��
 * Version: 1.1
 * Date: 001-1.0-202103182357
         002-1.1-202103191206
 * Description: �������ͨ������3����������ʵ���ҳ���С���ֵĹ��ܡ�
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//��ʼ�����������
	int a, b, c;
	cout << "Please input 3 numbers: ";
	cin >> a >> b >> c;
	
	//�жϼ�����
	if ( a > b )
		a ^= b ^= a ^= b;
	if ( a > c )
		a ^= c ^= a ^= c;

	//���
	cout << "\nThe minimum number is: " << a << endl << endl;
}

/*************************************************
������ʹ��MIT-LicenseЭ�顣��������Э������ƿ����ʹ�ñ�����
����Ǵ�𲿷ֻ�ȫ��ֱ�ӳ�Ϯ����Դ������ɿγ���ҵ����Ϊ���ɴ���ɵĺ���������޹ء�
������ϵ��ʽ��i@znzhou.top��
*************************************************/
