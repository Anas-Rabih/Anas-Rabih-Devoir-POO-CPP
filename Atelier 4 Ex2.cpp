#include<iostream>
#include<string>

using namespace std;
class Animal
{
private:
    string Nom;
    int age;

public:
      string getNom(){
        return Nom;
    }
    int getAge(){
        return age;
    }
   void set_value(string Nom,int age){
    this->Nom=Nom;
    this->age=age;

}

};

class Zebra:private Animal{
private:
    string lieuOrigine;
public:
   void set_value(string Nom,int age, string lieuOrigine){
    Animal::set_value(Nom,age);
    this->lieuOrigine=lieuOrigine;}
     string getLieu(){
        return lieuOrigine;
    }
   void affiche(){

     cout<<"le nom de Zebra est:"<<getNom()<<endl<<"l'age de Zebra est:"<<getAge()<<endl<<"le lieu d'origine de Zebra  est:"<<getLieu()<<endl;

    }
};

class Dolphin:private Animal
{
private:
 
    string lieuOrigine;
public:
   void set_value(string Nom,int age,string lieuOrigine){
    Animal::set_value(Nom,age);
    this->lieuOrigine=lieuOrigine;

     }
       string getLieu(){
        return lieuOrigine;
    }
    void affiche(){

     cout<<"le nom de Dolphin est:"<<getNom()<<endl<<"l'age de Dolphin est:"<<getAge()<<endl<<"le lieu d'origine de Dolphin  est:"<<lieuOrigine<<endl;

     }
};
int main(){
    Zebra z1;
    Dolphin d1;
     z1.set_value("Max",9,"Afrique");
     d1.set_value("wano",3,"Indian");


  
  
  z1.affiche();
  cout<<"______________________________________"<<endl;
   d1.affiche();
    return 0;
}
