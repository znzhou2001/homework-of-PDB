/*************************************************
 * File name: 202001003073-210405.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.0
 * Date: 001-1.0-202104051119
 * Description: 本程序可找出2000年-3000年间的所有闰年。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//初始化定义变量
	int year = 2000;

	//循环体
	while ( year <= 3000 )
	{
		//闰年判断条件
		if ( year%4==0 && year%100!=0 || year%400==0 )
			cout << year << endl;
		year++;
	}
}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
*************************************************/
