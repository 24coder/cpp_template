//#include<iostream>
//#include<string>
//using namespace std;
//
//
////模版的局限性
////模版不是万能的，有些特定数据类型，需要具体化方式进行特殊实现
//
//
////对比两个数据是否想的函数
//template<class T>
//bool  mycompare(T &a, T &b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//
//}
//
//class person
//{
//public:
//
//	person(string a, int b)
//	{
//		(*this).name = a;
//		(*this).year = b;
//
//	}
//
//
//public:
//	string name;
//	int year;
//
//};
//
//
////解决的问题是两个特殊类型的数据进行调用模版的时候怎么解决
////1，重载运算符
////2，使用下面函数模版的具体化版本
////下面是bool  mycompare的具体化版本  这个版本匹配更好的话就会优先调用此具体化版本 
//
////下面这段代码解决的问题是  如果传入的参数为erson类型的话，调用mycompare函数就会使用下面的代码
//template<> bool mycompare(person &a,person &b)  
//{
//	if (a.name==b.name&&a.year==b.year)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//
//}
//
//
//
//
//
//
//void  main3()
//{
//	int a = 10;
//	int b = 20;
//	person p1("tom", 19);
//	person p2("tom", 19);
//	bool ret = mycompare(p1, p2);
//	if (ret)
//	{
//		cout << "两个人是一样的" << endl;
//
//	}
//	else
//	{
//		cout << "两个人不一样" << endl;
//	
//	}
//	system("pause");
//	return;
//
//}