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
using namespace std;

int main() {
	list<Transport*> myList;
    system("chcp 1251>NUL");
    Transport *tr;  Land *ln; Sea *s; Road *rd; Rail *rl; Marine *m; Submarine *sm;
        tr = new Transport();
        ln = new Land();
        s = new Sea();
        rd = new Road();
        rl = new Rail();
        m = new Marine();
        sm = new Submarine();

        tr->setPassengers(1);
        ln->setPassengers(100);
        ln->setWheels(10);
        s->setPassengers(50);
        s->setDisplacement(10000);
        rd->setClearance(150);
        rd->setPassengers(10);
        rd->setWheels(6);
        rl->setPassengers(100);
        rl->setRailCanvasWidth(150);
        rl->setWheels(10);
        m->setPassengers(400);
        m->setDeckSqare(600);
        m->setDisplacement(10000);
        sm->setDisplacement(50000);
        sm->setImmersionDepth(1500);
        sm->setPassengers(50);
        myList.push_back(tr);
        myList.push_back(ln);
        myList.push_back(s);
        myList.push_back(sm);
        myList.push_back(m);
        myList.push_back(rl);
        myList.push_back(rd);

	list<Transport*>::iterator it = myList.begin();
	while(it!=myList.end()){
        tr=*it;
        tr->getParameters();
        cout<<"-----------------------"<<endl;
        it++;
	}
	return 0;
}
