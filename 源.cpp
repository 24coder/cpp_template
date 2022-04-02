#include<iostream>
#include<string>
#include<map>
#include<thread>
#include<mutex>
using namespace std;







mutex mymutex1;  //互斥量1  这就相当于一把锁  
mutex mymutex2;  //互斥量2  这就相当于一把锁
class tt
{
public:
	 int& s;
	tt(int &ss) :s(ss) {
		cout << "s的值为" << s<<endl;
	}
	void operator()() {
		
		cout << "对象子线程开始执行" << endl;
		cout << "m_i1的值为："<< s << endl;
		cout << "m_i2的值为："<< s << endl; 
		cout << "m_i3的值为："<< s << endl;
		cout << "m_i4的值为："<< s << endl;
		cout << "m_i5的值为："<< s << endl;
		cout << "对象子线程执行完毕" << endl;
		
	
	}
	tt(tt &ff):s(ff.s) {
		cout << "ff初始化s的值为：" <<s+10000<< endl;
	}
	~tt()
	{
		cout << "tt析构函数执行" << endl;
	}


};
//lockguard 使用的时候执行的时候自动执行构造函数同时执行lock动作   超出作用域之后自动执行析构函数也就是执行unlock操作
class tta
{
public:
	mutable int  ss;

	tta(int e):ss(e)
	{
		cout << "tta类型转换构造函数执行" << endl;
	}

	tta(tta &ee):ss(ee.ss)
	{
		cout << "myprintheid为：" << std::this_thread::get_id() << endl;
		cout << "tta拷贝构造函数执行" << endl;

	}

	void thread_work()
	{
	
		
		cout << "成员函数作为线程参数" << endl;
		
	
	}
	~tta() {
		cout << "tta析构函数执行" << endl;
	};

};

void myprint()
{
	mymutex2.lock();
	cout << "我的子线程开始执行了" << endl;
	mymutex1.lock();
	cout << "我的子线程执行完毕！！！" << endl;
	mymutex1.unlock();
	mymutex2.unlock();
}

//void myprinth(int a, char *w)
void myprinth(int a,const string& w) //不使用const的话  编译器会报错   想要修改变量的值的话可以在变量前面添加mutable
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

void myprinthe(int a,  const tta & w)//不管这里是不是用了引用 theread都会复制一个对象  这个是在子线程中进行构造  并且这个地方不管是不是
                                    //引用都会进行一份拷贝  为了安全考虑  
{
	w.ss = 100; 
	cout << a << endl;
	cout << "对象被拷贝构造出来777777777" << endl;
	cout << "myprintheid为：" << std::this_thread::get_id() << endl;
	cout << w.ss << endl;
	//cout << *w << endl;

}

int main55()
{

	
	cout << "主线程开始执行" << endl;
	cout << "主线程id为：" << std::this_thread::get_id() << endl;
	//cout << "主线程开始执行！！！" << endl;
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
	thread myobj(aa);//这个地方调用了拷贝构造函数  为了防止主线程中的变量析构之后 子线程无法使用  所以就拷贝了一个临时对象
	//myobj.join();  //使用join之后就不能使用detach了 使用detach之后同样也不能使用join了
	myobj.join();//驻留到后台运行  主线程不在了之后还能调用对象的成员函数吗  对象是被复制到了线程中去  子线程的任务执行完之后就会析构复制进去的临时对象
	thread myobh(myprinth,nnm,r);
	myobh.join();
	thread myobhg(myprint);
	myobhg.join();
	
	cout << "***************************" << endl;
	thread myobhe(myprinthe, num, num);//临时对象tta(num)可以作为参数  如果只使用 num隐式类型转换detach就不能及时将主线程中的对象构造到子线程中 
	myobhe.join();
	cout << "***************************" << endl;
	

	//函数对象普通成员杉树作为线程参数
	//tta gg(10);
	//thread myobk(&tta::thread_work,gg);  //成员变量地址  对象名   函数参数列表
	//myobh.join();

	//aa.~tt();
	cout << "报告  s的值在主线程中还是66" << endl;
	cout << "报告  s的值在主线程中还是66" << endl;
	cout << "报告  s的值在主线程中还是66" << endl;
	cout << "报告  s的值在主线程中还是66" << endl;
	cout << "报告  s的值在主线程中还是66" << endl;
	a = 77;
	cout << "s的值被主线程改成77" << endl;
	
	cout << "主线程执行完毕，主线程安全退出！！！." << endl;
	//aa.~tt();
	int ss = 404;
	string ee=to_string(ss);
	cout << ee<<endl;
	if (ee == string(ee.rbegin(), ee.rend()))
	{
		cout << "是回文数" << endl;
	}
	//reward string
	string gg = "shiofhaosi";
	cout << string(gg.rbegin(),gg.rend());
	system("pause");



	return 0;
}