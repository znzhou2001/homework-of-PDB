/*************************************************
 * File name: 202001003073-210417.cpp
 * Author: ������
 * Organization: ���ӿƼ���ѧ��ɽѧԺ������ϢѧԺ����20C��
 * Version: 1.0
 * Date: 001-1.0-202104171000
 * Description: ������ɹ���e��ֵ��
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//��ʼ���������
	int n;
	double e=1, fact=1;

	//�ۼ�ѭ��
	for(n=1; n<=100; n++)
	{
		fact *= n;
		e += 1/fact;
		if (1/fact < 1E-6)
			break;
	}
	cout << "e = " << e << endl;
}

/*************************************************
������ʹ��MIT-LicenseЭ�顣��������Э������ƿ����ʹ�ñ�����
����Ǵ�𲿷ֻ�ȫ��ֱ�ӳ�Ϯ����Դ������ɿγ���ҵ����Ϊ���ɴ���ɵĺ���������޹ء�
������ϵ��ʽ��i@znzhou.top��
*************************************************/
