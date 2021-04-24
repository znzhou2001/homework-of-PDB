/*************************************************
 * File name: 202001003073-210423.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.0
 * Date: 001-1.0-202104232110
 * Description: 本程序可判断一个字符串是否为回文。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>
#include <string.h>

void main ()
{
	//初始化定义变量
	char str[100];
	int i, flag=0;

	//数组处理
	cin.getline(str,strlen(str));
	for ( i=0; i<strlen(str)/2; i++ )
		if ( str[i] != str[strlen(str)-i-1] )
			flag++;

	//结果判断
	if ( flag )
		cout << "no\n";
	else 
		cout << "yes\n";
}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
	if ( !flag )
		cout << "yes\n";
	else
		cout << "no\n";
*************************************************/