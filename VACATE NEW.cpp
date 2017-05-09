#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
#include <string.h>
#include <cctype>
#include <cstdio>
#include <cstring>

void intro();
void difficulty();
void easy();
void hard();
int puzzle_select();
void wire(int &);
    void ThreeWire(int &);
    void fourWire(int &);
    void fiveWire(int &);
void symbol(int &);
void morsecode(int &);
void scrabble(int &);
    int scrabbleScore(char *);
    int letterValue(char);
    void sumScore(int &, bool &, int &);
void higher_lower(int &);
    void setColor(unsigned short color);
    bool playGame( void );
    void printGame( int num1 );
    bool getResult( int num1, int num2, char answer );
    std::string intToString( int number);
    void printText(unsigned short textColor, std::string text, unsigned short textColorAfter = 7);
    int points = 0;


int main()
{
    system("title VACATE");
    intro();
    difficulty();
    return 0;
}

void intro()
{
    std::string start;
    std::cout << "  \\           //    //\\       _ _ _ _       //\\       _ _ _ _ _  _ _ _ _   " <<std::endl;
    std::cout << "   \\         //    //  \\     |             //  \\          |     |          " <<std::endl;
    std::cout << "    \\       //    //_  _\\    |            //_  _\\         |     |          " <<std::endl;
    std::cout << "     \\     //    //      \\   |           //      \\        |     |----      " <<std::endl;
    std::cout << "      \\   //    //        \\  |          //        \\       |     |          " <<std::endl;
    std::cout << "       \\ //    //          \\ |_ _ _ _  //          \\      |     |_ _ _ _   " <<std::endl;
    std::cout << "                      Enter any key to continue : " ;
    std::cin >> start;
    Sleep(200);
    system("CLS");
    return;
}

void difficulty()
{
    int start_exit,difficulty;
    std::cout << "Main menu\n1 - START\n2 - EXIT" << std::endl;
    std::cin >> start_exit;
    Sleep(1000);
    system("CLS");
    do{
        if(start_exit == 1){
            std::cout << "Select difficulty\n1 - Easy\n2 - Hard" << std::endl;
            std::cin >> difficulty;
            Sleep(1000);
            system("CLS");
            do{
                if(difficulty == 1){
                    std::cout << "This screen is for your view only.\n\nYou are not allowed to read the vacate manual." << std::endl;
                    Sleep(2000);
                    system("CLS");
                    easy();
                    start_exit = 2;
                    break;
                }
                else if(difficulty == 2){
                    std::cout << "This screen is for your view only.\n\nYou are not allowed to read the vacate manual." << std::endl;
                    Sleep(1000);
                    system("CLS");
                    hard();
                    start_exit = 2;
                    break;
                }
                else{
                    std::cout << "Invalid Difficulty!!!\nSelect difficulty\n1 - Easy\n2 - Hard\nRe-enter : ";
                    std::cin >> difficulty;
                    system("CLS");
                }
            }while(difficulty != 1 || difficulty != 2);
        }
        else if(start_exit == 2){
            std::cout << "GOODBYE" << std::endl;
            break;
        }
        else{
            std::cout << "Invalid Input!!!\n1 - START\n2 - EXIT\nRe-enter : ";
            std::cin >> start_exit;
            system("CLS");
        }
    }while(start_exit != 2);
}

void easy()
{
    srand(time(NULL));
    bool decide;
    int puzzle, fail = 0;
    for(puzzle = 0; puzzle < 5; puzzle++){
        switch(puzzle_select())
        {
            case 0 : wire(fail);break;
            case 1 : symbol(fail);break;
            case 2 : morsecode(fail);break;
            case 3 : scrabble(fail);break;
            case 4 : higher_lower(fail);break;

        }
        if(fail == 3){
            decide = true;
            break;}
    }
    if(decide == true){
        std::cout << "GAME OVER\nYou've got two strike." << std::endl;}
    else{
        std::cout << "Congratulations!!! You have escaped the room.\nYou can go home." << std::endl;}
}

