#include <iostream>
#include <list>
#include <iterator>
#include <windows.h>
#include "Transport.h"
#include "Land.h"
#include "Sea.h"

using namespace std;

int main() {
	list<Transport*> myList;
    system("chcp 1251>NUL");
    Transport *tr;  Land *ln; Sea *s;
	for(int i=0;i<5;i++){
        tr = new Transport();
        ln = new Land();
        s = new Sea();
        tr->setPassengers(i+1);
        ln->setPassengers(i+100);
        ln->setWheels(i+10);
        s->setPassengers(i*50);
        s->setDisplacement(i*10000);
        myList.push_back(tr);
        myList.push_back(ln);
        myList.push_back(s);

	}
	list<Transport*>::iterator it = myList.begin();
	while(it!=myList.end()){
        tr=*it;
        tr->getParameters();
        cout<<"-----------------------"<<endl;
        it++;
	}
	return 0;
}
