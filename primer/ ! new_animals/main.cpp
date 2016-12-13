#include "homeanimal.h" // 1 4
//#include "herbivores.h" // 2
#include "cow.h" // 3
#include "horse.h" // 3
#include "MyList.h" // 5

#include <windows.h>
using namespace std;
using namespace homeanimal; // 1 4
//using namespace herbivores; // 2
using namespace cow; // 3
using namespace horse; // 3

int main()
{
    system("chcp 1251 >NUL");
/*
    HomeAnimal home; // 1
    cout << home.GetType() << endl; // 1
    cout << home.GetFoot() << endl; // 1
    home.SetFoot("лапа");
    cout << home.GetFoot() << endl; // 1
*/
/*
    Herbivores herb; // 1
    cout << herb.GetType() << endl; // 2
    cout << herb.GetFoot() << endl; // 2
    cout << herb.GetName() << endl;
    herb.SetHoof("парное");// 2
    cout << herb.GetHoof() << endl; // 2
*/

/*
    Cow MyCow; // 3
    cout << MyCow.PrintType() << endl; // 3
    MyCow.SetName("Бурёнка");
    cout << MyCow.PrintName() << endl; // 3
    cout << MyCow.PrintFoot() << endl; // 3
    cout << MyCow.PrintHoof() << endl; // 3
    MyCow.SetHorns("прямые"); // 3
    cout << MyCow.PrintHorns() << endl<< endl; // 3

    Horse MyHorse; // 3
    cout << MyHorse.GetType() << endl; // 3
    MyHorse.SetName("Быстрая");
    cout << MyHorse.GetName() << endl; // 3
    cout << MyHorse.GetFoot() << endl; // 3
    cout << MyHorse.GetHoof() << endl; // 3
    MyHorse.SetHorseshoe("алюминиевые"); // 3
    cout << MyHorse.GetHorseshoe() << endl; // 3
*/

    HomeAnimal *MyCow, *MyHorse; // 4
    MyCow = new Cow("Бурёнка","прямые"); //4
    MyCow->MySettings(); //4
    MyHorse = new Horse("Быстрая","алюминиевые"); //4
    MyHorse->MySettings(); //4


    HomeAnimal *MyAnimal; //5

    MyList Animals; //5

    MyAnimal = new Cow("Бурёнка","прямые"); //5
    Animals.push_front(MyAnimal); //5
    MyAnimal = new Cow("Пеструха","прямые"); //5
    Animals.push_front(MyAnimal); //5
    MyAnimal = new Cow("Ночка","кривые"); //5
    Animals.push_back(MyAnimal); //5
    //PrintList(Animals); //5
    cout << Animals << endl;
    system("pause > NUL");
    system("cls");
    EraseFromList(Animals,0);
    //PrintList(Animals); //5
    cout << Animals << endl;
    SaveList(Animals,"1.txt");
    system("pause > NUL");
    return 0;
}
