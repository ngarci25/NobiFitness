#include <iostream>


struct Nobi {
    int handsome;
    unsigned long funnines;
    unsigned short weight;
};


 void printTest(int test)
    {
        std::cout << "Enter a number";
        int input;
        std::cin >> input;
        std::cout <<"double above is:"<<std::endl;
        std::cout << "Test function: "<< test << std::endl;
    } 
int main() //main function
{
    std::cout << "Hello world\n";
    int counter;
    char charvar1 = 'A';
    counter =25;
     int test;
    test=1;
    test= counter>3 ? 4:5;
    std::cout << test << std::endl;
            std::cout << "line 12 in" << std::endl;

    int userinput;

   Nobi beto;
   beto.handsome=100;
   beto.funnines=150;
   beto.weight=187;


    do{
        std::cout << "TYPE in" << std::endl;

        std::cin >> userinput;
    }
    while (userinput!=14);

    printTest(beto.handsome);

    return 0;
    
}