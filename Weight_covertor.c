// Weight convertor  //

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

#define MAX_TRIES 3

#define TRUE 1
#define FALSE 0

#define METRICTONS 1
#define KILOGRAMS 2
#define GRAMS 3
#define MILLIGRAMS 4
#define MICROGRAMS 5
#define STONES 6
#define POUNDS 7
#define OUNCES 8
#define EXIT_APP 9

#define RANGE_FROM 1
#define RANGE_TO 9

double metricTons_to_kilograms(double);
double metricTons_to_grams(double);
double metricTons_to_milligrams(double);
double metricTons_to_micrograms(double);
double metricTons_to_stones(double);
double metricTons_to_pounds(double);
double metricTons_to_ounces(double);

double kilogram_to_metricTons(double);
double grams_to_metricTons(double);
double milligrams_to_metricTons(double);
double micrograms_to_metricTons(double);
double stones_to_metricTons(double);
double pounds_to_metricTons(double);
double ounces_to_metricTons(double);

int get_choice(char *);
void exit_application(void);
void do_conversion(double ,int,int);

int main(void)
{
    int From_choice = 0;
    int To_choice = 0;
    double input_number = 0;

    puts("__WELCOME TO THE WEIGHT CONVETOR APPLICATION__");
 
    while(TRUE)
    {
        puts("--------------------------------------------------------------------------------------------");
        printf(" 1 : MetricTons(t)\n 2 : Kilograms(kg)\n 3 : Grams(g)\n 4 : Milligrams(mg)\n");
        printf(" 5 : Micrograms(mcg)\n 6 : Stones(st)\n 7 : Pounds(lb)\n 8 : Ounces(oz)\n 9 : Exit_app\n");

        From_choice = get_choice("Covert From : ");
        if(From_choice == EXIT_APP)
        {
            exit_application();
        }

        printf("Enter magnitude : ");
        scanf("%lf",&input_number);

        To_choice = get_choice("Covert From : ");
        if(To_choice == EXIT_APP)
        {
            exit_application();
        }
        printf("Input_number = %lf\n",input_number);
        do_conversion(input_number,From_choice,To_choice);
        }

    exit(0);
}

int get_choice(char* prompt)
{
    int number_of_tries = 0;
    int Choice = 0;
    BOOL Flag = FALSE;
    for(number_of_tries = 0;number_of_tries < MAX_TRIES;number_of_tries++)
    {
        printf(prompt);
        scanf("%d",&Choice);
        if(Choice >= RANGE_FROM && Choice <= RANGE_TO)
        {
            Flag = TRUE;
            break;  
        }
        printf("Please enter valid number:\n");
    }
    if(Flag == FALSE)
    {
        printf("Max tries for wrong input\n");
        exit_application();
    }
    return Choice;
}

void exit_application()
{
    printf("Thanks for using application.\n");
    exit(0);
}

double metricTons_to_kilograms(double input_value)
{
    return input_value * 1000.0;
}

double metricTons_to_grams(double input_value)
{
    return input_value * 1000000.0;
}

double metricTons_to_milligrams(double input_value)
{
    return input_value * 1e+9;
}

double metricTons_to_micrograms(double input_value)
{
    return input_value * 1e+12;
}

double metricTons_to_stones(double input_value)
{
    return input_value * 157.473;
}

double metricTons_to_pounds(double input_value)
{
    return input_value * 2204.62;
}

double metricTons_to_ounces(double input_value)
{
    return input_value * 35274.0    ;
}

double kilogram_to_metricTons(double input_value)
{
    return input_value * 0.001; 
}

double grams_to_metricTons(double input_value)
{
    return input_value * 1e-6;
}
double milligrams_to_metricTons(double input_value)
{
    return input_value * 1e-9;
}
double micrograms_to_metricTons(double input_value)
{
    return input_value * 1e-12;
}
double stones_to_metricTons(double input_value)
{
    return input_value * 0.00635029;
}
double pounds_to_metricTons(double input_value)
{
    return input_value * 0.000453592;
}
double ounces_to_metricTons(double input_value)
{
    return input_value *  2.83495e-5;
}


