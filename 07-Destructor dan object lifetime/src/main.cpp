#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        string namaHero;

        //Constructor
        Hero(const char* nama){
            Hero::namaHero = nama;
            cout << "Hero " << nama << " dibuat" << endl;
        }

        //Destructor
        ~Hero(){
            cout << "Hero " << Hero::namaHero << " dihapus" << endl;
        }
        
};

//Prototype
void createStack();
void createHeap();
void createHeroStackPointer(Hero* &heroPointer);
void createHeroHeapPointer(Hero* &heroPointer);
Hero createStackHero();
Hero* createHeapPahlawan(){
    Hero* heapHero = new Hero("heap has create");
    return heapHero;
}

int main(int argc, char const *argv[])
{
   createStack(); 
   createHeap();

   //Simulasi memory leak
   cout << "\nMemory Leak" << endl;
   Hero* heroPointer1;
   createHeroStackPointer(heroPointer1);
   

   Hero* heroPointer2;
   createHeroHeapPointer(heroPointer2);
   cout << heroPointer2->namaHero << endl;
   heroPointer2->namaHero = "acak-acakan";
   cout << heroPointer2->namaHero << endl;
   delete heroPointer2;


   cout << "\nReturn object" << endl;
   Hero heroReturnStack = createStackHero();
   cout << heroReturnStack.namaHero << endl;

   Hero* heroReturnHeap = createHeapPahlawan();
   cout << heroReturnHeap->namaHero << endl;
   delete heroReturnHeap;

    return 0;
}

void createStack(){
    Hero stackHero = Hero("stack");
}

void createHeap(){
    Hero* heapHero = new Hero("heap");
    delete heapHero;
}

void createHeroStackPointer(Hero* &heroPointer){
    Hero stackHero = Hero("stack");
    heroPointer = &stackHero;
}

void createHeroHeapPointer(Hero* &heroPointer){
    Hero* heapHero = new Hero("heap");
    heroPointer = heapHero;
    // delete heapHero;
}

Hero createStackHero(){
    Hero stackHero = Hero("stack has create");
    return stackHero;
}
