#include<iostream>
#include<string>
#include<array>
using namespace std;
//���ŷ��˼��
class person
{
public:
	mutable int x;               //mutable���Դ����ͨ�������漴ʹ������const  �������Ҳ�ᴦ�ڿ��Ը��ĵ�״̬
	int y;

public:
	void  manager(int x)const   //�������������֮�����const ��x��ֵ��Ϊֻ��״̬
	{
		this->x = x;            //��ͷ���Ǻ����ַ���Ԫ�صķ�ʽ
	}
};



//����ģ���ʵ��

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
	B(int i) : data(i)//�вι���  ���ұ�һ��int�������ֽ��й���
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
		cout << "ʹ��p��cout��ӡָ��ָ���Ԫ��Ϊ������" << p << endl;
		printf("ʹ��p��ӡ����Ԫssssssssssssssssss�ص�ַ��%p\n",p);
		cout << "����Ԫ�ص�ַ" << &you[i] << endl;
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
	cout << "wangle������Ϊ�� " << wangle.x << endl;
	system("pause");
	return;*/

}
