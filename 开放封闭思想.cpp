#include<iostream>
#include<string>
#include<array>
using namespace std;
//开放封闭思想
class person
{
public:
	mutable int x;               //mutable可以打开这个通道，后面即使会遇到const  这个变量也会处于可以更改的状态
	int y;

public:
	void  manager(int x)const   //在这个函数名字之后记上const 将x的值变为只读状态
	{
		this->x = x;            //箭头和星号两种访问元素的方式
	}
};



//函数模版的实现

class B
{
public:
	B()
	{
		cout << "default constructor" << " " << endl;
	}
	~B()
	{
		cout << "destructed" << " " << endl;
	}
	B(int i) : data(i)//有参构造  并且被一个int类型数字进行构造
	{
		cout << "constructed by parameter" << data << " " << endl;
	}
private: int data;
};
B Play(B b)
{
	return b;
}




void  main55()
{



		
	/*
	int w = 3;
	int *pa = &w;
	cout << pa << endl;
	array<string, 5>you = { "fjei","efawef","fjeiofj","feaefawef","fiofj" };
	cout << sizeof(you) << endl;
	cout << you.size() << endl;
	for (int i = 0; i < you.size(); i++)
	{
		const char* p = you[i].c_str();
		cout << "使用p的cout打印指针指向的元素为：：：" << p << endl;
		printf("使用p打印数组元ssssssssssssssssss素地址：%p\n",p);
		cout << "数组元素地址" << &you[i] << endl;
		cout << endl;
	}
	B temp = Play(5);

	char *string_a = (char *)malloc(100 * sizeof(char));
	char string_b[100];
	string av = "difhasoi";
	cout << sizeof(av) << endl;
	cout << sizeof(string_a) << endl;
	cout << sizeof(string_b) << endl;
	int a[6] = { 0 };
	string b[2] = { "f","fjeoaijf" };
	cout << b[0] << endl;
	cout << b[1] << endl;
	int x = 13;
	person wangle;
	wangle.manager(x);
	cout << "wangle的年龄为： " << wangle.x << endl;
	system("pause");
	return;*/

}
