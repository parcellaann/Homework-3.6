// Homework 3.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Task 1\n\n";
	int a = 5;
	for (int i = 1; i <= 10; i++)
		std::cout << a << " * " << i << " = " << a * i << "\n";

	std::cout << "\nTask 2\n";
	int number = 0;
	while (number != 7)
	{
		std::cout << "Enter your number: ";
		std::cin >> number;
		if (number < 7)
			std::cout << number <<" < 7\n";
		else if (number > 7)
			std::cout << number << " > 7\n";
		if (number < 10)
			std::cout << number << " < 10\n";
		else if (number > 10)
			std::cout << number << " > 10\n";
		if (number % 2 == 0)
			std::cout << "The number "<< number << " is divisible by 2 without remainder.\n";
		else
			std::cout << "The number " << number << " isn't divisible by 2 without remainder.\n";
		if (number % 3 == 0)
			std::cout << "The number " << number << " is divisible by 3 without remainder.\n";
		else
			std::cout << "The number " << number << " isn't divisible by 3 without remainder.\n";

		std::cout << "To exit, enter the number 7.\n\n";
	}
}

