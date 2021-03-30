#include<iostream>
using namespace std;
class Time {
private:
	int second;
	int minutes;
	int hours;
public:
	Time()
	{
		second = 00;
		minutes = 00;
		hours = 00;
	}
	Time(int sec, int min, int hr)
	{
		second = sec;
		minutes = min;
		hours = hr;
	}
	Time(Time& obj)
	{
		second = obj.second;
		minutes = obj.minutes;
		hours = obj.hours;

	}
	void setTime(int sec, int min, int h)
	{
		if (sec > 60)
		{
			second = 59;

		}
		else
			second = sec;

		if (min > 60)
		{
			minutes = 59;

		}
		else
			minutes = min;

		if (h > 24)
		{
			hours = 24;

		}
		else
			hours = h;

	}
	void showtime()
	{
		if (hours > 12)
		{
			cout << hours - 12 << " :" << minutes << ": " << second << " PM" << " \n";
		}
		else
		{
			cout << hours << " :" << minutes << ": " << second << " AM" << " \n";

		}
	}
	void tick()
	{
		second++;
		if (second >= 60)
		{
			second = 00;
			minutes++;
			if (minutes >= 60)
			{
				minutes = 00;
				hours++;
				if (hours >= 24)
				{
					second = 00;
					minutes = 00;
					hours = 00;
				}
			}
		}
		cout << hours << ": " << minutes << ": " << second << " \n";
	}
};
int main()
{
	int sec = 0, m = 0, h = 0;
	cout << "enter seconds\n";
	cin >> sec;
	cout << "enter minutes\n";
	cin >> m;
	cout << "enter hours\n";
	cin >> h;
	Time t1(sec, m, h);

	cout << "enter seconds\n";
	cin >> sec;
	cout << "enter minutes\n";
	cin >> m;
	cout << "enter hours\n";
	cin >> h;
	Time t2(sec, m, h);
	t1.showtime();
	t2.showtime();

	t1.tick();
	t1.tick();
	t1.tick();
	t1.tick();
	t1.tick();
	t1.tick();
	t1.tick();
	t1.tick();
	t1.tick();
	t1.tick();
	t1.showtime();
	cout << "\n\n";
	Time t3;
	t3.showtime();
	Time t4(05, 56, 10);

	Time t5(t4);
	cout << "\n";
	t4.showtime();
	cout << "\n";
	t4.showtime();


}
