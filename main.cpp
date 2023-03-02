// Pokemon in C++

#include <unistd.h>
#include <iostream>
#include <iomanip>
#include <stdlib.h>


using namespace std;

void titleScreen(){

cout << "\n\n";
cout << "       ██████╗░░█████╗░██╗░░██╗███████╗███╗░░░███╗░█████╗░███╗░░██╗" << endl;
cout << "       ██╔══██╗██╔══██╗██║░██╔╝██╔════╝████╗░████║██╔══██╗████╗░██║" << endl;
cout << "       ██████╔╝██║░░██║█████═╝░█████╗░░██╔████╔██║██║░░██║██╔██╗██║" << endl;
cout << "       ██╔═══╝░██║░░██║██╔═██╗░██╔══╝░░██║╚██╔╝██║██║░░██║██║╚████║" << endl;
cout << "       ██║░░░░░╚█████╔╝██║░╚██╗███████╗██║░╚═╝░██║╚█████╔╝██║░╚███║" << endl;
cout << "       ╚═╝░░░░░░╚════╝░╚═╝░░╚═╝╚══════╝╚═╝░░░░░╚═╝░╚════╝░╚═╝░░╚══╝" << endl;

cout << "           ███████████████████████████████████████████████████ " << endl;
cout << "           █▀▀▀▀▀████▄─▄█▄─▀█▄─▄███─▄▄▄─███░█████░█████▀▀▀▀▀██ " << endl;
cout << "           ███████████─███─█▄▀─████─███▀█▄▄░▄▄█▄▄░▄▄██████████ " << endl;
cout << "           ▀▀▀▀▀▀▀▀▀▀▄▄▄▀▄▄▄▀▀▄▄▀▀▀▄▄▄▄▄▀▀▀▄▀▀▀▀▀▄▀▀▀▀▀▀▀▀▀▀▀▀ " << endl;

cout << "\n\n";
  
}

void dialogueSystem(){


string dialogueInput; // String DialogueInput
;  // boolean dialogueCheck
string dialogueRequest = "- Type E to Continue";
bool dialogueCheck = false;

cout << dialogueRequest << endl;
cin >> dialogueInput;

dialogueCheck = false;

while (dialogueCheck == false){

if (dialogueInput == "e" || dialogueInput == "E"){

  dialogueCheck = true;
} else {

cout << "bruh";
cin >> dialogueInput;

}

} 
  
}

