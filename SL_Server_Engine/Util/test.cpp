#include "../framework.h"

int _tmain(int argc, TCHAR* argv[])
{
	printf("yesterday %ws\n", CLOCK.yesterday().c_str());
	printf("today %ws\n", CLOCK.today().c_str());
	printf("tomorrow %ws\n", CLOCK.tomorrow().c_str());
	printf("today is [%d]week of the day\n", CLOCK.todayOfTheWeek());

	printf("system = %llu\n", NOW_TICK());

	for (int i = 0; i < 10; i++)
	{
		printf("%ws\n", CLOCK.nowTimeWithMilliSec().c_str());
	}
}