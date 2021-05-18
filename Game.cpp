#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
  std::cout << "HOW LUCKY ARE YOU?:\n\n";


//Creates a loop that generates the same sequence of random numbers
  srand(time(NULL));

//Returns a random value anywhere between 0 and 10
  int answer = std::rand() % 10;

//Links the variable and class, int answer, to one of the answers below
  std::cout << answer;

 //Creates if statements pretty much saying if random number generator hits a specific value, then it must output the lucky answer
  if (answer == 0) {
    std::cout << " YOU WILL LOSE A VALUABLE ITEM ANYTIME IN THE WEEK.\n";
  }
    else if (answer == 1) {
      std::cout << " ALL TIRES OF YOUR CAR WILL BLOW OUT TODAY.\n";
    }
    else if (answer == 2) {
      std::cout << " YOU WILL RUN ACROSS SOMEONE WHO WILL CHANGE YOUR LIFE THIS WEEK.\n";
    }
    else if (answer == 3) {
      std::cout << " YOU'RE JUST ASSED OUT THIS WHOLE MONTH.\n";
    }
    else if (answer == 4) {
      std::cout << " THE NEXT MEAL YOU EAT WILL GIVE YOU FOOD POISONING.\n";
    }
    else if (answer == 5) {
      std::cout << " THE GIRL OF YOUR DREAMS WILL APPROACH YOU TODAY.\n";
    }
    else if (answer == 6) {
      std::cout << " YOU WILL GET THE JOB OF YOUR DREAMS AT THE END OF THE YEAR.\n";
    }
    else if (answer == 7) {
      std::cout << " IN THE NEXT 30 MINUTES, YOU WILL ACCIDENTLY DROP YOUR PHONE IN A SEWER.\n";
    }
    else if (answer == 8) {
      std::cout << " LUCK IS JUST NOT WHO YOU ARE OR WHAT YOU'RE ABOUT.\n";
    }
    else if (answer == 9) {
      std::cout << " $10,000 WILL MAGICALLY FALL IN YOUR LAP TONIGHT.\n";
    }
      else {
       std::cout << " YOUR HEAD WILL GROW BY 3 INCHES BY THE END OF THE WEEK.\n";
      }
}
