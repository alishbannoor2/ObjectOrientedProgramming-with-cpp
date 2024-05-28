#include"classes.h"
int main()
{
	ElectricityBill e(12, "Lahore", 123456);
	WaterBill w(10, "Peshawar", 56789);
	TelephoneBill t(2, "Quetta", 7890);
	e.CalculateBill();
	e.DisplayUserInfo();
	w.CalculateBill();
	w.DisplayUserInfo();
	t.CalculateBill();
	t.DisplayUserInfo();
	system("pause");
	return 0;
}