void do_conversion(double Value,int choice_from,int choice_to)
{
    char * input_unit = NULL;
    char * output_unit = NULL;
    double Result = 0.0;
    printf("%lf\n",Value);

    if(choice_from == METRICTONS && choice_to == METRICTONS)
    {
        input_unit = "t";
        output_unit = "t";
        Result = Value;
    }
    else if(choice_from == METRICTONS && choice_to == KILOGRAMS)
    {
        input_unit = "t";
        output_unit = "kg";
        Result = metricTons_to_kilograms(Value);
        printf("Rsult = %lf\n",Result);
    }
    else if(choice_from == METRICTONS && choice_to == GRAMS)
    {
        input_unit = "t";
        output_unit = "g";
        Result = metricTons_to_grams(Value);
    }
    else if(choice_from == METRICTONS && choice_to == MILLIGRAMS)
    {
        input_unit = "t";
        output_unit = "mg";
        Result = metricTons_to_milligrams(Value);
    }
    else if(choice_from == METRICTONS && choice_to == MICROGRAMS)
    {
        input_unit = "t";
        output_unit = "mcg";
        Result = metricTons_to_micrograms(Value);
    }
    else if(choice_from == METRICTONS && choice_to == STONES)
    {
        input_unit = "t";
        output_unit = "st";
        Result = metricTons_to_stones(Value);
    }
    else if(choice_from == METRICTONS && choice_to == POUNDS)
    {
        input_unit = "t";
        output_unit = "lb";
        Result = metricTons_to_pounds(Value);
    }
    else if(choice_from == METRICTONS && choice_to == OUNCES)
    {
        input_unit = "t";
        output_unit = "oz";
        Result = metricTons_to_ounces(Value);
    }
    else if(choice_from == KILOGRAMS && choice_to == METRICTONS)
    {
        input_unit = "kg";
        output_unit = "t";
        Result = kilogram_to_metricTons(Value);
    }
    else if(choice_from == KILOGRAMS && choice_to == KILOGRAMS)
    {
        input_unit = "kg";
        output_unit = "kg";
        Result =Value;
    }
    else if(choice_from == KILOGRAMS && choice_to == GRAMS)
    {
        input_unit = "kg";
        output_unit = "g";
        Result = metricTons_to_grams(kilogram_to_metricTons(Value));
    }
    else if(choice_from == KILOGRAMS && choice_to == MILLIGRAMS)
    {
        input_unit = "kg";
        output_unit = "mg";
        Result = metricTons_to_milligrams(kilogram_to_metricTons(Value));
    }
    else if(choice_from == KILOGRAMS && choice_to == MICROGRAMS)
    {
        input_unit = "kg";
        output_unit = "mcg";
        Result = metricTons_to_micrograms(kilogram_to_metricTons(Value));
    }
    else if(choice_from == KILOGRAMS && choice_to == STONES)
    {
        input_unit = "kg";
        output_unit = "st";
        Result = metricTons_to_stones(kilogram_to_metricTons(Value));
    }
    else if(choice_from == KILOGRAMS && choice_to == POUNDS)
    {
        input_unit = "kg";
        output_unit = "lb";
        Result = metricTons_to_pounds(kilogram_to_metricTons(Value));
    }
    else if(choice_from == KILOGRAMS && choice_to == OUNCES)
    {
        input_unit = "kg";
        output_unit = "oz";
        Result = metricTons_to_ounces(kilogram_to_metricTons(Value));
    }
    else if(choice_from == GRAMS && choice_to == METRICTONS)
    {
        input_unit = "g";
        output_unit = "t";
        Result = grams_to_metricTons(Value);
    }
    else if(choice_from == GRAMS && choice_to == KILOGRAMS)
    {
        input_unit = "g";
        output_unit = "kg";
        Result = metricTons_to_kilograms(grams_to_metricTons(Value));
    }
    else if(choice_from == GRAMS && choice_to == GRAMS)
    {
        input_unit = "g";
        output_unit = "g";
        Result =Value;
    }
    else if(choice_from == GRAMS && choice_to == MILLIGRAMS)
    {
        input_unit = "g";
        output_unit = "mg";
        Result = metricTons_to_milligrams(grams_to_metricTons(Value));
    }
    else if(choice_from == GRAMS && choice_to == MICROGRAMS)
    {
        input_unit = "g";
        output_unit = "mcg";
        Result = metricTons_to_micrograms(grams_to_metricTons(Value));
    }
    else if(choice_from == GRAMS && choice_to == STONES)
    {
        input_unit = "g";
        output_unit = "st";
        Result = metricTons_to_stones(grams_to_metricTons(Value));
    }
    else if(choice_from == GRAMS && choice_to == POUNDS)
    {
        input_unit = "g";
        output_unit = "lb";
        Result = metricTons_to_pounds(grams_to_metricTons(Value));
    }
    else if(choice_from == GRAMS && choice_to == OUNCES)
    {
        input_unit = "g";
        output_unit = "oz";
        Result = metricTons_to_ounces(grams_to_metricTons(Value));
    }
    else if(choice_from == MILLIGRAMS && choice_to == METRICTONS)
    {
        input_unit = "mg";
        output_unit = "t";
        Result = milligrams_to_metricTons(Value);
    }
    else if(choice_from == MILLIGRAMS && choice_to == KILOGRAMS)
    {
        input_unit = "mg";
        output_unit = "kg";
        Result = metricTons_to_kilograms(milligrams_to_metricTons(Value));
    }
    else if(choice_from == MILLIGRAMS && choice_to == GRAMS)
    {
        input_unit = "mg";
        output_unit = "g";
        Result = metricTons_to_grams(milligrams_to_metricTons(Value));
    }
    else if(choice_from == MILLIGRAMS && choice_to == MILLIGRAMS)
    {
        input_unit = "mg";
        output_unit = "mg";
        Result = Value;
    }
    else if(choice_from == MILLIGRAMS && choice_to == MICROGRAMS)
    {
        input_unit = "mg";
        output_unit = "mcg";
        Result = metricTons_to_micrograms(milligrams_to_metricTons(Value));
    }
    else if(choice_from == MILLIGRAMS && choice_to == STONES)
    {
        input_unit = "mg";
        output_unit = "st";
        Result = metricTons_to_stones(milligrams_to_metricTons(Value));
    }
    else if(choice_from == MILLIGRAMS && choice_to == POUNDS)
    {
        input_unit = "mg";
        output_unit = "lb";
        Result = metricTons_to_pounds(milligrams_to_metricTons(Value));
    }
    else if(choice_from == MILLIGRAMS && choice_to == OUNCES)
    {
        input_unit = "mg";
        output_unit = "oz";
        Result = metricTons_to_ounces(milligrams_to_metricTons(Value));
    }
    else if(choice_from == MICROGRAMS && choice_to == METRICTONS)
    {
        input_unit = "mcg";
        output_unit = "t";
        Result = micrograms_to_metricTons(Value);
    }
    else if(choice_from == MICROGRAMS && choice_to == KILOGRAMS)
    {
        input_unit = "mcg";
        output_unit = "kg";
        Result = metricTons_to_kilograms(micrograms_to_metricTons(Value));
    }
    else if(choice_from == MICROGRAMS && choice_to == GRAMS)
    {
        input_unit = "mcg";
        output_unit = "g";
        Result = metricTons_to_grams(micrograms_to_metricTons(Value));
    }
    else if(choice_from == MICROGRAMS && choice_to == MILLIGRAMS)
    {
        input_unit = "mcg";
        output_unit = "mg";
        Result = metricTons_to_milligrams(micrograms_to_metricTons(Value));
    }
    else if(choice_from == MICROGRAMS && choice_to == MICROGRAMS)
    {
        input_unit = "mcg";
        output_unit = "mcg";
        Result = Value;
    }
    else if(choice_from == MICROGRAMS && choice_to == STONES)
    {
        input_unit = "mcg";
        output_unit = "st";
        Result = metricTons_to_stones(micrograms_to_metricTons(Value));
    }
    else if(choice_from == MICROGRAMS && choice_to == POUNDS)
    {
        input_unit = "mcg";
        output_unit = "lb";
        Result = metricTons_to_pounds(micrograms_to_metricTons(Value));
    }
    else if(choice_from == MICROGRAMS && choice_to == OUNCES)
    {
        input_unit = "mcg";
        output_unit = "oz";
        Result = metricTons_to_ounces(micrograms_to_metricTons(Value));
    }
    else if(choice_from == STONES && choice_to == METRICTONS)
    {
        input_unit = "st";
        output_unit = "t";
        Result = stones_to_metricTons(Value);
    }
    else if(choice_from == STONES && choice_to == KILOGRAMS)
    {
        input_unit = "st";
        output_unit = "kg";
        Result = metricTons_to_kilograms(stones_to_metricTons(Value));
    }
    else if(choice_from == STONES && choice_to == GRAMS)
    {
        input_unit = "st";
        output_unit = "g";
        Result = metricTons_to_grams(stones_to_metricTons(Value));
    }
    else if(choice_from == STONES && choice_to == MILLIGRAMS)
    {
        input_unit = "st";
        output_unit = "mg";
        Result = metricTons_to_milligrams(stones_to_metricTons(Value));
    }
    else if(choice_from == STONES && choice_to == MICROGRAMS)
    {
        input_unit = "st";
        output_unit = "mcg";
        Result = metricTons_to_micrograms(stones_to_metricTons(Value));
    }
    else if(choice_from == STONES && choice_to == STONES)
    {
        input_unit = "st";
        output_unit = "st";
        Result = Value;
    }
    else if(choice_from == STONES && choice_to == POUNDS)
    {
        input_unit = "st";
        output_unit = "lb";
        Result = metricTons_to_pounds(stones_to_metricTons(Value));
    }
    else if(choice_from == STONES && choice_to == OUNCES)
    {
        input_unit = "st";
        output_unit = "oz";
        Result = metricTons_to_ounces(stones_to_metricTons(Value));
    }
    else if(choice_from == POUNDS && choice_to == METRICTONS)
    {
        input_unit = "lb";
        output_unit = "t";
        Result = pounds_to_metricTons(Value);
    }
    else if(choice_from == POUNDS && choice_to == KILOGRAMS)
    {
        input_unit = "lb";
        output_unit = "kg";
        Result = metricTons_to_kilograms(pounds_to_metricTons(Value));
    }
    else if(choice_from == POUNDS && choice_to == GRAMS)
    {
        input_unit = "lb";
        output_unit = "g";
        Result = metricTons_to_grams(pounds_to_metricTons(Value));
    }
    else if(choice_from == POUNDS && choice_to == MILLIGRAMS)
    {
        input_unit = "lb";
        output_unit = "mg";
        Result = metricTons_to_milligrams(pounds_to_metricTons(Value));
    }
    else if(choice_from == POUNDS && choice_to == MICROGRAMS)
    {
        input_unit = "lb";
        output_unit = "mcg";
        Result = metricTons_to_micrograms(pounds_to_metricTons(Value));
    }
    else if(choice_from == POUNDS && choice_to == STONES)
    {
        input_unit = "lb";
        output_unit = "st";
        Result = metricTons_to_stones(pounds_to_metricTons(Value));
    }
    else if(choice_from == POUNDS && choice_to == POUNDS)
    {
        input_unit = "lb";
        output_unit = "lb";
        Result = Value;
    }
    else if(choice_from == POUNDS && choice_to == OUNCES)
    {
        input_unit = "lb";
        output_unit = "oz";
        Result = metricTons_to_ounces(pounds_to_metricTons(Value));
    }
    else if(choice_from == OUNCES && choice_to == METRICTONS)
    {
        input_unit = "oz";
        output_unit = "t";
        Result = ounces_to_metricTons(Value);
    }
    else if(choice_from == OUNCES && choice_to == KILOGRAMS)
    {
        input_unit = "oz";
        output_unit = "kg";
        Result = metricTons_to_kilograms(ounces_to_metricTons(Value));
    }
    else if(choice_from == OUNCES && choice_to == GRAMS)
    {
        input_unit = "oz";
        output_unit = "g";
        Result = metricTons_to_grams(ounces_to_metricTons(Value));
    }
    else if(choice_from == OUNCES && choice_to == MILLIGRAMS)
    {
        input_unit = "oz";
        output_unit = "mg";
        Result = metricTons_to_milligrams(ounces_to_metricTons(Value));
    }
    else if(choice_from == OUNCES && choice_to == MICROGRAMS)
    {
        input_unit = "oz";
        output_unit = "mcg";
        Result = metricTons_to_micrograms(ounces_to_metricTons(Value));
    }
    else if(choice_from == OUNCES && choice_to == STONES)
    {
        input_unit = "oz";
        output_unit = "st";
        Result = metricTons_to_stones(ounces_to_metricTons(Value));
    }
    else if(choice_from == OUNCES && choice_to == POUNDS)
    {
        input_unit = "oz";
        output_unit = "lb";
        Result = metricTons_to_pounds(ounces_to_metricTons(Value));
    }
    else if(choice_from == OUNCES && choice_to == OUNCES)
    {
        input_unit = "oz";
        output_unit = "oz";
        Result = Value;
    }

    printf("%lf(%s) = %lf(%s)\n",Value,input_unit,Result,output_unit);
}