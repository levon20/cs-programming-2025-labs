#include <stdio.h>

float task1(float time, char unit1, char unit2)
{
	const int minutsInHour = 60;
	const int secondsInMinute = 60;
	const int secondsInHour = 3600;

	if (time <= 0) return 0;

	if (unit1 == 's')
	{
		if (unit2 == 'm') return (time / secondsInMinute);
		else if (unit2 == 'h') return (time / secondsInHour);
	}
	else if (unit1 == 'm')
	{
		if (unit2 == 's') return (time * secondsInMinute);
		else if (unit2 == 'h') return (time / secondsInHour);
	}
	else if (unit1 == 'h')
	{
		if (unit2 == 's') return (time * secondsInHour);
		else if (unit2 == 'm') return (time / minutsInHour);
	}
	return 0;
}