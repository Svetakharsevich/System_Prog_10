// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include <windows.h> 
#include <conio.h> 


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");



	HANDLE hThread;
	char c;
	// преобразуем символьное представление дескриптора в число 
	hThread = (HANDLE)atoi(argv[1]);
	int a = atoi(argv[2]);
	int b = atoi(argv[3]);
	int sum = a + b;
	std::cout << "Сумма полученных значений: " << sum << std::endl;

	// ждем команды о завершении потока 
	while (true)
	{
		_cputs("Input 't'");
		c = _getch();
		if (c == 't')
		{
			_cputs("t\n");
			break;
		}

	}
	// завершаем поток 
	TerminateThread(hThread, 0);
	// закрываем дескриптор потока 
	CloseHandle(hThread);
	_cputs("Press any key to exit.\n");
	_getch();
	return 0;
}
