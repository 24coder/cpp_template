#include<iostream>
#include<string>
#include<map>
#include<thread>
#include<mutex>
using namespace std;







mutex mymutex1;  //������1  ����൱��һ����  
mutex mymutex2;  //������2  ����൱��һ����
class tt
{
public:
	 int& s;
	tt(int &ss) :s(ss) {
		cout << "s��ֵΪ" << s<<endl;
	}
	void operator()() {
		
		cout << "�������߳̿�ʼִ��" << endl;
		cout << "m_i1��ֵΪ��"<< s << endl;
		cout << "m_i2��ֵΪ��"<< s << endl; 
		cout << "m_i3��ֵΪ��"<< s << endl;
		cout << "m_i4��ֵΪ��"<< s << endl;
		cout << "m_i5��ֵΪ��"<< s << endl;
		cout << "�������߳�ִ�����" << endl;
		
	
	}
	tt(tt &ff):s(ff.s) {
		cout << "ff��ʼ��s��ֵΪ��" <<s+10000<< endl;
	}
	~tt()
	{
		cout << "tt��������ִ��" << endl;
	}


};
//lockguard ʹ�õ�ʱ��ִ�е�ʱ���Զ�ִ�й��캯��ͬʱִ��lock����   ����������֮���Զ�ִ����������Ҳ����ִ��unlock����
class tta
{
public:
	mutable int  ss;

	tta(int e):ss(e)
	{
		cout << "tta����ת�����캯��ִ��" << endl;
	}

	tta(tta &ee):ss(ee.ss)
	{
		cout << "myprintheidΪ��" << std::this_thread::get_id() << endl;
		cout << "tta�������캯��ִ��" << endl;

	}

	void thread_work()
	{
	
		
		cout << "��Ա������Ϊ�̲߳���" << endl;
		
	
	}
	~tta() {
		cout << "tta��������ִ��" << endl;
	};

};

void myprint()
{
	mymutex2.lock();
	cout << "�ҵ����߳̿�ʼִ����" << endl;
	mymutex1.lock();
	cout << "�ҵ����߳�ִ����ϣ�����" << endl;
	mymutex1.unlock();
	mymutex2.unlock();
}

//void myprinth(int a, char *w)
void myprinth(int a,const string& w) //��ʹ��const�Ļ�  �������ᱨ��   ��Ҫ�޸ı�����ֵ�Ļ������ڱ���ǰ�����mutable
{
	mymutex1.lock();
	cout << a << endl;
	mymutex2.lock();
	cout << a << endl;
	
	cout << w << endl;
	
	mymutex2.unlock();
	mymutex1.unlock();
	cout << w.c_str() << endl;
	
	//cout << *w << endl;
	
}

void myprinthe(int a,  const tta & w)//���������ǲ����������� theread���Ḵ��һ������  ����������߳��н��й���  ��������ط������ǲ���
                                    //���ö������һ�ݿ���  Ϊ�˰�ȫ����  
{
	w.ss = 100; 
	cout << a << endl;
	cout << "���󱻿����������777777777" << endl;
	cout << "myprintheidΪ��" << std::this_thread::get_id() << endl;
	cout << w.ss << endl;
	//cout << *w << endl;

}

int main55()
{

	
	cout << "���߳̿�ʼִ��" << endl;
	cout << "���߳�idΪ��" << std::this_thread::get_id() << endl;
	//cout << "���߳̿�ʼִ�У�����" << endl;
	int a = 66;
	char r[] = "i love you";
	cout << r << endl;
	cout << "---------------------" << endl;
	string s = "dijfoai";
	cout << s.c_str() << endl;
	cout << s<< endl;

	int num = 1;
	int &nnm = num;
	//tt aa(a);
	//tt bb(aa);
	tt aa(a);
	tta at(num);
	thread myobj(aa);//����ط������˿������캯��  Ϊ�˷�ֹ���߳��еı�������֮�� ���߳��޷�ʹ��  ���ԾͿ�����һ����ʱ����
	//myobj.join();  //ʹ��join֮��Ͳ���ʹ��detach�� ʹ��detach֮��ͬ��Ҳ����ʹ��join��
	myobj.join();//פ������̨����  ���̲߳�����֮���ܵ��ö���ĳ�Ա������  �����Ǳ����Ƶ����߳���ȥ  ���̵߳�����ִ����֮��ͻ��������ƽ�ȥ����ʱ����
	thread myobh(myprinth,nnm,r);
	myobh.join();
	thread myobhg(myprint);
	myobhg.join();
	
	cout << "***************************" << endl;
	thread myobhe(myprinthe, num, num);//��ʱ����tta(num)������Ϊ����  ���ֻʹ�� num��ʽ����ת��detach�Ͳ��ܼ�ʱ�����߳��еĶ����쵽���߳��� 
	myobhe.join();
	cout << "***************************" << endl;
	

	//����������ͨ��Աɼ����Ϊ�̲߳���
	//tta gg(10);
	//thread myobk(&tta::thread_work,gg);  //��Ա������ַ  ������   ���������б�
	//myobh.join();

	//aa.~tt();
	cout << "����  s��ֵ�����߳��л���66" << endl;
	cout << "����  s��ֵ�����߳��л���66" << endl;
	cout << "����  s��ֵ�����߳��л���66" << endl;
	cout << "����  s��ֵ�����߳��л���66" << endl;
	cout << "����  s��ֵ�����߳��л���66" << endl;
	a = 77;
	cout << "s��ֵ�����̸߳ĳ�77" << endl;
	
	cout << "���߳�ִ����ϣ����̰߳�ȫ�˳�������." << endl;
	//aa.~tt();
	int ss = 404;
	string ee=to_string(ss);
	cout << ee<<endl;
	if (ee == string(ee.rbegin(), ee.rend()))
	{
		cout << "�ǻ�����" << endl;
	}
	//reward string
	string gg = "shiofhaosi";
	cout << string(gg.rbegin(),gg.rend());
	system("pause");



	return 0;
}