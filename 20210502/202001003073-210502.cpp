/*************************************************
 * File name: 202001003073-210502.cpp
 * Author: ������
 * Organization: ���ӿƼ���ѧ��ɽѧԺ������ϢѧԺ����20C��
 * Version: 1.0
 * Date: 001-1.0-202105041728
 * Description: ��������жϴ�m������ȡ��n�����ж�����ȡ����
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

int factorial (int);

void main ()
{
	//��ʼ���������
	int m, n;
	do{
		cout << "Please input m: ";
		cin >> m;
		cout << "Please input n: ";
		cin >> n;
	}while(!(m>0&&n>0));

	//���
	cout << factorial(m)/(factorial(n)*factorial(m-n)) << " result(s) totally.\n";
}

int factorial (int x)
{
	int i, sum = 1;
	for(i=1; i<=x; i++)
        {
            sum *= i;
        }
	return sum;
}

/*************************************************
������ʹ��MIT-LicenseЭ�顣��������Э������ƿ����ʹ�ñ�����
����Ǵ�𲿷ֻ�ȫ��ֱ�ӳ�Ϯ����Դ������ɿγ���ҵ����Ϊ���ɴ���ɵĺ���������޹ء�
������ϵ��ʽ��i@znzhou.top��
*************************************************/