int main() {

// Intro Card
  
titleScreen();

sleep(3);

// Credits

cout << "- Coded in C++ by Ele \n- Original Game made by GameFreak and Nintendo \n" << endl;

sleep(3);

// Variables

string playerName; // String playerName - inputs the user's name
char enterKey;
string gameOption = "0"; // String gameStart - what option does the user 

//Setting Up The Game

while ((gameOption != "1") && (gameOption != "2") && (gameOption != "3")){

cout << "Would you like to Start your Adventure? \n" << "(1) Yes " << " (2) No " << "(3) Controls" << endl;
cin >> gameOption;


// Controls


if (gameOption == "3"){

cout << "\n\n";
cout << "Console Controls: \n" << endl;
cout << "Type E in Console - Continuing Dialogue / Interacting \n";
cout << "Type W in Console - Move Up on the Map \n";
cout << "Type A in Console - Move Left on the Map \n";
cout << "Type S in Console - Move Down on the Map \n";
cout << "Type D in Console - Move Left on the Map \n";

cout << "\n\n";
gameOption = "0";

}

}

// Starting the Game
if (gameOption == "1"){

cout << "Initializing...";

cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

// Quitting the Game 

if (gameOption == "2"){

cout << "\nGoodbye!";
return 0;
}

// Introduction Text




cout << "As you traverse to a shining light pointed downwards, \n you see a strange figure in a cloak... \n" << endl;

dialogueSystem();

cout << "\n\n\n\n\n";

// ASCII Art of Proffessor Oak

cout << "     @@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@" << endl;
cout << "     @@@@@@@@@@@@@@@@&,,,,,,,,,,*@@@@@@@@" << endl;
cout << "     @@@@@@@@@@@@@@@@@*/,,*(,,,,,,@@@@@@@" << endl;
cout << "     @@@@@@@@@@@@@@@@@@#*#(,%#(,#&@@@@@@@" << endl;
cout << "     @@@@@@@@@@@@@@@@@@(*,#,,,,,%@@@@@@@@" << endl;
cout << "     @@@@@@             %,,(,,,&         " << endl;
cout << "     @@@@           (.. ((&/%%%,,*./,    " << endl;
cout << "     @,,,(       .   ,  #(%(((%      . * " << endl;
cout << "     &#(,,*/      ,    ((((((((  (  /   /" << endl;
cout << "      ,,*,,,      &    #((((((.     * ,  ." << endl;
cout << "       ,,,,/ .   .   , #((((((      ,.     (" << endl;
cout << "        ,,/,,   ,,   , ((((((( ////////##   " << endl;
cout << "          /,,,,,,&    .(((((((.(#######%#  ,(" << endl;
cout << "                 (     ((&(((( %(((*/**,/,,, " << endl;
cout << "                 *     */#%(/*   ,*,,/,/(,   " << endl;
cout << "                       *******        ,%,    " << endl;
cout << "                      ,******,               " << endl;
cout << "                      ,**/%(**         .     " << endl;
cout << "                       **//#**.        /     " << endl;
cout << "                  .    ***/%**/   (    #     " << endl;
cout << "                       ****(**/        (     " << endl;
cout << "                      .****/#**        (     " << endl;
cout << "                 *    ,********(    .*#      " << endl;
cout << "                   ********  //*******#      " << endl;
cout << "                   #*#*****   (****%*,@@@@@@@" << endl;
cout << "             %     %*******.  &*******@@@@@@@" << endl;
cout << "      @@@@@@@@@@@@@@(******@@@@******(@@@@@@@" << endl;
cout << "      @@@@@@@@@@@@@(#/*****@@@@*******@@@@@@@" << endl;
cout << "      @@@@@@@@@@@#######%&&@@@@@&##&&%#&@@@@@" << endl;

cout << "\n\n\n";

cout << "???: Hello there! Welcome to the world of POKEMON!" << endl;

dialogueSystem();

cout << "Proffessor Oak: My name is Oak, but everyone just calls me the Pokemon Professor." << endl;

dialogueSystem();

cout << "Proffessor Oak: This world... is inhabited far and wide by creatures called Pokémon!" << endl;

dialogueSystem();

cout << "Proffessor Oak: For some people, Pokémon are pets. Other use them for battling. As for myself… I study Pokémon as a profession." << endl;

dialogueSystem();

cout << "Proffessor Oak: First, what is your name? \n" << endl;

cout << setw(15) << "Y" << "our name is ";

cin >> playerName; // typing in the Player's Name

cout << "\nProffessor Oak: So... Your name's " << playerName << "?\n" << endl;

// Player Name User Verify

gameOption = "0";

while (gameOption != "1" && gameOption != "2"){

cout << setw(20) << "T" << "ype in: \n" << setw(15) << "(" << "1) Yes" << setw(5) << "(" << "2) No " << endl; 

cin >> gameOption;

if (gameOption == "2"){

cout << setw(15) << "S" << "o then, your name must be ";

cin >> playerName; // typing in the Player's Name

cout << "\nProffessor Oak: So... Your name's " << playerName << "?\n" << endl;

gameOption = "0";

}

if (gameOption == "1"){

cout << "\n\n";

}

}

cout << "Proffessor Oak: Ah okay!" << endl;

dialogueSystem();

cout << "Proffessor Oak: You're " << playerName << " who's moving to my hometown in GREEN GROVE TOWN. I get it now!" << endl;

dialogueSystem();

cout << "Proffessor Oak: All right. Are you ready?" << endl;

dialogueSystem();

cout << "Proffessor Oak: Your very own adventure is about to unfold. " << endl;

dialogueSystem();

cout << "Proffessor Oak: Take courage, and leap into the world of POKEMON where dreams, adventure, and friendships await! " << endl;

dialogueSystem();

cout << "Proffessor Oak: Well, I'll be expecting you later. Come see me in my POKEMON Lab." << endl;

dialogueSystem();
  
// Grid Coordinate

string InteractDialogue = " ";
bool inputCheck = true;
int gridCoord = 72;
string playerInput;

while (gridCoord != 10 || gridCoord != 21){

// Setting up the variables for Bedroom Map

// Setting up the Map - Each grid is 3 char long

//Bedroom 2nd Floor
  
  // Row 1

string Bed2F_A1 = "[PC";
string Bed2F_B1 = "--]";
string Bed2F_C1 = "║-║";
string Bed2F_D1 = "|--";
string Bed2F_E1 = "--|";
string Bed2F_F1 = "   ";
string Bed2F_G1 = "   ";
string Bed2F_H1 = "║ S";
string Bed2F_I1 = "TAI";
string Bed2F_J1 = "RS ";
string Bed2F_K1 = "░░ ";


// Row 2

string Bed2F_A2 = "---";
string Bed2F_B2 = "   ";
string Bed2F_C2 = "   ";
string Bed2F_D2 = "   ";
string Bed2F_E2 = "   ";
string Bed2F_F2 = "   ";
string Bed2F_G2 = "   ";
string Bed2F_H2 = "║ S";
string Bed2F_I2 = "TAI";
string Bed2F_J2 = "RS ";
string Bed2F_K2 = "░░ ";

// Row 3

string Bed2F_A3 = "   ";
string Bed2F_B3 = "   ";
string Bed2F_C3 = "   ";
string Bed2F_D3 = "   ";
string Bed2F_E3 = "   ";
string Bed2F_F3 = "   ";
string Bed2F_G3 = "   ";
string Bed2F_H3 = "╚==";
string Bed2F_I3 = "===";
string Bed2F_J3 = "===";
string Bed2F_K3 = "   ";

// Row 4

string Bed2F_A4 = "   ";
string Bed2F_B4 = "   ";
string Bed2F_C4 = "   ";
string Bed2F_D4 = "░░░";
string Bed2F_E4 = "░░░";
string Bed2F_F4 = "░░░";
string Bed2F_G4 = "░░░";
string Bed2F_H4 = "░░░";
string Bed2F_I4 = "   ";
string Bed2F_J4 = "   ";
string Bed2F_K4 = "   ";

// Row 5

string Bed2F_A5 = "   ";
string Bed2F_B5 = "BED";
string Bed2F_C5 = "   ";
string Bed2F_D5 = "░░░";
string Bed2F_E5 = "░░░";
string Bed2F_F5 = "T V";
string Bed2F_G5 = "░░░";
string Bed2F_H5 = "░░░";
string Bed2F_I5 = "   ";
string Bed2F_J5 = "   ";
string Bed2F_K5 = "   ";

// Row 6

string Bed2F_A6 = "   ";
string Bed2F_B6 = "BED";
string Bed2F_C6 = "   ";
string Bed2F_D6 = "░░░";
string Bed2F_E6 = "░░░";
string Bed2F_F6 = "[=]";
string Bed2F_G6 = "░░░";
string Bed2F_H6 = "░░░";
string Bed2F_I6 = "   ";
string Bed2F_J6 = "   ";
string Bed2F_K6 = "   ";

// Row 7

string Bed2F_A7 = "   ";
string Bed2F_B7 = "   ";
string Bed2F_C7 = "   ";
string Bed2F_D7 = "░░░";
string Bed2F_E7 = "░░░";
string Bed2F_F7 = "░░░";
string Bed2F_G7 = "░░░";
string Bed2F_H7 = "░░░";
string Bed2F_I7 = "   ";
string Bed2F_J7 = "   ";
string Bed2F_K7 = "   ";

// Row 8

string Bed2F_A8 = "   ";
string Bed2F_B8 = "   ";
string Bed2F_C8 = "   ";
string Bed2F_D8 = "   ";
string Bed2F_E8 = "   ";
string Bed2F_F8 = "   ";
string Bed2F_G8 = "   ";
string Bed2F_H8 = "   ";
string Bed2F_I8 = "   ";
string Bed2F_J8 = "   ";
string Bed2F_K8 = "   ";

// Detecting Player Collision

switch (gridCoord){

  case -4:
  if (playerInput == "W" || playerInput == "w"){

      gridCoord = gridCoord + 11;
    
  }
  break;

  case -5:
  if (playerInput == "W" || playerInput == "w"){

      gridCoord = gridCoord + 11;
    
  }
  break;

  case 0:
  if (playerInput == "W" || playerInput == "w"){

    gridCoord = gridCoord + 11;
    
  }
  break;

  case 1:
  if (playerInput == "W" || playerInput == "w"){

    gridCoord = gridCoord + 11;
    
  }
  break;

  case 2:
  if (playerInput == "W" || playerInput == "w"){

    gridCoord = gridCoord + 11;
    
  }
  break;

  case 3:
  if (playerInput == "W" || playerInput == "w"){

    gridCoord = gridCoord + 11;
    
  }
  break;

  case 4:
  if (playerInput == "W" || playerInput == "w"){

    gridCoord = gridCoord + 11;
    
  }
  break;

  case 5:
  if (playerInput == "W" || playerInput == "w"){

    gridCoord = gridCoord + 11;
    
  }
  break;

  if (playerInput == "A" || playerInput == "a"){

    gridCoord = gridCoord + 1;
    
  }
  break;

  case 8:
  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }
  break;
  

  case 11:
  if (playerInput == "A" || playerInput == "a"){

    gridCoord = gridCoord + 1;
    
  }
  break;

  case 12:
  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }
  break;

  case 19:
  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }
  break;

  case 22:
  if (playerInput == "A" || playerInput == "a"){

    gridCoord = gridCoord + 1;
    
  }
  break;

  case 23:
  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }
  break;

  case 30:
  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }

  if (playerInput == "W" || playerInput == "w"){

    gridCoord = gridCoord + 11;
    
  }
  break;

  case 31:
  if (playerInput == "W" || playerInput == "w"){

    gridCoord = gridCoord + 11;
    
  }
  break;

  case 32:
  if (playerInput == "W" || playerInput == "w"){

    gridCoord = gridCoord + 11;
    
  }

    if (playerInput == "A" || playerInput == "a"){

    gridCoord = gridCoord + 1;
    
  }
    
  break;
  
  case 33:
  if (playerInput == "A" || playerInput == "a"){

    gridCoord = gridCoord + 1;
    
  }
  break;

  case 34:
  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }
  break;

  case 44:
  if (playerInput == "A" || playerInput == "a"){

    gridCoord = gridCoord + 1;
    
  }
  break;

  case 45:
  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }
  break;

  case 46:
  if (playerInput == "A" || playerInput == "a"){

    gridCoord = gridCoord + 1;
    
  }

  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }
  break;

  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }
  break;

  if (playerInput == "S" || playerInput == "s"){

    gridCoord = gridCoord - 11;
    
  }
  break;
  
  case 50:
  if (playerInput == "A" || playerInput == "a"){

    gridCoord = gridCoord + 1;
    
  }

  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }

  if (playerInput == "S" || playerInput == "s"){

    gridCoord = gridCoord - 11;
    
  }
  break;

  case 55:
  if (playerInput == "A" || playerInput == "a"){

    gridCoord = gridCoord + 1;
    
  }
  break;

  case 56:
  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }
  break;

  case 57:
  if (playerInput == "A" || playerInput == "a"){

    gridCoord = gridCoord + 1;
    
  }

  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }

  if (playerInput == "W" || playerInput == "w"){

    gridCoord = gridCoord + 11;
    
  }
  break;

  case 61:
  if (playerInput == "A" || playerInput == "a"){

    gridCoord = gridCoord + 1;
    
  }

  if (playerInput == "W" || playerInput == "w"){

    gridCoord = gridCoord + 11;
    
  }

  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }
  break;

  case 66:
  if (playerInput == "A" || playerInput == "a"){

    gridCoord = gridCoord + 1;
    
  }
  break;

  case 67:
  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }
  break;
  
  case 77:
  if (playerInput == "A" || playerInput == "a"){

    gridCoord = gridCoord + 1;
    
  }
  break;

  case 78:
  if (playerInput == "D" || playerInput == "d"){

    gridCoord = gridCoord - 1;
    
  }
  break;

  case 89:
  if (playerInput == "S" || playerInput == "s"){

    gridCoord = gridCoord - 11;
    
  }
  break;

  case 90:
  if (playerInput == "S" || playerInput == "s"){

    gridCoord = gridCoord - 11;
    
  }
  break;

  case 91:
  if (playerInput == "S" || playerInput == "s"){

    gridCoord = gridCoord - 11;
    
  }
  break;

  case 92:
  if (playerInput == "S" || playerInput == "s"){

    gridCoord = gridCoord - 11;
    
  }
  break;

  case 93:
  if (playerInput == "S" || playerInput == "s"){

    gridCoord = gridCoord - 11;
    
  }
  break;

  case 94:
  if (playerInput == "S" || playerInput == "s"){

    gridCoord = gridCoord - 11;
    
  }
  break;

  case 95:
  if (playerInput == "S" || playerInput == "s"){

    gridCoord = gridCoord - 11;
    
  }
  break;

  case 96:
  if (playerInput == "S" || playerInput == "s"){

    gridCoord = gridCoord - 11;
    
  }
  break;

  case 97:
  if (playerInput == "S" || playerInput == "s"){

    gridCoord = gridCoord - 11;
    
  }
  break;

  case 98:
  if (playerInput == "S" || playerInput == "s"){

    gridCoord = gridCoord - 11;
    
  }
  break;

  case 99:
  if (playerInput == "S" || playerInput == "s"){

    gridCoord = gridCoord - 11;
    
  }
  break;


  
}

