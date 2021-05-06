/*************************************************
 * File name: 202001003073-210502.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.0
 * Date: 001-1.0-202105041728
 * Description: 本程序可判断从m个球中取出n个球有多少种取法。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

int factorial (int);

void main ()
{
	//初始化定义变量
	int m, n;
	do{
		cout << "Please input m: ";
		cin >> m;
		cout << "Please input n: ";
		cin >> n;
	}while(!(m>0&&n>0));

	//输出
	cout << factorial(m)/(factorial(n)*factorial(m-n)) << " result(s) totally.\n";
}

int factorial (int x)
{
	int i, sum = 1;
	for(i=1; i<=x; i++)
        {
            sum *= i;
        }
	return sum;
}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
*************************************************/