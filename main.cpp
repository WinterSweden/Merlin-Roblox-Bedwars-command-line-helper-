//main.cpp

#include <iostream>
int main() {

  
std::cout << "Welcome to Merlin \n";
std::cout << "This project is under development. Consider adding your own content! It might make the next version... \n";
std::cout << "Loading variables and data handling... \n";
 
// require someone to make a documentation on all the commands and how this works.
  
  int armour = 0;
  int swordtype = 1;
  int ems = 0;
  int dims = 0;
  int iron = 0;
  int beds = 3;
  int mybed = 1;
  int bow = 0;
  int cbow = 0;
  int arrow = 0;
  int bedprot = 0;
  string action;
  
std::cout << "Loaded. \n";

  forever {
  
  std::cin >> action;

// configuration of variables 
  
  if(action = iron) {
std::cin >> iron;
     };

  if(action = ems) {
std::cin >> ems;
  };

  if(action = dim) {
std::cin >> dims;
  };

  if(action = bedprot) {
  int bedprot = 1;
  };

  if(action = armour) {
    std::cout << "0. None \n";
    std::cout << "1. Leather \n";
    std::cout << "2. Iron \n";
    std::cout << "3. Diamond \n";
    std::cout << "4. Emerald \n";
    std::cin >> armour;
  };

  if(action = sword) {
    std::cout << "1. Wood \n";
    std::cout << "2. Stone \n";
    std::cout << "3. Iron \n";
    std::cout << "4. Diamond \n";
    std::cout << "5. Emerald \n";
    std::cin >> swordtype;
  };

  if(action = beds) {
    std::cout << "How many beds left? (besides yours)\n";
    std::cin >> beds;
  };

    if(action = mbed) {
      int mybed = 0;
    };

  if(action = bow) {
    int bow = 1;
  };

  if(action = cbow) {
    int cbow = 1;
  };

  if(action = aro) {
    std::cin >> arrow;
  };

  // end of variable configuration

  // beginning of decision-making

  // armour
  
  if(iron => 50 and armour = 0) {
    std::cout << "Buy Leather armour\n";
  };

  if(iron => 120 and armour = 1) {
    std::cout << "Buy Iron armour\n";
  };

  if(ems => 8 and armour = 2) { 
    std::cout << "Buy Diamond armour\n";
  };

  if(ems=> 40 and armour = 3) {
    std::cout "Buy Emerald armour\n";
  };

  // end of armour

  // sword


};
};
