#include <iostream>
#include <list>
#include <iterator>
#include <windows.h>
#include "Transport.h"
#include "Land.h"
#include "Sea.h"
#include "Marine.h"
#include "Submarine.h"
#include "Rail.h"
#include "Road.h"
#include "MyList.h"

using namespace std;

int main() {
	MyList myList;
    system("chcp 1251>NUL");
    Transport *tr;
        tr = new Transport("Транспорт обыкновенный");
        tr->setPassengers(1);
        myList.push_back(tr);
        tr = new Land("Наземный транспорт");
        tr->setPassengers(100);
        tr->setWheels(10);
        myList.push_back(tr);
        tr = new Sea("Морской транспорт");
        tr->setPassengers(50);
        tr->setDisplacement(10000);
        myList.push_back(tr);
        tr = new Road("Машина");
        tr->setClearance(150);
        tr->setPassengers(10);
        tr->setWheels(6);
        myList.push_back(tr);
        tr = new Rail("Поезд");
        tr->setPassengers(100);
        tr->setRailCanvasWidth(150);
        tr->setWheels(10);
        myList.push_back(tr);
        tr = new Marine("Корабль");
        tr->setPassengers(400);
        tr->setDeckSqare(600);
        tr->setDisplacement(10000);
        myList.push_back(tr);
        tr = new Submarine("Подводная лодка");
        tr->setDisplacement(50000);
        tr->setImmersionDepth(1500);
        tr->setPassengers(50);
        myList.push_back(tr);

        cout << myList;
	return 0;
}
