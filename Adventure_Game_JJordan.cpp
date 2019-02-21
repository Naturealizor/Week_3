// Jacob Jordan 
// IN200-12850 C++
// Created 2/10/19

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	//Seed the random number gen 
	//And generate the random num
	srand(static_cast<unsigned int>(time(0)));
	int randomNum = rand();

	int health = 10;
	int attack;
	int block;
	int turns = 0;
	char input;
	
	cout << "Welcome player! \nThis is the mysterious land of 'Any Game You'd Like This To Be' and it is filled with dangers galore! \nReady or not I'm throwing you in right away, good luck!" << endl;
	
	while (health > 0 && turns <= 3) {
		attack = (randomNum % 5);
		block = (randomNum % 4);

		++turns;
		
		cout << attack;
	 	cout << block << "\n";
		 
		 
		if (block < attack) {
			// attack = (randomNum % 4);
			// block = (randomNum % 4);
			health -= attack;

			cout << "Oh no! Their attack broke through your defenses and you took " << attack << " damage. Now you only have " << health << " health left" << endl;

			
		} else {
			cout << "Your block came up as " << block << " and was successful! Nice job!" << endl;
		}
	}

		cout << "Wow that was a crazy battle! Press 'C' to continue on" << endl;
		cin >> input;

		if (input == 'C' || input == 'c') {
		if (health <= 0) {
			cout << "Uh Oh, it looks like your health has reached zero and in Souls fashion...\nYou Have Died" << endl;
		} else {
			cout << "Congratulations!!! You have defeated that super crazy B.A. monster and saved the land of 'Any Game You'd Like This To Be' and now you can ride off into the sunset or whatever it is you adventurers do. Peace be with you. " << endl;
		}
	}

	//  cout << attack;
	//  cout << block;
}






// welcome the player
// set up the game
//     int health = 10, attack, block, iterator
//     seed the random number generator
// start the loop
//     add 1 to the iterator
//     start the encounter
//         randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
//         if block is greater or equal to attack, successful block
//         otherwise, subtract attack value from health.
// keep looping while health is greater than zero and fewer than 4 turns have happened

// if health is greater than 0, congratulate player
// otherwise, tell the player they're dead.