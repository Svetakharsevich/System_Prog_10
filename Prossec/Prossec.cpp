// Prossec.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <windows.h> 
#include <conio.h> 
#include <cstdio> //для работы со строками
#include <iostream>

volatile int count;

void thread()
{
	for (;;)
	{
		count++;
		Sleep(500);
		_cprintf("count = %d\n", count);
	}
}


void thread_duble_one()
{
	for (;;)
	{
		count++;
		Sleep(500);
		_cprintf("duble_one\n");
	}
}

void thread_duble_two()
{
	for (;;)
	{
		count++;
		Sleep(500);
		_cprintf("duble_two\n");
	}
}

void thread_one()
{
	for (;;)
	{
		count++;
		Sleep(500);
		_cprintf("One\n");
	}
}

void thread_two()
{
	for (;;)
	{
		count++;
		Sleep(500);
		_cprintf("Two\n");
	}
}
DWORD WINAPI ThreadFunction1(LPVOID lpParam) {
	std::cout << "Поток 1 создан.\n";

	int sum = 0;
	for (int i = 0; i < 100; i++) {
		sum += i;
	}
	std::cout << "Поток 1: Сумма чисел от 1 до 100: " << sum << std::endl;

	return 0;
}

DWORD WINAPI ThreadFunction2(LPVOID lpParam) {
	std::cout << "Поток 2 создан.\n";

	char input;
	std::cout << "Поток 2: Введите знак: ";
	input = _getch();
	std::cout << "\nПоток 2: Вы ввели: " << input << std::endl;

	return 0;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	/* Задание 1 и 2*/

	//const wchar_t applicationName[] = L"calc.exe";
	////const wchar_t applicationName[] = L"C:\\Users\307-07\Desktop\task10\Prossec\x64\Debug\ConsoleApplication1.exe";

	//wchar_t mutableApplicationName[MAX_PATH];
	//wcscpy_s(mutableApplicationName, applicationName);
	//STARTUPINFO si;
	//PROCESS_INFORMATION pi;
	//ZeroMemory(&si, sizeof(STARTUPINFO));
	//si.cb = sizeof(STARTUPINFO);
	//if (!CreateProcess(
	//	NULL, // имя не задаем
	//	mutableApplicationName, // имя программы
	//	NULL, // атрибуты защиты процесса устанавливаем по умолчанию
	//	NULL, // атрибуты защиты первичного потока по умолчанию
	//	FALSE, // дескрипторы текущего процесса не наследуются
	//	0, // по умолчанию NORMAL_PRIORITY_CLASS
	//	NULL, // используем среду окружения вызывающего процесса
	//	NULL, // текущий диск и каталог, как и в вызывающем процессе
	//	&si, // вид главного окна - по умолчанию
	//	&pi // информация о новом процессе

	//)
	//	)
	//{
	//	std::cout << "The mew process is not created." << std::endl
	//		<< "Check a name of the process." << std::endl;
	//	return 0;
	//}

	//DWORD pid = GetCurrentProcessId();

	//HANDLE hProcess = GetCurrentProcess();

	//std::cout << "Process PID: " << pid << std::endl;
	//std::cout << "Process Handle: " << hProcess << std::endl;


	//Sleep(3000); // немного подождем и закончим свою работу
	//TerminateProcess(pi.hThread, 1);
	//TerminateProcess(pi.hProcess, 1);
	//std::cout << "completion of processes" << std::endl;

	//CloseHandle(pi.hThread);
	//CloseHandle(pi.hProcess);

	///*задание 3*/
	//int number1 = 13;
	//int number2 = 25;

	//wchar_t lpszComLine[80]; // для командной строки
	//char stroka[80];


	//STARTUPINFO si3{};
	//PROCESS_INFORMATION pi3;
	//SECURITY_ATTRIBUTES sa3;
	//HANDLE hThread;
	//DWORD IDThread;
	//_cputs("Press any key to start the count-thread.\n");
	//_getch();
	//sa3.nLength = sizeof(SECURITY_ATTRIBUTES);
	//sa3.lpSecurityDescriptor = NULL; // защита по умолчанию
	//sa3.bInheritHandle = TRUE; // дескриптор потока наследуемый

	//hThread = CreateThread(&sa3, 0, (LPTHREAD_START_ROUTINE)thread, NULL, 0,
	//	&IDThread);
	//if (hThread == NULL)
	//	return GetLastError();
	//ZeroMemory(&si3, sizeof(STARTUPINFO));
	//si3.cb = sizeof(STARTUPINFO);

	//wsprintf(lpszComLine, L"ConsoleApplication1.exe %d %d %d", (int)hThread, number1, number2);
	//if (!CreateProcess(
	//	NULL, // имя процесса
	//	lpszComLine, // адрес командной строки
	//	NULL, // атрибуты защиты процесса по умолчанию
	//	NULL, // атрибуты защиты первичного потока по умолчанию
	//	TRUE, // наследуемые дескрипторы текущего процесса
	//	CREATE_NEW_CONSOLE, // новая консоль
	//	NULL, // используем среду окружения процесса предка
	//	NULL, // текущий диск и каталог, как и в процессе-предке
	//	&si3, // вид главного окна - по умолчанию
	//	&pi3 // здесь будут дескрипторы и идентификаторы
	//		)
	//	)
	//{
	//	_cputs("The new process is not created.\n");
	//	_cputs("Press any key to finish.\n");
	//	_getch();
	//	return GetLastError();
	//}
	//CloseHandle(pi3.hProcess);
	//CloseHandle(pi3.hThread);
	//WaitForSingleObject(hThread, INFINITE);
	//_cputs("Press any key to exit.\n");
	//_getch();
	//CloseHandle(hThread);
	//////Задание 4
	//const wchar_t applicationName[] = L"calc.exe";
	//wchar_t mutableApplicationName[MAX_PATH];
	//wcscpy_s(mutableApplicationName, applicationName);
	//STARTUPINFO si5;
	//PROCESS_INFORMATION pi5;
	//HANDLE hThread5, hThread6, hInheritThread5;
	//DWORD IDThread5;
	//hThread5 = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)thread_duble_one, NULL,
	//	0, &IDThread5);


	//hThread6 = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)thread_duble_two, NULL,
	//	0, &IDThread5);
	//if (!DuplicateHandle(
	//	GetCurrentProcess(), // дескриптор текущего процесса
	//	hThread5, // исходный дескриптор потока
	//	GetCurrentProcess(), // дескриптор текущего процесса
	//	&hInheritThread5, // новый дескриптор потока
	//	THREAD_TERMINATE, // только завершение потока
	//	TRUE, // новый дескриптор наследуемый
	//	0)) // не используем
	//{
	//	_cputs("The handle is not duplicated.\n");
	//	_cputs("Press any key to finish.\n");
	//	_getch();
	//	return GetLastError();
	//}
	//ZeroMemory(&si5, sizeof(STARTUPINFO));
	//si5.cb = sizeof(STARTUPINFO);

	//if (!CreateProcess(
	//	NULL, // имя не задаем
	//	mutableApplicationName, // имя программы
	//	NULL, // атрибуты защиты процесса устанавливаем по умолчанию
	//	NULL, // атрибуты защиты первичного потока по умолчанию
	//	FALSE, // дескрипторы текущего процесса не наследуются
	//	0, // по умолчанию NORMAL_PRIORITY_CLASS
	//	NULL, // используем среду окружения вызывающего процесса
	//	NULL, // текущий диск и каталог, как и в вызывающем процессе
	//	&si5, // вид главного окна - по умолчанию
	//	&pi5 // информация о новом процессе

	//)
	//	)
	//{
	//	std::cout << "The mew process is not created." << std::endl
	//		<< "Check a name of the process." << std::endl;
	//	return 0;
	//}
	//DWORD pid = GetCurrentProcessId();

	//HANDLE hProcess = GetCurrentProcess();
	//std::cout << "Process PID: " << pid << std::endl;
	//std::cout << "Process Handle: " << hProcess << std::endl;


	//Sleep(3000); // немного подождем и закончим свою работу
	////TerminateProcess(pi.hThread, 1);
	//TerminateProcess(pi5.hProcess, 1);
	//std::cout << "completion of processes" << std::endl;

	//CloseHandle(pi5.hThread);
	//CloseHandle(pi5.hProcess);


	/////* Задание 5*/


	//int num1 = 13;
	//int num2 = 25;



	//wchar_t lpszComLine7[80]; // для командной строки 
	//char stroka7[80];


	//STARTUPINFO si7{};
	//PROCESS_INFORMATION pi7;
	//SECURITY_ATTRIBUTES sa7;
	//HANDLE hThread7, hProcess_dop;
	//DWORD IDThread7;
	//_cputs("Press any key to start the count-thread.\n");
	//_getch();
	//sa7.nLength = sizeof(SECURITY_ATTRIBUTES);
	//sa7.lpSecurityDescriptor = NULL; // защита по умолчанию 
	//sa7.bInheritHandle = TRUE; // дескриптор потока наследуемый 

	//hThread7 = CreateThread(&sa7, 0, (LPTHREAD_START_ROUTINE)thread, NULL, 0,
	//	&IDThread7);
	//if (hThread7 == NULL)
	//	return GetLastError();
	//ZeroMemory(&si7, sizeof(STARTUPINFO));
	//si7.cb = sizeof(STARTUPINFO);

	//wsprintf(lpszComLine7, L"ConsoleApplication1.exe %d %d %d", (int)hThread7, num1, num2);
	//if (!CreateProcess(
	//	NULL, // имя процесса 
	//	lpszComLine7, // адрес командной строки 
	//	NULL, // атрибуты защиты процесса по умолчанию 
	//	NULL, // атрибуты защиты первичного потока по умолчанию 
	//	TRUE, // наследуемые дескрипторы текущего процесса 
	//	CREATE_NEW_CONSOLE, // новая консоль 
	//	NULL, // используем среду окружения процесса предка 
	//	NULL, // текущий диск и каталог, как и в процессе-предке 
	//	&si7, // вид главного окна - по умолчанию 
	//	&pi7 // здесь будут дескрипторы и идентификаторы 
	//)
	//	)
	//{
	//	_cputs("The new process is not created.\n");
	//	_cputs("Press any key to finish.\n");
	//	_getch();
	//	return GetLastError();
	//}




	//hProcess_dop = GetCurrentProcess();
	//std::cout << hProcess_dop << std::endl;

	//wsprintf(lpszComLine7, L"ConsoleApplication1.exe %d %d %d", (int)hProcess_dop, 100, 200);
	//if (!CreateProcess(
	//	NULL, // имя процесса 
	//	lpszComLine7, // адрес командной строки 
	//	NULL, // атрибуты защиты процесса по умолчанию 
	//	NULL, // атрибуты защиты первичного потока по умолчанию 
	//	TRUE, // наследуемые дескрипторы текущего процесса 
	//	CREATE_NEW_CONSOLE, // новая консоль 
	//	NULL, // используем среду окружения процесса предка 
	//	NULL, // текущий диск и каталог, как и в процессе-предке 
	//	&si7, // вид главного окна - по умолчанию 
	//	&pi7 // здесь будут дескрипторы и идентификаторы 
	//)
	//	)
	//{
	//	_cputs("The new process is not created.\n");
	//	_cputs("Press any key to finish.\n");
	//	_getch();
	//	return GetLastError();
	//}
	//CloseHandle(pi7.hProcess);
	//CloseHandle(pi7.hThread);
	//WaitForSingleObject(hThread7, INFINITE);
	//_cputs("Press any key to exit.\n");
	//_getch();
	//CloseHandle(hThread7);


	//Задание 6 и 7
	HANDLE hThread1 = NULL;
	HANDLE hThread2 = NULL;
	char input;

	while (true) {
		if (hThread1 != NULL) {
			WaitForSingleObject(hThread1, INFINITE);
		}
		if (hThread2 != NULL) {
			WaitForSingleObject(hThread2, INFINITE);
		}

		std::cout << "\nВыберите действие:\n";
		std::cout << "1. Создать поток 1\n";
		std::cout << "2. Создать поток 2\n";
		std::cout << "3. Завершить поток 1\n";
		std::cout << "4. Завершить поток 2\n";
		std::cout << "q. Выйти из программы\n";
		std::cout << "Ваш выбор: ";
		std::cin >> input;

		switch (input) {
		case '1':
			if (hThread1 == NULL) {
				hThread1 = CreateThread(NULL, 0, ThreadFunction1, NULL, 0, NULL);
				if (hThread1 == NULL) {
					std::cerr << "Не удалось создать поток 1.\n";
				}
			}
			else {
				std::cerr << "Поток 1 уже создан.\n";
			}
			break;
		case '2':
			if (hThread2 == NULL) {
				hThread2 = CreateThread(NULL, 0, ThreadFunction2, NULL, 0, NULL);
				if (hThread2 == NULL) {
					std::cerr << "Не удалось создать поток 2.\n";
				}
			}
			else {
				std::cerr << "Поток 2 уже создан.\n";
			}
			break;
		case '3':
			if (hThread1 != NULL) {
				TerminateThread(hThread1, 0);
				CloseHandle(hThread1);
				hThread1 = NULL;
				std::cout << "Поток 1 завершен.\n";
			}
			else {
				std::cerr << "Поток 1 не был создан.\n";
			}
			break;
		case '4':
			if (hThread2 != NULL) {
				TerminateThread(hThread2, 0);
				CloseHandle(hThread2);
				hThread2 = NULL;
				std::cout << "Поток 2 завершен.\n";
			}
			else {
				std::cerr << "Поток 2 не был создан.\n";
			}
			break;
		case 'q':
			std::cout << "Выход из программы.\n";
			if (hThread1 != NULL) {
				TerminateThread(hThread1, 0);
				CloseHandle(hThread1);
			}
			if (hThread2 != NULL) {
				TerminateThread(hThread2, 0);
				CloseHandle(hThread2);
			}
			return 0;
		default:
			std::cerr << "Неверный выбор. Попробуйте снова.\n";
			break;
		}
	}


	_cputs("Press any key to exit.\n");
	_getch();

	return 0;

}

