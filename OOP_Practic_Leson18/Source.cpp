#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Transport
{
private:
	int countPeople;
	int weightBaggage;
public:
	void setcountPeople(int count) { countPeople = count; }
	void setweightBaggage(int weight) { weightBaggage = weight; }
	int getcountPeople() { return countPeople; }
	int getweightBaggage() { return weightBaggage; }

	void travelCost(int distance)
	{
		cout << "Travel Cost" << endl;
	}
};

class Auto : public Transport
{
private:
	int price;
	int priceMan = 10;
	int priceBag = 1;
	int priceRoad = 2;
	//цены в долларах
public:
	void travelCost(int distance)
	{
		price = 
	}
};

class Bicicle : public Transport
{
private:

public:

};

class Cart : public Transport
{
private:

public:

};

int main()
{
	setlocale(LC_ALL, "ru-RU");

	return 0;
}