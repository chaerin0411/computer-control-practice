#include <Windows.h>
int main()
{

	Beep(784, 300);
	Beep(880, 600);
	Beep(784, 300);
	Beep(659.3, 600);
	Beep(1046.5, 600);
	Beep(880, 600);
	Beep(784, 1800);
	Sleep(200);

	Beep(784, 300);
	Beep(880, 300);
	Beep(784, 300);
	Beep(880, 300);
	Beep(784, 600);
	Beep(1046.5, 600);
	Beep(987.8, 1800);
	Sleep(100);
}