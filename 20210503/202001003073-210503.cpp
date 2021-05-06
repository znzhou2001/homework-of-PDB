/*************************************************
 * File name: 202001003073-210503.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.0
 * Date: 001-1.0-202105050106
 * Description: 本程序可求100以内自然数中的素数和。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>
#include <string.h>

bool prime (int);

void main ()
{
	//初始化定义变量
	int ori, i, count=0;

	//输出
	for (i=2; i<=100; i++)
	{
		if (prime(i))
			count++;
	}

	cout << "There are " << count <<" primes in 2 to 100.\n"; 
}

bool prime (int x)
{
	int i, sum = 1;
	bool result = true;
	for (i=2; i<=x/2; i++)
		if (!(x%i))
		{
			result = false;
			break;
		}
	return result;
}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
*************************************************/