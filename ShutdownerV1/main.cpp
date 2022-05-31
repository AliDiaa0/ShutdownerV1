#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleTitleA("PC Shutdowner V1.0 (by Ali Diaa)");

	cout << "Write 'Shutdown' to shut down your computer.\n" "Write 'Restart' to reboot your computer: ";
	string input;
	cin >> input;

	if (input == "Shutdown")
	{
		system("shutdown /s /t 0");
	}
	else if (input == "Restart")
	{
		system("shutdown /r /t 0");
	}
	else
	{
		MessageBoxW(NULL, L"Invalid value!", L"Error", MB_OK | MB_ICONERROR);
	}
	return 0;
}