// Detecting Player Coords
switch (gridCoord){ 

  case 6:
  Bed2F_F1 = "YOU";
  break;

  case 7:
  Bed2F_G1 = "YOU";
  break;

  case 11:
  Bed2F_K1 = "YOU";
  break;

  case 12:
  Bed2F_A2 = "YOU";
  break;

  case 13:
  Bed2F_B2 = "YOU";
  break;

  case 14:
  Bed2F_C2 = "YOU";
  break;

  case 15:
  Bed2F_D2 = "YOU";
  break;
  
  case 16:
  Bed2F_E2 = "YOU";
  break;
  
  case 17:
  Bed2F_F2 = "YOU";
  break;

  case 18:
  Bed2F_G2 = "YOU";
  break;

  case 22:
  Bed2F_K2 = "YOU";
  break;
  
  case 23:
  Bed2F_A3 = "YOU";
  break;

  case 24:
  Bed2F_B3 = "YOU";
  break;

  case 25:
  Bed2F_C3 = "YOU";
  break;

  case 26:
  Bed2F_D3 = "YOU";
  break;

  case 27:
  Bed2F_E3 = "YOU";
  break;

  case 28:
  Bed2F_F3 = "YOU";
  break;

  case 29:
  Bed2F_G3 = "YOU";
  break;

  case 33:
  Bed2F_K3 = "YOU";
  break;

  case 34:
  Bed2F_A4 = "YOU";
  break; 

  case 35:
  Bed2F_B4 = "YOU";
  break;

  case 36:
  Bed2F_C4 = "YOU";
  break;

  case 37:
  Bed2F_D4 = "YOU";
  break;

  case 38:
  Bed2F_E4 = "YOU";
  break;

  case 39:
  Bed2F_F4 = "YOU";
  break;

  case 40:
  Bed2F_G4 = "YOU";
  break;

  case 41:
  Bed2F_H4 = "YOU";
  break;

  case 42:
  Bed2F_I4 = "YOU";
  break;

  case 43:
  Bed2F_J4 = "YOU";
  break;

  case 44:
  Bed2F_K4 = "YOU";
  break;

  case 45:
  Bed2F_A5 = "YOU";
  break;
  case 47:
  Bed2F_C5 = "YOU";
  break;

  case 48:
  Bed2F_D5 = "YOU";
  break;

  case 49:
  Bed2F_E5 = "YOU";
  break;

  case 51:
  Bed2F_G5 = "YOU";
  break;

  case 52:
  Bed2F_H5 = "YOU";
  break;

  case 53:
  Bed2F_I5 = "YOU";
  break;

  case 54:
  Bed2F_J5 = "YOU";
  break;

  case 55:
  Bed2F_K5 = "YOU";
  break;

  case 56:
  Bed2F_A6 = "YOU";
  break;

  case 58:
  Bed2F_C6 = "YOU";
  break;

  case 59:
  Bed2F_D6 = "YOU";
  break;

  case 60:
  Bed2F_E6 = "YOU";
  break;

  case 62:
  Bed2F_G6 = "YOU";
  break;

  case 63:
  Bed2F_H6 = "YOU";
  break;

  case 64:
  Bed2F_I6 = "YOU";
  break;

  case 65:
  Bed2F_J6 = "YOU";
  break;

  case 66:
  Bed2F_K6 = "YOU";
  break;

  case 67:
  Bed2F_A7 = "YOU";
  break;

  case 68:
  Bed2F_B7 = "YOU";
  break;

  case 69:
  Bed2F_C7 = "YOU";
  break;

  case 70:
  Bed2F_D7 = "YOU";
  break;

  case 71:
  Bed2F_E7 = "YOU";
  break;

  case 72:
  Bed2F_F7 = "YOU";
  break;

  case 73:
  Bed2F_G7 = "YOU";
  break;

  case 74:
  Bed2F_H7 = "YOU";
  break;

  case 75:
  Bed2F_I7 = "YOU";
  break;

  case 76:
  Bed2F_J7 = "YOU";
  break;

  case 77:
  Bed2F_K7 = "YOU";
  break;

  case 78:
  Bed2F_A8 = "YOU";
  break;

  case 79:
  Bed2F_B8 = "YOU";
  break;

  case 80:
  Bed2F_C8 = "YOU";
  break;

  case 81:
  Bed2F_D8 = "YOU";
  break;

  case 82:
  Bed2F_E8 = "YOU";
  break;

  case 83:
  Bed2F_F8 = "YOU";
  break;

  case 84:
  Bed2F_G8 = "YOU";
  break;

  case 85:
  Bed2F_H8 = "YOU";
  break;

  case 86:
  Bed2F_I8 = "YOU";
  break;

  case 87:
  Bed2F_J8 = "YOU";
  break;

  case 88:
  Bed2F_K8 = "YOU";
  break;
  
}

cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  
cout << setw(25) << " " << "╔═════════════════════════════════╗" << endl;
  
cout << setw(25) << " " << "║" << Bed2F_A1 << Bed2F_B1 << Bed2F_C1 << Bed2F_D1 << Bed2F_E1 << Bed2F_F1 << Bed2F_G1 << Bed2F_H1 << Bed2F_I1 << Bed2F_J1 << Bed2F_K1 << "║" << endl;
  
cout << setw(25) << " " << "║" << Bed2F_A2 << Bed2F_B2 << Bed2F_C2 << Bed2F_D2 << Bed2F_E2 << Bed2F_F2 << Bed2F_G2 << Bed2F_H2 << Bed2F_I2 << Bed2F_J2 << Bed2F_K2 << "║" << endl;

cout << setw(25) <<  " " << "║" << Bed2F_A3 << Bed2F_B3 << Bed2F_C3 << Bed2F_D3 << Bed2F_E3 << Bed2F_F3 << Bed2F_G3 << Bed2F_H3 << Bed2F_I3 << Bed2F_J3 << Bed2F_K3 << "║" << endl;

cout << setw(25) <<  " " << "║" << Bed2F_A4 << Bed2F_B4 << Bed2F_C4 << Bed2F_D4 << Bed2F_E4 << Bed2F_F4 << Bed2F_G4 << Bed2F_H4 << Bed2F_I4 << Bed2F_J4 << Bed2F_K4 << "║" << endl;

