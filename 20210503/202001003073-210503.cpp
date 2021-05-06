/*************************************************
 * File name: 202001003073-210503.cpp
 * Author: ������
 * Organization: ���ӿƼ���ѧ��ɽѧԺ������ϢѧԺ����20C��
 * Version: 1.0
 * Date: 001-1.0-202105050106
 * Description: ���������100������Ȼ���е������͡�
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>
#include <string.h>

bool prime (int);

void main ()
{
	//��ʼ���������
	int ori, i, count=0;

	//���
	for (i=2; i<=100; i++)
	{
		if (prime(i))
			count++;
	}

	cout << "There are " << count <<" primes in 2 to 100.\n"; 
}

bool prime (int x)
{
	int i, sum = 1;
	bool result = true;
	for (i=2; i<=x/2; i++)
		if (!(x%i))
		{
			result = false;
			break;
		}
	return result;
}

/*************************************************
������ʹ��MIT-LicenseЭ�顣��������Э������ƿ����ʹ�ñ�����
����Ǵ�𲿷ֻ�ȫ��ֱ�ӳ�Ϯ����Դ������ɿγ���ҵ����Ϊ���ɴ���ɵĺ���������޹ء�
������ϵ��ʽ��i@znzhou.top��
*************************************************/