void hard()
{
    srand(time(NULL));
    int puzzle, fail = 0;
    bool decide;
    for(puzzle = 0; puzzle < 7; puzzle++){
        switch(puzzle_select())
        {
            case 0 : wire(fail);break;
            case 1 : symbol(fail);break;
            case 2 : morsecode(fail);break;
            case 3 : scrabble(fail);break;
            case 4 : higher_lower(fail);break;

        }
        if(fail == 3){
            decide = true;
            break;}
    }
    if(decide == true){
        std::cout << "GAME OVER\nYou've got two strike." << std::endl;}
    else{
        std::cout << "Congratulations!!! You have escaped the room.\nYou can go home." << std::endl;}
}

int puzzle_select()
{
    srand(time(NULL));
    int random, k, stop = 0, check[5] = {0,1,2,3,4};
    do{
        random = rand() % 5;
        for(k=0;k<5;k++){
            if(random == check[k]){
                check[k] = 9;
                stop = 0;
                break;
            }
            else{
                stop = 1;
            }
        }
    }while(stop == 1);
    return random;
}

void wire(int &pass)
{
    srand(time(NULL));
    int random;
    random = rand() % 3;
    switch(random)
    {
        case 0 : ThreeWire(pass);break;
        case 1 : fourWire(pass);break;
        case 2 : fiveWire(pass);break;
    }
    Sleep(1200);
    system("CLS");
    return;
}

void ThreeWire(int &fail)
{
    srand(time(NULL));
    int random,ans,wire[3];
    do{
        std::cout << "You got three wire!" << std::endl;
        std::cout << "Strike = " << fail << std::endl;
        for (int i = 0; i < 3; i++){
            random = rand() % 3;
            wire[i] = random;
        }
        for (int i = 0; i < 3; i++){
            switch(wire[i]){
                case 0 : std::cout << "white\t";break;
                case 1 : std::cout << "blue\t";break;
                case 2 : std::cout << "green\t";break;
            }
        }
        std::cout << "\nEnter the number of wire you want to cut: ";
        std::cin >> ans;
        if(wire[2] == 0)
        {
            if(ans == 2)
                {std::cout << "Pass" << std::endl;break;}
            else
                {std::cout << "Fail" << std::endl;fail++;}
        }
        else if(wire[0] == 0 || wire[1] == 0)
        {
            if(ans == 3)
                {std::cout << "Pass" << std::endl;break;}
            else
                {std::cout << "Fail" << std::endl;fail++;}
        }else
        {
            if(ans == 1)
                {std::cout << "Pass" << std::endl;break;}
            else
                {std::cout << "Fail" << std::endl;fail++;}
        }
    }while(fail < 3);
    return;
}
void fourWire(int &fail)
{
    srand(time(NULL));
    int random,ans,blue=0,wire[4];
    bool good;
    do{
        std::cout << "You got four wire!" << std::endl;
        std::cout << "Strike = " << fail << std::endl;
        for (int i = 0; i < 4; i++){
            random = rand() % 4;
            wire[i] = random;
        }
        for (int i = 0; i < 4; i++){
            switch(wire[i]){
                case 0 : std::cout << "red\t";break;
                case 1 : std::cout << "blue\t";break;
                case 2 : std::cout << "green\t";break;
                case 3 : std::cout << "yellow\t";break;
            }
        }
        for (int i = 0; i < 4; i++){
            if(wire[i] == 1)
                blue++;
        }
        std::cout << "\nEnter the number of wire you want to cut: ";
        std::cin >> ans;
        if (blue == 2)
        {
            for (int j = 0; j < 4; j++){
                if (wire[j] == 1){
                    if (ans-1 == j)
                        {std::cout << "Pass" << std::endl;break;
                        good = true;}
                    else
                        {std::cout << "Fail" << std::endl;fail++;break;}
                }
            }
            if(good == true)
                break;
        }
        else if (wire[3] == 0)
        {
            if(ans == 4)
                {std::cout << "Pass" << std::endl;break;}
            else
                {std::cout << "Fail" << std::endl;fail++;}
        }
        else if (wire[2] == 3)
        {
            if(ans == 4)
                {std::cout << "Pass" << std::endl;break;}
            else
                {std::cout << "Fail" << std::endl;fail++;}
        }
        else
        {
            if(ans == 2)
                {std::cout << "Pass" << std::endl;break;}
            else
                {std::cout << "Fail" << std::endl;fail++;}
        }
    }while(fail < 3);
    return;
}
void fiveWire(int &fail)
{
    srand(time(NULL));
    int random,ans,black=0,yellow=0,red=0,wire[5];
    do{
        std::cout << "You got five wire!" << std::endl;
        std::cout << "Strike = " << fail << std::endl;
        for (int i = 0; i < 5; i++){
            random = rand() % 5;
            wire[i] = random;
        }
        for (int i = 0; i < 5; i++){
            switch(wire[i]){
            case 0 : std::cout << "white\t";break;
            case 1 : std::cout << "blue\t";break;
            case 2 : std::cout << "red\t";break;
            case 3 : std::cout << "black\t";break;
            case 4 : std::cout << "yellow\t";break;
            }
        }
        for (int i = 0; i < 5; i++){
            if(wire[i] == 3){
                black++;
            }else if(wire[i] == 4){
                yellow++;
            }else if(wire[i] == 2){
                red++;
            }
        }
        std::cout << "\nEnter the number of wire you want to cut: ";
        std::cin >> ans;
        if (black == 1 && yellow > 1)
        {
            if(ans == 2)
                {std::cout << "Pass" << std::endl;break;}
            else
                {std::cout << "Fail" << std::endl;fail++;}
        }
        else if(black == 0)
        {
            if(ans == 3)
                {std::cout << "Pass" << std::endl;break;}
            else
                {std::cout << "Fail" << std::endl;fail++;}
        }
        else if(red >= 1)
        {
            if(ans == 1)
                {std::cout << "Pass" << std::endl;break;}
            else
                {std::cout << "Fail" << std::endl;fail++;}
        }
        else
        {
            if(ans == 5)
                {std::cout << "Pass" << std::endl;break;}
            else
                {std::cout << "Fail" << std::endl;fail++;break;}
        }
    }while(fail < 3);
    return;
}

