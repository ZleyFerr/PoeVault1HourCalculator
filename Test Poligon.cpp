#include <iostream>
float Capital;
float time1 = 60;
float timez;
float farmZ;
int divinePrice = 0;

int main()
{
	setlocale(LC_ALL, "Ru");
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Введите количество хаосов затраченное на старт : ";
		std::cin >> Capital;
		std::cout << "Введите количество минут затраченное на фарм : ";
		std::cin >> timez;
		std::cout << "Введите сколько хаосов получено за фарм : ";
		std::cin >> farmZ;
		std::cout << "Курс дивайнов : ";
		std::cin >> divinePrice;

		float timetotal = time1 / timez;
		float totalFarm1Hour = farmZ * timetotal - Capital;
		float totalFarm1HourDivine = ((farmZ - Capital) * timetotal) / divinePrice;

		std::cout << "Грязными нафармлено за " << timez << " минут : " << farmZ << std::endl;
		std::cout << "Чистый фарм за 1 час составляет (в хаосах) : " << totalFarm1Hour << std::endl;
		std::cout << "Чистый фарм за 1 час составляет (в дивайнах) : " << totalFarm1HourDivine << std::endl;
		std::cout << "------------------------------------------" << std::endl;
	}
}
