#include <iostream>
using namespace std;
#include "CoffeeMachineInterface.cpp"
#include"OldCoffeeMachine.cpp"



class CoffeeTouchscreenAdapter : public CoffeeMachineInterface, public OldCoffeeMachine{
public:

    void chooseFirstSelection(){
          selectA();

    }
    void chooseSecondSelection(){
          selectB();

    }

};

int main(){
   string input;
   CoffeeTouchscreenAdapter * result = new CoffeeTouchscreenAdapter();
   while(1){

   cout<<"Type Method(First or Second) or to Exit:";
   cin>>input;
   if (input=="First" || input=="first"){
    result->chooseFirstSelection();

   }else if(input=="Second" || input=="second"){
    result->chooseSecondSelection();

   }else if(input=="Exit" || input=="exit"){
    break;

   }else{cout<<"Invalid input"<<endl;}

   }
   return 0;
}
