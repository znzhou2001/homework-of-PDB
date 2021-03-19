/*************************************************
 * File name: 202001003073-210319.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.0
 * Date: 001-1.0-202103191211
 * Description: 本程序可循环输入5个学生成绩，判断其是否合格。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//初始化定义变量
	int score = 0, i = 1;
	
	//循环体
	while ( i <= 5 )
	{
		cout << "Please input student " << i << " score: ";
		cin >> score;
		
		//判断及输出
		if ( score >= 60 )
			cout << "Qualified!\n\n";
		else
			cout << "Unqualified!\n\n";
		i++;
	}
}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
*************************************************/
