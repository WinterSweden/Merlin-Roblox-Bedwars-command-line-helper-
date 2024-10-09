#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to Merlin \n";
    std::cout << "This project is under development. Consider adding your own content! It might make the next version... \n";
    std::cout << "Loading variables and data handling... \n";

    // Variables
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
    std::string action;

    std::cout << "Loaded. \n";

    while (true) {
        std::cin >> action; // Input action

        // Configuration of variables
        if (action == "iron") {
            std::cin >> iron;
        } 
        
        else if (action == "ems") {
            std::cin >> ems;
        } 
        
        else if (action == "dim") {
            std::cin >> dims;
        } 
        
        else if (action == "bedprot") {
            bedprot = 1; // Set bed protection
        } 
        
        else if (action == "armour") {
            std::cout << "0. None \n";
            std::cout << "1. Leather \n";
            std::cout << "2. Iron \n";
            std::cout << "3. Diamond \n";
            std::cout << "4. Emerald \n";
            std::cin >> armour;
        } 
        
        else if (action == "sword") {
            std::cout << "1. Wood \n";
            std::cout << "2. Stone \n";
            std::cout << "3. Iron \n";
            std::cout << "4. Diamond \n";
            std::cout << "5. Emerald \n";
            std::cin >> swordtype;
        } 
        
        else if (action == "beds") {
            std::cout << "How many beds left? (besides yours)\n";
            std::cin >> beds;
        } 
        
        else if (action == "mybed") {
            mybed = 0; // Reset my bed
        } 
        
        else if (action == "bow") {
            bow = 1; // Set bow
        } 
        
        else if (action == "cbow") {
            cbow = 1; // Set crossbow
        } 
        
        else if (action == "aro") {
            std::cin >> arrow;
        }

        // End of variable configuration

        // Beginning of decision-making for armour
        if (iron >= 50 && armour == 0) {
            std::cout << "Buy Leather armour\n";
        }
        if (iron >= 120 && armour == 1) {
            std::cout << "Buy Iron armour\n";
        }
        if (ems >= 8 && armour == 2) {
            std::cout << "Buy Diamond armour\n";
        }
        if (ems >= 40 && armour == 3) {
            std::cout << "Buy Emerald armour\n";
        }

        // End of armour decision-making
    }

 
}
