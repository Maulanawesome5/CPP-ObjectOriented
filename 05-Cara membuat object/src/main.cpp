#include <iostream>
#include <string>

using namespace std;

class denganConstructor{
    public:
        string data;

        denganConstructor(const char* data){
            denganConstructor::data = data;
        }
        void show(){
            cout << "ini " << denganConstructor::data << endl;
        }
};

class tanpaConstructor{
    public:
        string data;

        void show(){
            cout << "ini " << tanpaConstructor::data << endl;
        }
};

int main(int argc, char const *argv[])
{
    //1. Cara membuat object tanpa constructor
    //baris ini berjalan di memory stack
    tanpaConstructor object1;
    object1.data = "Object 1";
    object1.show();

    //2. Cara membuat object dengan constructor
    //baris ini berjalan di memory stack
    denganConstructor object2 = denganConstructor("Object 2");
    object2.show();

    //3. Cara lain membuat object dengan constructor
    //baris ini berjalan di memory stack
    denganConstructor object3 = denganConstructor("Object 3");
    object3.show();

    //4. Cara membuat object pada heap memory
    //baris ini berjalan di memory heap
    denganConstructor* object4 = new denganConstructor("Object 4");
    (*object4).show(); // Dengan cara dereference
    object4->show(); // Arrow operator, untuk mapping function atau attribute
    string data = object4->data;
    cout << data << endl;

    //5. Cara lain deklarasi
    //baris ini berjalan di memory heap
    denganConstructor* object5;
    object5 = new denganConstructor("Object 5");
    object5->show();

    return 0;
}