cout << setw(25) <<  " " << "║" << Bed2F_A5 << Bed2F_B5 << Bed2F_C5 << Bed2F_D5 << Bed2F_E5 << Bed2F_F5 << Bed2F_G5 << Bed2F_H5 << Bed2F_I5 << Bed2F_J5 << Bed2F_K5 << "║" << endl;

cout << setw(25) <<  " " << "║" << Bed2F_A6 << Bed2F_B6 << Bed2F_C6 << Bed2F_D6 << Bed2F_E6 << Bed2F_F6 << Bed2F_G6 << Bed2F_H6 << Bed2F_I6 << Bed2F_J6 << Bed2F_K6 << "║" << endl;

cout << setw(25) <<  " " << "║" << Bed2F_A7 << Bed2F_B7 << Bed2F_C7 << Bed2F_D7 << Bed2F_E7 << Bed2F_F7 << Bed2F_G7 << Bed2F_H7 << Bed2F_I7 << Bed2F_J7 << Bed2F_K7 << "║" << endl;

cout << setw(25) <<  " " << "║" << Bed2F_A8 << Bed2F_B8 << Bed2F_C8 << Bed2F_D8 << Bed2F_E8 << Bed2F_F8 << Bed2F_G8 << Bed2F_H8 << Bed2F_I8 << Bed2F_J8 << Bed2F_K8 << "║" << endl;
  
