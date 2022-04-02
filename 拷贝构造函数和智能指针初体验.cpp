//#include<iostream>
//#include<string>
//#include<memory>
//using namespace std;
//
//class man
//{
//public:
//	man()
//	{
//
//
//	};
//	man(man &a)
//	{
//		this->age = a.age+1;
//	}
//	man(int a)
//	{
//		this->age = a;
//
//	};
//
//
//	~man()
//	{
//		cout << "执行了析构函数" << endl;
//
//
//	};
//
//public:
//	int age;
//
//};
//int main3()
//{
//
//	man xiaoming(23);
//	
//	man xiaohua(xiaoming);//拷贝构造函数（复制构造函数），这个和赋值构造函数一样，如果自己没有写的话，编译器也会自动创建一个。
//	                      //并且自己如果写了的话，编译器会优先使用自定义的函数。
//	man xia = xiaoming;  //这个赋值构造函数（就是重载等号运算符）如果自己没有写的话，编译器会自动生成一个。
//
//	cout << "xiaoming的年龄为" << xiaoming.age << endl;
//	cout << "xia的年龄为" << xia.age << endl;
//	man *p = new(man);
//	delete p;//这一行是执行了删除了开辟在堆上的内存，这样就会执行析构函数。
//
//			 //创建智能指针
//
//	unique_ptr<man>pr(new man);  //这个创建的一个智能指针，用来自动进行内存的管理，当pr的生命周期结束的时候，这个创建在堆上的man对象也就自动进行删除了。
//	pr->age = 10;
//	cout << "pr的年龄为" << pr->age << endl;
//	system("pause");
//	return 0;
//
//
//}