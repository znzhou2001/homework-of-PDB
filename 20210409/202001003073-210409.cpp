/*************************************************
 * File name: 202001003073-210409.cpp
 * Author: ������
 * Organization: ���ӿƼ���ѧ��ɽѧԺ������ϢѧԺ����20C��
 * Version: 1.0
 * Date: 001-1.0-202104092226
 * Description: ������ɼ�����˵�Ӧ��˰�
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//��ʼ���������
	double sal, tax;

	cout << "�������¶�˰ǰ���룺";
	cin  >> sal;

	//else-if�ṹ��
	if ( sal>0 && sal<=1500 )
		tax = sal * 0.03;
	else if ( sal>1500 && sal<=4500 )
		tax = sal * 0.10 - 105;
	else if ( sal>4500 && sal<=9000 )
		tax = sal * 0.20 - 555;
	else if ( sal>9000 && sal<=35000 )
		tax = sal * 0.25 - 1005;
	else if ( sal>35000 && sal<=55000 )
		tax = sal * 0.30 - 2755;
	else if ( sal>50000 && sal<=80000 )
		tax = sal * 0.35 - 5505;
	else if ( sal>80000 )
		tax = sal * 0.45 - 13505;
	else
	{
		cout << "������Ч��\n";
		return;
	}
	cout << "else-if�ṹ����Ӧ��˰�" << tax << endl;

	//switch �ṹ��
	//��ɱ�� ���ֶ�����switch������ĥ�˵���
	switch (1*(sal>0&&sal<=1500) + 2*(sal>1500&&sal<=4500) + 3*(sal>4500&&sal<=9000) + 4*(sal>9000&&sal<=35000) + 5*(sal>35000&&sal<=55000) + 6*(sal>50000&&sal<=80000) + 7*(sal>80000))
	//С���� ���Ƿ��кܶ��ʺ�.jpg
	{
		case 1:
			tax = sal * 0.03;
			break;
		case 2:
			tax = sal * 0.10 - 105;
			break;
		case 3:
			tax = sal * 0.20 - 555;
			break;
		case 4:
			tax = sal * 0.25 - 1005;
			break;
		case 5:
			tax = sal * 0.30 - 2755;
			break;
		case 6:
			tax = sal * 0.35 - 5505;
			break;
		case 7:
			tax = sal * 0.45 - 13505;
			break;
		default:
			cout << "������Ч��\n";
			return;
	}
	cout << "switch �ṹ����Ӧ��˰�" << tax << endl;
}

/*************************************************
������ʹ��MIT-LicenseЭ�顣��������Э������ƿ����ʹ�ñ�����
����Ǵ�𲿷ֻ�ȫ��ֱ�ӳ�Ϯ����Դ������ɿγ���ҵ����Ϊ���ɴ���ɵĺ���������޹ء�
������ϵ��ʽ��i@znzhou.top��
*************************************************/
