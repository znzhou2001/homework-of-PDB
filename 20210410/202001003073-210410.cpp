/*************************************************
 * File name: 202001003073-210410.cpp
 * Author: 周孜宁
 * Organization: 电子科技大学中山学院电子信息学院电子20C班
 * Version: 1.0
 * Date: 001-1.0-202104102242
 * Description: 本程序可计算100m高落下的球在第10次落地时共经过的路程和反弹的高度。
 * License: MIT-License
 * Website: https://znzhou.top/
 * Repository: https://github.com/znzhou2001/homework-of-PDB/
*************************************************/

#include <iostream.h>

void main ()
{
	//初始化定义变量
	double sum = 0, hit = 100;
	int i;

	//十分简洁 无需注释 一读就懂
	for ( i=1; i<=10; i++)
	{
		sum += hit;
		hit /= 2;
	}
	cout << "经过路程：" << sum << endl;
	cout << "反弹高度：" << hit << endl;
}

/*************************************************
本程序使用MIT-License协议。您可以在协议的限制框架内使用本程序。
作者谴责部分或全部直接抄袭程序源码以完成课程作业的行为。由此造成的后果与作者无关。
作者联系方式：i@znzhou.top。
*************************************************/
