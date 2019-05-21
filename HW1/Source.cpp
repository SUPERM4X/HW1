/*
HW1傳遞長方形陣列，並使用static和const
修改長方形物件含有static和const功能，並寫一函數可以傳遞長方形物件並計算總面積。
參考範例10-5 TotalArea.cpp,
10.7 CircleWithStaticDataFields.cpp,
10.9 CircleWithConstantMemberFunctions.cpp。
要求函數名稱sum(Rectangle rectArray[], int size)
主程式輸入5組長寬創立5個長方形，
並輸出各個長方形的面積、長方形數量及總面積。

範例輸入：
3 17 1 19 3 11 2 10 8 10

範例輸出：
51 19 33 20 80
Total: 5 rectangles
Area: 203
*/




#include <iostream>
using namespace std;
#include "Rectangle.h"
#include <iomanip>


int main()
{
	double width, height;
	Rectangle rectangleArray[5];

	cin >> width >> height;
	rectangleArray[0].setWidth(width);
	rectangleArray[0].setHeight(height);

	cin >> width >> height;
	rectangleArray[1].setWidth(width);
	rectangleArray[1].setHeight(height);

	cin >> width >> height;
	rectangleArray[2].setWidth(width);
	rectangleArray[2].setHeight(height);

	cin >> width >> height;
	rectangleArray[3].setWidth(width);
	rectangleArray[3].setHeight(height);

	cin >> width >> height;
	rectangleArray[4].setWidth(width);
	rectangleArray[4].setHeight(height);

	cout << rectangleArray[0].getArea() << " " <<
		rectangleArray[1].getArea() << " " << rectangleArray[2].getArea() << " "
		<< rectangleArray[3].getArea() << " " << rectangleArray[4].getArea() << endl;

	cout << "Total:" << Rectangle::getNumOfRect() << " rectangles" << endl;

	cout << "Area:" << rectangleArray[0].getArea() +
		rectangleArray[1].getArea() + rectangleArray[2].getArea() +
		rectangleArray[3].getArea() + rectangleArray[4].getArea() << endl;

	system("pause");
	return 0;
}