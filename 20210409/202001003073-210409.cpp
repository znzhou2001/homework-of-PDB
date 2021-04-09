/*************************************************
 * File name: 202001003073-210409.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.0
 * Date: 001-1.0-202104092226
 * Description: 本程序可计算打工人的应纳税额。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//初始化定义变量
	double sal, tax;

	cout << "请输入月度税前收入：";
	cin  >> sal;

	//else-if结构体
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
		cout << "参数无效！\n";
		return;
	}
	cout << "else-if结构计算应缴税额：" << tax << endl;

	//switch 结构体
	//天杀的 这种东西用switch不是折磨人的吗
	switch (1*(sal>0&&sal<=1500) + 2*(sal>1500&&sal<=4500) + 3*(sal>4500&&sal<=9000) + 4*(sal>9000&&sal<=35000) + 5*(sal>35000&&sal<=55000) + 6*(sal>50000&&sal<=80000) + 7*(sal>80000))
	//小朋友 你是否有很多问号.jpg
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
			cout << "参数无效！\n";
			return;
	}
	cout << "switch 结构计算应缴税额：" << tax << endl;
}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
*************************************************/
