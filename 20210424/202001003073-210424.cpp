/*************************************************
 * File name: 202001003073-210424.cpp
 * Author: ������
 * Organization: ���ӿƼ���ѧ��ɽѧԺ������ϢѧԺ����20C��
 * Version: 1.0
 * Date: 001-1.0-202104232343
 * Description: ��������ҳ�һ����������ÿһ�е���Сֵ��
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//��ʼ���������
	int mat[3][4] = {12,3,4,67,8,23,61,19,13,78,5,1};
	int min;
	int row, col;
	
	//���ԭ����
	cout << "Origin array:\n";
	for ( row=0; row<3; row++ )
	{
		for ( col=0; col<4; col++ )
			cout << mat[row][col] << "\t";
		cout << endl;
	}
	cout << endl;
	
	//������Сֵ
	cout << "Mins are: ";
	for ( row=0; row<3; row++ )
	{
		for ( col=0,min=mat[row][col]; col<4; col++ )
			if ( mat[row][col] < min )
				min = mat[row][col];
		cout << min << "\40";
	}
	cout << endl;
}

/*************************************************
������ʹ��MIT-LicenseЭ�顣��������Э������ƿ����ʹ�ñ�����
����Ǵ�𲿷ֻ�ȫ��ֱ�ӳ�Ϯ����Դ������ɿγ���ҵ����Ϊ���ɴ���ɵĺ���������޹ء�
������ϵ��ʽ��i@znzhou.top��
*************************************************/
