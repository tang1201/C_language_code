#include <iostream>
#include <cstdlib>
using namespace std;

void a(int p)
{
	for(int i = 0;i < p;i++)
	cout<<"*";
	
}

void b(int q)
{
	for(int j = 0;j < q; j++)
	cout <<" ";
}

int main()
{
	b(30);a(10);b(5);a(10);b(5);a(10);b(5);//							1
	cout << endl;
	b(30);a(10);b(5);a(10);b(5);a(10);b(5);//							2
	cout << endl;
	b(30);a(3);b(7);b(5);b(7);a(3);b(5);a(3);b(4);a(3);b(5);//		3
	cout << endl;
	b(30);a(3);b(7);b(5);b(7);a(3);b(5);a(3);b(4);a(3);b(5);//		4
	cout << endl;
	b(30);a(10);b(5);a(10);b(5);a(3);b(4);a(3);b(5);//				5
	cout << endl;
	b(30);a(10);b(5);a(10);b(5);a(3);b(4);a(3);b(5);//				6 
	cout << endl;
	b(30);b(7);a(3);b(5);a(3);b(7);b(5);a(3);b(4);a(3);b(5);//		7
	cout << endl;
	b(30);b(7);a(3);b(5);a(3);b(7);b(5);a(3);b(4);a(3);b(5);//		8
	cout << endl;
	b(30);a(10);b(5);a(10);b(5);a(10);b(5);//							9
	cout << endl;
	b(30);a(10);b(5);a(10);b(5);a(10);b(5);//							10
	cout << endl;
	system("pause");
	return 0;
 } 

