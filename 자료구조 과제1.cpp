#include<iostream>
void divide(const int &n1, const int &n2, int &q2, int &r2);
int main(void)
{
	int num1;
	int num2;
	int q;
	int r;
	
	const int &n1=num1;
	const int &n2=num2;
	int &q2=q;
	int &r2=r;
	std::cout<<"피연산자 2개를 입력하시오: ";
	std::cin>>num1>>num2;
	try
	{
		if(num2==0)
			throw num2;
	}
	catch(int expn)
	{
		std::cout<<expn<<"으로 나눌순 없습니다."<<std::endl;
		std::cout<<"프로그램을 다시 실행하세요."<<std::endl;
		return 0;
	}
	divide(n1, n2, q2, r2);
	std::cout<<num1<<"/"<<num2<<"="<<q<<", "<<num1<<"%"<<num2<<"="\
		     <<r<<std::endl;
	return 0;
}
void divide(const int &n1, const int &n2, int &q2, int &r2)
{
	q2=n1/n2;
	r2=n1%n2;
	return ;
}
