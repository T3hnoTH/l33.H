#include "Aviary.h"

int main(){
    Aviary av1(1, 2, false);
    
    try{
        av1.addAnimal(new Bird("", false, 5));
    }catch(const ZooException * obj){
        cout << obj->showMessage() << endl;
        delete obj;
    }try{
        av1.addAnimal(new Fish("Карп", false, false));
    }catch(const ZooException * obj){
        cout << obj->showMessage() << endl;
        delete obj;
    }try{
        av1.addAnimal(new Mammal("Лиса", true, "-------------------"));
    }catch(const ZooException * obj){
        cout << obj->showMessage() << endl;
        delete obj;
    }try{
        av1.addAnimal(new Bird("Колибри", false, 10));
    }catch(const ZooException * obj){
        cout << obj->showMessage() << endl;
        delete obj;
    }try{
        av1.addAnimal(new Fish("Рыба-клоун", false, false));
    }catch(const ZooException * obj){
        cout << obj->showMessage() << endl;
        delete obj;
    }

    cout << "==============================\n";
    av1.showInfo();

    return 0;
}