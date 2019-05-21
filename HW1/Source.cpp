/*
HW1�ǻ�����ΰ}�C�A�èϥ�static�Mconst
�ק����Ϊ���t��static�Mconst�\��A�üg�@��ƥi�H�ǻ�����Ϊ���íp���`���n�C
�Ѧҽd��10-5 TotalArea.cpp,
10.7 CircleWithStaticDataFields.cpp,
10.9 CircleWithConstantMemberFunctions.cpp�C
�n�D��ƦW��sum(Rectangle rectArray[], int size)
�D�{����J5�ժ��e�Х�5�Ӫ���ΡA
�ÿ�X�U�Ӫ���Ϊ����n�B����μƶq���`���n�C

�d�ҿ�J�G
3 17 1 19 3 11 2 10 8 10

�d�ҿ�X�G
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