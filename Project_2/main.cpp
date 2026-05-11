#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>



int main()
{

    bool go_on = true;
    char go_on_char;
    
    while (go_on == true)
    {
    
    std::srand(std::time(0));

    int num1 = (std::rand()%200);
    int num2 = (std::rand()%200);

    int sign_num = (std::rand()%4);
    int actual_result;
    
    switch (sign_num)
    {
    case 0:
        std::cout<<"What's the result of " <<num1 << " - " <<num2 <<" : ";
        actual_result = num1 - num2;
        break;
     case 1:
        std::cout<<"What's the result of " <<num1 << " + " <<num2 <<" : ";
        actual_result = num1 + num2;
        break;
    case 2:
        std::cout<<"What's the result of " <<num1 << " * " <<num2 <<" : ";
        actual_result = num1 * num2;
        break;
    case 3:
        std::cout<<"What's the result of " <<num1 << " / " <<num2 <<" : ";
        actual_result = num1 / num2;
        break;
    
    default:
        std::cout<<"should not hit here!";
        break;
    }

    int user_result;
    std::cin>>user_result;

    if (user_result == actual_result)
    {
        std::cout<<std::endl<<"Congratulations! you got the result " << actual_result << " right!"<<std::endl;
    }
    else
    {
        std::cout<<std::endl<<"Naah! the correct result is : " << actual_result <<std::endl;
    }

    std::cout<<"Do you want me to try again ? (Y | N) : ";
    std::cin>>go_on_char;
    if ((go_on_char == 'y') || (go_on_char == 'Y'))
    {
        go_on = true;
    }
    else
    {
        go_on = false;
        std::cout<<"See You later!";

    }
    

}

    return 0;
}

