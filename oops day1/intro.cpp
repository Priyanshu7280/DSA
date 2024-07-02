#include<iostream>
#include<cstring>
using namespace std;

class Hero{
   //properties
    private:
    int health;

    public: 
    char* name;
    char level;
    static int timetoComplete;

    //Deafault constructor
     Hero(){
        cout<<"Default Constructor called "<<endl;
        name = new char[100];
    } 

    //Parameterised constructor
    Hero(int health){
        this -> health=health;
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health=health;
    }

     //copy constructor  
    Hero(Hero& temp){

        char *ch = new char(strlen(temp.name)+1);
        strcpy(ch, temp.name);
        this->name = ch;

        cout<<"Copy Constructor Called"<<endl;
        this -> health = temp.health;
        this -> level = temp.level;
    } 

    void print(){
        cout<<endl;
        cout<<"name: "<<this->name<<", ";
        cout<< "health: "<<this->health<<", ";
        cout<<"level: "<< this->level << endl;
        cout<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    static int random(){
        return timetoComplete;
    }

    //Destructor
    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }
};

int Hero :: timetoComplete = 5;


int main()
{  
    //cout<< Hero :: timetoComplete << endl;  //advisable way 
    cout<< Hero :: random() << endl;

  /*   
    Hero a;
    cout<< a.timetoComplete << endl;

    Hero b;
    b.timetoComplete = 10;
    cout<< a.timetoComplete << endl;
    cout<< b.timetoComplete << endl;
 */

 /*    //Static     
    Hero a;

    //Dynamic  -> it is called manually
    Hero*b = new Hero;
    delete b;
 */
    
/* 
    Hero hero1;
    hero1.setHealth(200);
    hero1.setLevel('D');
    char name[10] = "Priyanshu";
    hero1.setName(name);

    //hero1.print();

    //use default copy constructor  
     
    Hero hero2(hero1);
    //hero2.print(); 

    hero1.name[0] = 'B';
    hero1.print();

    hero2.print();  

    hero1 = hero2;   //copy assignment operator
     hero1.print();

    hero2.print();

 */

   /*  Hero Rajat(80,'C');
    Rajat.print();

    //copy constructor
    Hero Priyanshu(Rajat);
    Priyanshu.print();
    
   */





   /* 
    Hero thg;

    //object created statically
    Hero Rahul(15);
    //cout<<"Address of Rahul "<< &Rahul << endl;
   Rahul.print();

    //dynamically
    Hero *h = new Hero(20);
    h->print();

    Hero temp(22,'B');
    temp.print(); */
    
    /*  
    //static allocation
    Hero h1;
    h1.setHealth(100);
    h1.setLevel('A');
    cout<<"level is: "<<h1.level << endl;
    cout<<"Health is: "<<h1.getHealth() << endl;

    //dynamically
    Hero *h2 = new Hero;
    h2->setHealth(80);
    h2->setLevel('B'); 
    cout<<"level is: "<<(*h2).level << endl;
    cout<<"Health is: "<<(*h2).getHealth() << endl;

    cout<<"level is: "<<h2->level << endl;
    cout<<"Health is: "<<h2->getHealth() << endl;
    
 */

  /*   //creation of object
    Hero h1; 
    cout<<"size of h1 is "<<sizeof(h1)<<endl;

    cout<< "h1 health is "<<h1.getHealth()<<endl;
    //use setter
    h1.setHealth(70);
    h1.level = 'A';

    cout<<"Health is: "<<h1.getHealth() << endl;
    cout<<"level is: "<<h1.level << endl;

    //cout<< "Size : "<< sizeof(h1) <<endl;
     */
    

    return 0;
}