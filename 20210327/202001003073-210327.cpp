/*************************************************
 * File name: 202001003073-210327.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.0
 * Date: 001-1.0-202103261039
 * Description: 本程序可循环输入5个字母字符，并进行移位加密。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//初始化定义变量
	char cha;
	int offset = 2, i = 1;

	//循环体
	while ( i <= 1000 )
	{
		cout << "请输入第" << i << "个字母字符：";
		cin >> cha;

		//判断输入数据合法性
		if ( cha<65 || ( cha>90 && cha <97 ) || cha>122 )
			cout << "\n输入数据不合法！请输入一个字母字符。\n";
		else
		{
			if ( cha <= ( 90 - offset ))  //如果是大写字母
				cha = cha + offset;

			else if ( cha <= 90 && cha > ( 90 - offset )) //如果大写字母超过ASCII范围
				cha = cha + offset - 26;

			else if ( cha <= ( 122 - offset ))  //如果是小写字母
				cha = cha + offset;

			else if ( cha <= 122 && cha > ( 122 - offset )) //如果小写字母超过ASCII范围
				cha = cha + offset - 26;

			else
				cout << "\n输入数据不合法！\n";

			cout << "移位密码是：" << cha << endl << endl;
		}
		i++;
	}
}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
*************************************************/
