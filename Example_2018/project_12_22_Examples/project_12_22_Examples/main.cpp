#include<iostream>
using namespace std;

#include"Example01_bytes.h"
int main()
{
	cout << "Hello, This is Project_12_22 Examples" << endl;

	//int x = 12345;		//十六进制表示：0x00003039
	//show_int(x);			//0x39  0x30  0x00  0x00  小端机器(反序输出)
	//show_float(float(x));	//0x00  0xe4  0x40  0x46
	//show_pointer(&x);		//0x50  0xf9  0x5f  0x00  值不确定，二级地址

	//float a[3] = { 1.0, 2.0, 3.0 };
	//sum_elements(a, 0);			//程序中断，报错

	//前置和
	float a[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	float p[5] = { 0.0, 0.0, 0.0, 0.0, 0.0 };
	psum1(a, p, 5);
	cout <<"a = "<< a  <<"p = " << p <<" *p"<< *p<< endl;
	for (int i = 0; i < 5; i++){
		cout << "i1 = " << i << " *p1 = " << p[i] << endl;
	}
	psum2(a, p, 5);
	cout << "a = " << a << "p2 = " << p << " *p2" << *p << endl;
	for (int i = 0; i < 5; i++){
		cout << "i2 = " << i << " *p2 = " << p[i] << endl;
	}
	return 0;
}