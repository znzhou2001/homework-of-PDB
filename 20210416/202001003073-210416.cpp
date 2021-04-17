/*************************************************
 * File name: 202001003073-210416.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.0
 * Date: 001-1.0-202104170028
 * Description: 本程序可使用双重循环结构绘制既定图形。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//初始化定义变量
	int col, spa, ast;

	//列输出
	for(col=0; col<=9; col++)
	{
		//行前段输出
		for(spa=0; spa<9-col; spa++)
			cout << " ";
		//行后段输出
		for(ast=0; ast<col; ast++)
			cout << "*";
		cout << "\n";
	}
}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
*************************************************/
