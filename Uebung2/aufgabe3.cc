#include <iostream>
#include <string>
#include <cmath>

void Fnibonacci(int n)
{
	int i = 0; //this is our counter till the number given by the user
	long n1 = 0; //those 2 variables will help us build our series
	long n2 = 1; //those 2 variables will help us build our series
	long series = n1 + n2; //this is our starting point of the series
	if(n == 0) // n = 0 we don't print anything, because n=0
	{
		std::cout << "The series is empty" << std::endl;
		return;
	}
	if (n == 1)
	{
		std::cout << "Fn = " << n1 << std::endl;	// initially shows 0 and then shows the current number in the series
		return;
	}
	for(i = 1; i<n-1; i++)
	{
		series = n1 + n2; // initially adds 0 to 1 and after that will continue adding the last number to the number before it
		n1 = n2; // assigning n1 the next number`
		n2 = series; // assigning n2 the current number in the series in order to continue the series
	}
	std::cout << "Fn = " << series << std::endl;	// initially shows 0 and then shows the current number in the series
}


void fibonacci(int n)
{
	int i = 0; //this is our counter till the number given by the user
	long n1 = 0; //those 2 variables will help us build our series
	long n2 = 1; //those 2 variables will help us build our series
	long series = n1 + n2; //this is our starting point of the series
	if(n == 0) // n = 0 we don't print anything, because n=0
	{
		return;
	}
	std::cout << n1 << std::endl; // printing 1, in case n = 1, the program will quit the function in the next if-statement
	if (n == 1)
	{
		return;
	}
	for(i = 1; i<n; i++)
	{
		std::cout << series << std::endl;	// initially shows 0 and then shows the current number in the series
		series = n1 + n2; // initially adds 0 to 1 and after that will continue adding the last number to the number before it
		n1 = n2; // assigning n1 the next number`
		n2 = series; // assigning n2 the current number in the series in order to continue the series
	}
}

int main(int argc, char** argv)
{
	int n = 0;
	int answer;
	std::cout << "Do you want to see the whole series, or just Fn (0 = just Fn, 1 = The whole series) : " << std::flush;
	std::cin >> answer;
	if(answer == 0)
	{
		std::cout << "Choose a number N to show the Fn: " << std::flush;
	    std::cin >> n;
		Fnibonacci(n);
		return 0;
	}
	else
	{
		if(answer == 1)
		{
			std::cout << "Choose a number N to show the fibonacci series: " << std::flush;
			std::cin >> n;
			fibonacci(n);
			return 0;
		}
		else
		{
			std::cout << "You need to choose 0 or 1" << std::endl;
			return 0;
		}
	}
	
	return 0;
}

// 	Bemerkung zur B.ii - Damit das Programm auch bei großen Eingaben für n (zB n>40) richtige Ausgaben liefert, benutzt man den Datentypen long int.