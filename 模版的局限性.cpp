//#include<iostream>
//#include<string>
//using namespace std;
//
//
////ģ��ľ�����
////ģ�治�����ܵģ���Щ�ض��������ͣ���Ҫ���廯��ʽ��������ʵ��
//
//
////�Ա����������Ƿ���ĺ���
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
////����������������������͵����ݽ��е���ģ���ʱ����ô���
////1�����������
////2��ʹ�����溯��ģ��ľ��廯�汾
////������bool  mycompare�ľ��廯�汾  ����汾ƥ����õĻ��ͻ����ȵ��ô˾��廯�汾 
//
////������δ�������������  �������Ĳ���Ϊerson���͵Ļ�������mycompare�����ͻ�ʹ������Ĵ���
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
//		cout << "��������һ����" << endl;
//
//	}
//	else
//	{
//		cout << "�����˲�һ��" << endl;
//	
//	}
//	system("pause");
//	return;
//
//}