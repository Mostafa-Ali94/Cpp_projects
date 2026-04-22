#include <iostream>



int main()
{

char operation;
int number1;
int number2;


char go_on;
bool end_loop = false;

std::cout << "Welcome to the smart calculator!" <<std::endl;
std::cout << "*************************************" <<std::endl;

while (end_loop == false)
{
    


    std::cout << "Please enter the operation +,-,/,*" <<std::endl;
    std::cin>>operation;

    if((operation != '+')&&(operation != '-')&&(operation != '/')&&(operation != '*'))
    {
        std::cout << "Wrong operation entered ot not supported yet!" <<std::endl;
        continue;;   
    }

    
    std::cout << "Please enter the 2 numbers, seprate them with space! " <<std::endl;
    std::cin>>number1>>number2;


switch (operation)
{
case '+':
    std::cout<< number1 << " + " << number2 << " = " << number1+number2 <<std::endl;
    break;
case '-':
    std::cout<< number1 << " - " << number2 << " = " << number1-number2 <<std::endl;
    break;
case '/':
    std::cout<< number1 << " / " << number2 << " = " << number1/number2 <<std::endl;
    break;
case '*':
    std::cout<< number1 << " * " << number2 << " = " << number1*number2 <<std::endl;
    break;

default:
    std::cout << "Should never be hit as we check for the operation upthere! " <<std::endl;
    break;
}    
    
    
    std::cout << "Another operation? y or n" <<std::endl;
    std::cin>>go_on;
 
    if (go_on == 'y')
    {
        end_loop = false;
        std::cout << "Sure!" <<std::endl;
    }  
    else
    {
        end_loop = true;
        std::cout << "Okay good bye!" <<std::endl;
    }
    
}

    return 0;
}
