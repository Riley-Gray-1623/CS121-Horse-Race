#include <iostream>
#include <cstdlib>
#include <ctime>


void advance(int horseNum, int* horses);



void printLane(int horseNum, int* horses);


bool isWinner(int horseNum, int* horses);


const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;


int main(){
	std::cout << "Race Horse Game " << std:: endl;
	srand(time(NULL));

	int horses[NUM_HORSES] = {0, 0, 0, 0, 0};

 
for (int i = 0; i < NUM_HORSES; i++){
	printLane(i, horses);
}

bool keepGoing = true;
while (keepGoing){
	std::cout << "Hit enter to try again";
	std::cin.ignore();


	for (int i = 0; i < NUM_HORSES; i++){
		advance(i, horses);
		printLane(i, horses);

		if (isWinner(i, horses)){
			keepGoing = false;
		}
	}
}
	return 0;

}

void printLane(int horseNum, int* horses){
	for (int i = 0; i < TRACK_LENGTH; i++){
		if (i == horses[horseNum]){
			std::cout << horseNum;
		} else{
			std::cout << ".";
		}
	}
	std::cout << std::endl;
}

void advance(int horseNum, int* horses){
	int coin = rand() % 2;
	horses[horseNum] += coin;
}

bool isWinner(int horseNum, int* horses){
	bool result = false;

	if (horses[horseNum] >= TRACK_LENGTH){
		result = true;
		std::cout << horseNum<< " is the winner" << std::endl;
	}
	
	return result;
}




