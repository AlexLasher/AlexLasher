#include "MyList.h"
#include "Transport.h"

void PrintList(MyList lst){
    MyIterator pos; Transport *p;
    pos = lst.begin();
    while (pos!=lst.end())
    {
        p = (*pos);
        p->getParameters();
        cout<<"-----------------------"<<endl;
        pos++;
    }
}
ostream & operator << (ostream & out, MyList lst){
    PrintList(lst);
    return out;
}