cout << setw(25) << " " << "╚═════════════════════════════════╝" << endl;

// Interact Dialogue
cout << "\t\t" << InteractDialogue << endl;

cout << "\n\n";
cout << "\t\t Type Controls: (W) - Up | (A) Left | (S) - Down | (D) Right" << endl;

cout << gridCoord << endl;

cout << "\n\n\n\n\n\n\n\n\n";

// Player Input
cin >> playerInput;

inputCheck = false;

while (inputCheck == false){

  if (playerInput == "W" || playerInput == "w"){

gridCoord = gridCoord - 11;
inputCheck = true;
  
} else if (playerInput == "A" || playerInput == "a"){

gridCoord = gridCoord - 1;
inputCheck = true;
  
} else if (playerInput == "S" || playerInput == "s"){

gridCoord = gridCoord + 11;
inputCheck = true;
  
} else if (playerInput == "D" || playerInput == "d"){

gridCoord = gridCoord + 1;
inputCheck = true;
  
} else {

cout << "Please type in the correct input!" << endl;
    
cin >> playerInput; 

  }
}

cout << "\n\n\n\n\n\n\n\n\n\n\n\n";

if (gridCoord == 21 || gridCoord == 10){

  break;
}
}

  // This is kind of where I had stopped working on this project, used my first coding semester class to build this up. Perhaps if there is more support into this I could attempt to finish it, but I have other projects. Just watned to showcase that something like this for me isnt impossible. :)

return 0;  
}