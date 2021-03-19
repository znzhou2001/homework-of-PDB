/*************************************************
 * File name: 202001003073-210318.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.1
 * Date: 001-1.0-202103182357
         002-1.1-202103191206
 * Description: 本程序可通过输入3个整形量，实现找出最小数字的功能。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//初始化及输入变量
	int a, b, c;
	cout << "Please input 3 numbers: ";
	cin >> a >> b >> c;
	
	//判断及排序
	if ( a > b )
		a ^= b ^= a ^= b;
	if ( a > c )
		a ^= c ^= a ^= c;

	//输出
	cout << "\nThe minimum number is: " << a << endl << endl;
}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
*************************************************/
