/*************************************************
 * File name: 202001003073-210327.cpp
 * Author: ������
 * Organization: ���ӿƼ���ѧ��ɽѧԺ������ϢѧԺ����20C��
 * Version: 1.0
 * Date: 001-1.0-202103261039
 * Description: �������ѭ������5����ĸ�ַ�����������λ���ܡ�
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//��ʼ���������
	char cha;
	int offset = 2, i = 1;

	//ѭ����
	while ( i <= 1000 )
	{
		cout << "�������" << i << "����ĸ�ַ���";
		cin >> cha;

		//�ж��������ݺϷ���
		if ( cha<65 || ( cha>90 && cha <97 ) || cha>122 )
			cout << "\n�������ݲ��Ϸ���������һ����ĸ�ַ���\n";
		else
		{
			if ( cha <= ( 90 - offset ))  //����Ǵ�д��ĸ
				cha = cha + offset;

			else if ( cha <= 90 && cha > ( 90 - offset )) //�����д��ĸ����ASCII��Χ
				cha = cha + offset - 26;

			else if ( cha <= ( 122 - offset ))  //�����Сд��ĸ
				cha = cha + offset;

			else if ( cha <= 122 && cha > ( 122 - offset )) //���Сд��ĸ����ASCII��Χ
				cha = cha + offset - 26;

			else
				cout << "\n�������ݲ��Ϸ���\n";

			cout << "��λ�����ǣ�" << cha << endl << endl;
		}
		i++;
	}
}

/*************************************************
������ʹ��MIT-LicenseЭ�顣��������Э������ƿ����ʹ�ñ�����
����Ǵ�𲿷ֻ�ȫ��ֱ�ӳ�Ϯ����Դ������ɿγ���ҵ����Ϊ���ɴ���ɵĺ���������޹ء�
������ϵ��ʽ��i@znzhou.top��
*************************************************/
