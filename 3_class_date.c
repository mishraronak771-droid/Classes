#include <stdio.h>
int main (void)
{
       
       int year = 2026;
       int date = 11;
       int month = 6;
       
    printf("date: %d/0%d/%d \n", date, month , year );
    printf("date: %d/0%d/%d \n ", year , month, date );
}