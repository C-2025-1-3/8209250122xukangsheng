class Time
{private:
	int hour;
	int minute;
	int sec;
public:
	int hourl;
	void settime()
	{
		cin >> hour >> minute >> sec;
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.settime();
	return 0; 
}