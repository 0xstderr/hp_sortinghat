/*
C++ program which asks you questions and place you in one of the four Harry Potter houses based on your answers.
*/


//Libraries

#include <iostream>

// main function

int main() {

  //declaring and initializing variables used for countings points.

  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  //variable used for storing answers to each questions.

  int answer1, answer2, answer3, answer4;

  //tells that the quiz has started

  std::cout << "The Sorting Hat Quiz!";

  // first question

  std::cout << "\n\nQ1) When I'm dead, I want people to remember me as:\n\n";

  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";

  std::cout << "Please type your answer : ";

  // saving user input into the variable answer1

  std::cin >> answer1;

  //conditional switch statement to increment one of the four house variables based on the value provided above
  
  switch(answer1) {

    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }

  //second question

  std::cout << "\n\nQ2) Dawn or Dusk?\n\n";

  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";
  std::cout << "Please type your answer : ";

  // saving user input into the variable answer2

  std::cin >> answer2;

  //conditional switch statement to increment one of the four house variables based on the value provided above

  switch(answer2) {
    
    case 1:
      gryffindor++;
      ravenclaw++;
      break;
    case 2:
      hufflepuff++;
      slytherin++;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }

  //third question

  std::cout << "\n\nQ3) Which kind of instrument most pleases your ear?\n\n";

  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n";

  std::cout << "Please type your answer : ";

  // saving user input into the variable answer3

  std::cin >> answer3;

  //conditional switch statement to increment one of the four house variables based on the value provided above

  switch(answer3) {

    case 1:
      slytherin++;
      break;
    case 2:
      hufflepuff++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }

  //fourth question

  std::cout << "Q4) Which road tempts you most?\n\n";
  
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dark, lantern-lit alley\n";
  std::cout << "3) The twisting, leaf-strewn path through woods\n";
  std::cout << "4) The cobbled street lined (ancien buildings)\n";

  std::cout << "Please type your answer : ";

  // saving user input into the variable answer4

  std::cin >> answer4;

  //conditional switch statement to increment one of the four house variables based on the value provided above

  switch(answer4) {

    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      gryffindor++;
      break;
    case 4:
      ravenclaw++;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }
  
  //declaring the integer max and initializing its value to 0

  int max = 0;

  //declaring a string named "house"

  std::string house;

  //conditional if statement which change the value of max and house accordingly to the highest value of the four house variables
  
  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }
  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max ) {
    max = slytherin;
    house = "Slytherin";
  }

  //outputting the result
  
  std::cout << house << "!\n";

  return 0;
}

//End of the program.
