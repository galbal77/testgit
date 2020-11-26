#include <iostream>
#include <string>
#include <cmath>

void collatz(int number)
{
	int test = number % 2;
	if (test == 0)
	{
		std::cout << number << " is an even number! dividing " << number << " by 2!" << std::endl;
		number = number / 2;
	}
	else
	{
		std::cout << number << " is not an even number! multiplying " << number << " by 3 and adding 1 to its value!" << std::endl;
		number = (number * 3) + 1;
	}
	std::cout << "Next step: " << number << std::endl;
	if (number == 1 or number == 0 || number == -1 || number == -5 || number == -17)	
	{
		std::cout << "The number is meeting one of the conditions!" << number << std::endl;
	}
	else
	{
		collatz(number);
	}
}

int main(int argc, char** argv)
{
	std::cout << "Enter a number: " << std::endl;
	int number = 0;
	std::cin >> number;
	collatz(number);
	return 0;
}

/*0 kann nur dann erreicht werden, wenn die gelesene Zahl 0 ist.
Nehmen wir an, dass infolge der Zuweisung number=number/2 (*) die Variable number den Wert 0 hat. Das geschieht genau dann, wenn vor der Ausführung dieses Schrittes number kleiner als 2 war, also entweder 0 oder 1. Wenn number gleich mit 1 war, dann wäre man schon aus der Schleife rausgekommen und den Schritt (*) hätte man nicht mehr durchgeführt.
 Nehmen wir jetzt an, dass man number=0 infolge der Zuweisung number=3*number+1 erhält. Dann bedeutet das, dass number gleich mit -(1/3) war, was nicht sein kann, weil number immer eine ganze Zahl ist.
*/
//Alle Zahlen, die zum Wert 1 führen, sind aus der Menge der natürlichen Zahlen ohne Null