/*************************************************
 * File name: 202001003073-210326.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.0
 * Date: 001-1.0-202103261011
 * Description: 本程序可使用迭代法求出任意正实数的二次方根。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>
#include <math.h>

void main ()
{
	//初始化及输入变量
	double a, temp1, temp2;
	cout << "请输入一个正实数：";
	cin >> a;
	
	//判断变量合法性
	if ( a > 0 )
	{
		temp1 = a;
		do  //迭代运算
		{
			temp2 = temp1;
			temp1 = 0.5 * ( temp2 + ( a / temp2 ));
		} while ( fabs( temp1 - temp2 ) >= 0.00001 );  //判断执行条件
		cout << "\n√a = " << temp1 << endl;
	}
	else
		cout << "\n输入变量不合法！\n";

}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
*************************************************/
