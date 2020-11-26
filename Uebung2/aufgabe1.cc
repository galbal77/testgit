#include <iostream>
#include <string>
#include <cmath>

void mitternachtformel(int a,int b,int c)
{
	if ((b*b - 4*a*c) >= 0)
	{
		double root = std::sqrt(b*b-4*a*c);
		double x1 = ((-b)+root)/(2*a);
		double x2 = ((-b)-root)/(2*a);
		std::cout << "X1 : " << x1 << std::endl;
		std::cout << "X2 : " << x2 << std::endl;
	}
	else
	{
		std::cout << "The square of ("  << b << "^2 - 4*"<< a << "*" << c << ") ist a negative number and can't be calculated" << std::endl;
	}
}

int main(int argc, char** argv)
{
	std::cout << "ax^2 + bx + c. type in a " << std::endl;
	double a = 0;
	std::cin >> a;
	std::cout << "ax^2 + bx + c. type in b " << std::endl;
	double b = 0;
	std::cin >> b;
	std::cout << "ax^2 + bx + c. type in c " << std::endl;
	double c = 0;
	std::cin >> c;
	if(a == 0 and b == 0 and c == 0)
	{
		std::cout << "0=0, nice try!" << std::endl;
	}
	else
	{
		if (a == 0 and b == 0)
		{
			std::cout << "I can't solve it, sorry!" << std::endl;
		}
		else
		{
			if(a==0)
			{
				double x = (double)(-c/b);
				std::cout<<"There is only one solution:"<<x<<std::endl;
			}
			else
			{
				mitternachtformel(a,b,c);
			}
		}
	}
	
	return 0;
}