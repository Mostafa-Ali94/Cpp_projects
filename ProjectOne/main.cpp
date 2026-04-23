#include <iostream>
#include <iomanip>



int main()
{

const unsigned int months_count = 12;
unsigned int day = 1;
unsigned int start_day;
unsigned int end_temp;
unsigned int end_day;
unsigned int month_end;

unsigned int year_entered;
unsigned int first_day_entered;
bool first_month_flag = false;

std::cout<<"Enter the year: "<<std::endl;
std::cin>>year_entered;

std::cout<<"Enter the first day of year in numbers [1: Mon, 2: Tue,...,7:Sun ]: "<<std::endl;
std::cin>>first_day_entered;

std::cout<<"Calender for "<< year_entered <<std::endl;

start_day = first_day_entered;


for (unsigned int month=1; month<=months_count; ++month)
{
    std::cout<<"--Month " << month <<" --"<<std::endl;
    std::cout<<"  Mon  Tue  Wed  Thu  Fri  Sat  Sun"<<std::endl;

    /*Month length check: Check if the month is 31,30,28,or 29 days long*/

    if((month==1)||(month==3)||(month==5)||(month==7)||(month == 8)||(month==10)||(month == 12))
        {
            month_end =31;
            end_temp = start_day + 2;

        }

    if((month==4)||(month==6)||(month==9)||(month==11))
        {
            month_end =30;
            end_temp = start_day + 1;

        }

    if (month==2)
        {
            if ((year_entered%4 == 0) && !(year_entered%100==0 )||(year_entered%400 == 0))
            {
                month_end =29;
                end_temp = start_day;
            }
            else
            {
                 month_end =28;
                 end_temp = start_day - 1;  
            }

        }

    /* Loop over the months*/    
        day = 1;  
        for(unsigned int row=0; row<6; ++row)
        {
            for (unsigned int col = 0; col < 7; ++col)
                {
                    if (col < (start_day-1) && (row == 0))
                    {
                        std::cout << std::setw(5) << " " ;
                    }
                    else
                    {
                        if (day>=month_end+1)
                        break;
                        std::cout << std::setw(5) << day ;
                        day++;
                    }                   
                }
            std::cout<<std::endl;      

        }
    
        
        if (end_temp > 7)
        {
            end_day = end_temp%7;
        }
        else
        {
            end_day = end_temp;
        }

        start_day = end_day + 1;
        
        std::cout<<std::endl;  


    }



    return 0;
}


