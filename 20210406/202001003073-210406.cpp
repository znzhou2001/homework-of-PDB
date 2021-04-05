/*************************************************
 * File name: 202001003073-210406.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.0
 * Date: 001-1.0-202104051135
 * Description: 本程序可找出1000以内能被3整除、不能被5整除、能被7整除、不能被11整除的所有数并输出。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//初始化定义变量
	int i, tab = 1;

	//循环体
	for ( i = 1; i <= 1000; i++ )
		if ( i%3==0 && i%5!=0 && i%7==0 && i%11!=0 )
		{
			if ( tab % 10 != 0 )
				cout << i << "\t";
			else
				cout << i << "\n";
			tab++;
		}
		cout << endl;
}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
*************************************************/
