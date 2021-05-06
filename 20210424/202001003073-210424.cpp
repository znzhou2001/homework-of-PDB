/*************************************************
 * File name: 202001003073-210424.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.0
 * Date: 001-1.0-202104232343
 * Description: 本程序可找出一个整型数组每一行的最小值。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//初始化定义变量
	int mat[3][4] = {12,3,4,67,8,23,61,19,13,78,5,1};
	int min;
	int row, col;
	
	//输出原数组
	cout << "Origin array:\n";
	for ( row=0; row<3; row++ )
	{
		for ( col=0; col<4; col++ )
			cout << mat[row][col] << "\t";
		cout << endl;
	}
	cout << endl;
	
	//查找最小值
	cout << "Mins are: ";
	for ( row=0; row<3; row++ )
	{
		for ( col=0,min=mat[row][col]; col<4; col++ )
			if ( mat[row][col] < min )
				min = mat[row][col];
		cout << min << "\40";
	}
	cout << endl;
}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
*************************************************/