void symbol(int &pass)
{
    srand(time(NULL));
    bool good;
    char table[3][7] = {{'%','^','(','$','*','#','@'},{'?','>',')','@','(','&','%'},{'*','%','>','<','-','+','!'}},first_char,second_char,third_char,fourth_char;
    int i,j,k,stop,row_select,column_select;
    row_select = rand() % 3;
    do{
        int  check[7] = {0,1,2,3,4,5,6};
        std::cout << "Strike = " << pass << std::endl;
        std::cout << "Here are some symbols provided." << std::endl;
        for(i=0;i<1;i++){
            for(j=0;j<4;j++){
                do{
                    column_select = rand() % 7;
                    stop = 0;
                    for(k=0;k<7;k++){
                        if(column_select == check[k]){
                            stop = 0;
                            check[k] = 9;
                            break;
                        }
                        else{
                            stop = 1;
                        }
                    }
                }while(stop == 1);
                std::cout << table[row_select][column_select] << "\t";
            }
        }
        std::cout << std::endl << "First : ";
        std::cin >> first_char;
        std::cout << std::endl << "Second : ";
        std::cin >> second_char;
        std::cout << std::endl << "Third : ";
        std::cin >> third_char;
        std::cout << std::endl << "Fourth : ";
        std::cin >> fourth_char;
        for(j=0;j<7;j++){
            if(first_char == table[row_select][j]){
                for(int l=j;l < 7; l++){
                    if(second_char == table[row_select][l]){
                        for(int m=l;m < 7; m++){
                            if(third_char == table[row_select][m]){
                                for(int z=m;z < 7; z++){
                                    if(fourth_char == table[row_select][z]){
                                        std::cout << "You Pass" << std::endl;
                                        good = true;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (good == true)
            {break;}
        else
            {std::cout << "Fail" << std::endl;
            pass++;}
    }while(pass < 3);
    Sleep(1200);
    system("CLS");
}

void morsecode(int &fail)
{
    srand(time(NULL));
    bool pass;
    int ans;
    std::cout << "\t\tWELCOME TO MORSE CODE CHALLENGE!!" << std::endl;
    std::cout << "\nIn this level, you are required to translate the given morse code! " << std::endl;
    do{
        std::cout << "Strike = " << fail << std::endl;
        std::cout << "Code : " << std::endl;
        int random = rand() % 7;
        switch(random)
        {
            case 0 : std::cout << "._..  .  ._  ._.  _." << std::endl << "Password : ";
                    std::cin >> ans;
                    if(ans == 785527){
                        std::cout << "Pass" << std::endl;
                        pass = true;
                        break;}
                    else{
                        std::cout << "Fail" << std::endl;
                        fail++;break;}
            case 1 : std::cout << "._ _.  ._.  _ _ _  _ _.  _ _ _ _." << std::endl << "Password : ";
                    std::cin >> ans;
                    if(ans == 99434){
                        std::cout << "Pass" << std::endl;
                        pass = true;
                        break;}
                    else{
                        std::cout << "Fail" << std::endl;
                        fail++;break;}
            case 2 : std::cout << "_ _.  ._  _  .  ..." << std::endl << "Password : ";
                    std::cin >> ans;
                    if(ans == 173904){
                        std::cout << "Pass" << std::endl;
                        pass = true;
                        break;}
                    else{
                        std::cout << "Fail" << std::endl;
                        fail++;break;}
            case 3 : std::cout << "_...  ._.  .  ._  _._" << std::endl << "Password : ";
                    std::cin >> ans;
                    if(ans == 8760){
                        std::cout << "Pass" << std::endl;
                        pass = true;
                        break;}
                    else{
                        std::cout << "Fail" << std::endl;
                        fail++;break;}
            case 4 : std::cout << "..  ..  .._  _ _" << std::endl << "Password : ";
                    std::cin >> ans;
                    if(ans == 57478){
                        std::cout << "Pass" << std::endl;
                        pass = true;
                        break;}
                    else{
                        std::cout << "Fail" << std::endl;
                        fail++;break;}
            case 5 : std::cout << "_._  ..  _._.  _" << std::endl << "Password : ";
                    std::cin >> ans;
                    if(ans == 4251){
                        std::cout << "Pass" << std::endl;
                        pass = true;
                        break;}
                    else{
                        std::cout << "Fail" << std::endl;
                        fail++;break;}
            case 6 : std::cout << "._ _ _ _  .._ _ _  _ _...  _....  _ _." << std::endl << "Password : ";
                    std::cin >> ans;
                    if(ans == 87642){
                        std::cout << "Pass" << std::endl;
                        pass = true;
                        break;}
                    else{
                        std::cout << "Fail" << std::endl;
                        fail++;break;}
        }
        if(pass == true)
            break;
    }while(fail < 3);
    Sleep(1200);
    system("CLS");
    return;
}

void scrabble(int &pass)
{
    int score,total =0,j;
	bool stop;
    char word[40];
    char *ptr;
    std::cout<<"\t\tWELCOME TO SCRABBLE CHALLENGE!!"<<std::endl;
    while(stop == false)
    {
        if(pass == 3)
            break;
        std::cout << "Strike = " << pass;
        total = 0;
        std::cout<<"\n\nYOU HAVE TO SCORE AT LEAST 100 MARKS TO ESCAPE FROM THIS TRAPPED."<<std::endl;
        for(j=0; j<6; j++)
        {
        std::cout << "\nEnter a word: ";
        std::cin>>word;

        if(word[0] == ' ')
            break;
        ptr = word;
        score = scrabbleScore(ptr);
        std::cout << "The score for '" << word << "' is " << score << "\n";
    	total += score;
    	}
	std::cout<<"\nYour total score is "<<total<<"  ."<<std::endl;
	sumScore(total, stop, pass);
    }
    Sleep(1200);
    system("CLS");
    return;
}
int scrabbleScore(char *word)
{
    int total = 0;
    int length = strlen(word);

    for(int i = 0; i < length; i++)
    {
        total += letterValue(word[i]);
    }
    return total;
}

int letterValue(char letter)
{
    int value = 0;
    switch(letter)
    {
        case 'A': case 'a':
        case 'E': case 'e':
        case 'I': case 'i':
        case 'L': case 'l':
        case 'O': case 'o':
        case 'R': case 'r':
        case 'S': case 's':
        case 'T': case 't':
        case 'U': case 'u':
            value += 1; break;
        case 'D': case 'd':
        case 'G': case 'g':
            value += 2; break;
        case 'B': case 'b':
        case 'C': case 'c':
        case 'M': case 'm':
        case 'P': case 'p':
            value += 3; break;
        case 'F': case 'f':
        case 'H': case 'h':
        case 'V': case 'v':
        case 'W': case 'w':
        case 'Y': case 'y':
            value += 4; break;
        case 'K': case 'k':
            value += 5; break;
        case 'J': case 'j':
        case 'X': case 'x':
            value += 8; break;
        case 'Q': case 'q':
        case 'Z': case 'z':
            value += 10; break;
    }
    return value;
}
void sumScore(int &mark, bool &stop, int &pass)
{
    if(mark<100)
    {
        std::cout<<"HAHAHAHAHAHAHA ! YOU STILL BEING TRAPPED IN THIS GAME !!"<<std::endl;
        pass++;
        return;
    }
	else if(mark>=100)
    {
        std::cout<<"CONGRATULATION ! YOU DID A GREAT JOB TO ESCAPE FROM THIS GAME !"<<std::endl;
        stop = true;
        return;
    }

}

void higher_lower(int &pass)
{
    srand(time(NULL));
    bool userwin = false,done;
    char text[40] = {" You completed the game! Well done!!!\n"};
    char *ptr;
    ptr = text;
    int round = 1;
    do{
            std::cout << "Strike = " << pass << std::endl;
    for( round = 1; round <= 5; round++)
    {
         userwin = playGame();
         if( userwin == false)
         {
             std::cout <<"You lose...\n";
             pass++;
             round = 6;
         }
         else if( round == 5)
         {
            printText( 12, ptr);
            done = true;
            break;
         }
    }
    if(done == true)
        break;
    }while(pass < 3);
    Sleep(1200);
    system("CLS");
    return ;
}

void setColor(unsigned short color)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,color);
}

void printText(unsigned short textColor, std::string text, unsigned short textColorAfter)
{
     setColor( textColor );
     std::cout << text;
     setColor( textColorAfter );
}
bool playGame( void )
{
    bool rightanswer = false;
    //generate random numbers
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;

    printGame( num1 );

    //make sure input is either 'h' or 'l'
    char letter = ' ';
    while( letter != 'h' && letter != 'l' && letter != 'H' && letter != 'L')
    {
       std::cin >> letter;
       letter = tolower(letter);
    }
    rightanswer = getResult( num1, num2, letter );
    return rightanswer;
}

void printGame( int num1 )
{
//   char pointsString[5] = points + "\n";
   std::cout << "Points: ";
   printText(10,  intToString( points)+ "\n" ); //points
   printText(12, intToString( num1 ));
   std::cout << " is the first number." << std::endl;
   std::cout << "H or L?" << std::endl;
}

bool getResult( int num1, int num2, char answer )
{
     bool userwin = false;
     printText(12, intToString( num2 ) );
     std::cout << " is the second number." << std::endl;

     if( answer == 'h' && num2 >= num1 || answer == 'l' && num2 <= num1 || answer == 'H' && num2 >= num1 || answer == 'L' && num2 <= num1 )
     {
        std::cout << " You win! Well done!" << std::endl;
        points++;
        userwin = true;
        }
     else
     {
         points = 0;
     }
     std::cout << "\n";
     return userwin;
}
std::string intToString( int number)
{
       char buffer[20];
       sprintf(buffer, "%d", number);
       return buffer;
}
