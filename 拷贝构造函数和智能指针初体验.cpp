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
//		cout << "ִ������������" << endl;
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
//	man xiaohua(xiaoming);//�������캯�������ƹ��캯����������͸�ֵ���캯��һ��������Լ�û��д�Ļ���������Ҳ���Զ�����һ����
//	                      //�����Լ����д�˵Ļ���������������ʹ���Զ���ĺ�����
//	man xia = xiaoming;  //�����ֵ���캯�����������صȺ������������Լ�û��д�Ļ������������Զ�����һ����
//
//	cout << "xiaoming������Ϊ" << xiaoming.age << endl;
//	cout << "xia������Ϊ" << xia.age << endl;
//	man *p = new(man);
//	delete p;//��һ����ִ����ɾ���˿����ڶ��ϵ��ڴ棬�����ͻ�ִ������������
//
//			 //��������ָ��
//
//	unique_ptr<man>pr(new man);  //���������һ������ָ�룬�����Զ������ڴ�Ĺ�����pr���������ڽ�����ʱ����������ڶ��ϵ�man����Ҳ���Զ�����ɾ���ˡ�
//	pr->age = 10;
//	cout << "pr������Ϊ" << pr->age << endl;
//	system("pause");
//	return 0;
//
//
//}