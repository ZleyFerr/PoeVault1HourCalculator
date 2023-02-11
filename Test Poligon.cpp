#include <iostream>
#include <Windows.h>
int main()
{
	for (int i = 0; i < 100; i++) {
		setlocale(LC_ALL, "Ru");
		std::cout << "Вычесление фарма за 1 час" << std::endl;
		float Capital;
		std::cout << "Введите количество хаосов затраченное на старт : ";
		std::cin >> Capital;
		std::cout << std::endl;
		float time = 60;
		float timez;
		std::cout << "Введите количество минут затраченное на фарм : ";
		std::cin >> timez;
		std::cout << std::endl;
		float timetotal = time / timez;
		float farmZ;
		std::cout << "Введите сколько хаосов получено за фарм : ";
		std::cin >> farmZ;
		std::cout << std::endl;
		float totalFarm1Hour = farmZ * timetotal - Capital;
		float totalFarm1HourDivine = ((farmZ - Capital) * timetotal)  / 260;
		std::cout << "Грязными нафармлено за " << timez << " минут : " << farmZ << std::endl;
		std::cout << "Чистый фарм за 1 час составляет (в хаосах) : " << totalFarm1Hour << std::endl;
		std::cout << "Чистый фарм за 1 час составляет (в дивайнах) : " << totalFarm1HourDivine << std::endl;
		std::cout << "------------------------------------------" << std::endl;
	}
}