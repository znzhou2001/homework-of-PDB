/*************************************************
 * File name: 202001003073-210417.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.0
 * Date: 001-1.0-202104171000
 * Description: 本程序可估算e的值。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//初始化定义变量
	int n;
	double e=1, fact=1;

	//累加循环
	for(n=1; n<=100; n++)
	{
		fact *= n;
		e += 1/fact;
		if (1/fact < 1E-6)
			break;
	}
	cout << "e = " << e << endl;
}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
*************************************************/
