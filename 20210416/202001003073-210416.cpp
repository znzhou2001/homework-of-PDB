/*************************************************
 * File name: 202001003073-210416.cpp
 * Author: ������
 * Organization: ���ӿƼ���ѧ��ɽѧԺ������ϢѧԺ����20C��
 * Version: 1.0
 * Date: 001-1.0-202104170028
 * Description: �������ʹ��˫��ѭ���ṹ���Ƽȶ�ͼ�Ρ�
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//��ʼ���������
	int col, spa, ast;

	//�����
	for(col=0; col<=9; col++)
	{
		//��ǰ�����
		for(spa=0; spa<9-col; spa++)
			cout << " ";
		//�к�����
		for(ast=0; ast<col; ast++)
			cout << "*";
		cout << "\n";
	}
}

/*************************************************
������ʹ��MIT-LicenseЭ�顣��������Э������ƿ����ʹ�ñ�����
����Ǵ�𲿷ֻ�ȫ��ֱ�ӳ�Ϯ����Դ������ɿγ���ҵ����Ϊ���ɴ���ɵĺ���������޹ء�
������ϵ��ʽ��i@znzhou.top��
*************************************************/
