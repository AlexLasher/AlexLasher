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
<<<<<<< HEAD
}
=======
    }
>>>>>>> 95df3c063e0e859c1f2a392af82f33513e44ce01
