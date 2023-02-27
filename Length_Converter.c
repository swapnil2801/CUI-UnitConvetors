// Length Convertor for 8 lenght's  //

#include<stdio.h>
#include<stdlib.h>

#define NR_MAX_TRIES	3

#define TRUE		1 
#define FALSE		0 

#define SUCCESS		1 
#define FAILURE		0 

#define MILLIMETER	1 
#define CENTIMETER	2
#define METER		3 
#define KILOMETER	4 
#define INCH		5 
#define FOOT		6 
#define YARD		7 
#define MILE		8 
#define EXIT_APP	9 

double millimeter_to_millimeter(double);
double millimeter_to_centimeter(double);
double millimeter_to_meter(double);
double millimeter_to_kilometer(double);
double millimeter_to_inch(double);
double millimeter_to_foot(double);
double millimeter_to_yard(double);
double millimeter_to_mile(double);

double centimeter_to_millimeter(double);
double meter_to_millimeter(double);
double kilometer_to_millimeter(double);
double inch_to_millimeter(double);
double foot_to_millimeter(double);
double yard_to_millimeter(double);
double mile_to_millimeter(double);

int get_choice(const char*,int ,int);

void do_conversion(double,int,int);

void exit_application(void);

int main(void)
{
    double Input_number = 0.0;
    int from_choice = 0;
    int To_choice = 0;
    double Return = 0.0;
    int valid_respoce_start = 1;
    int valid_respoce_ends = 9;

    puts("<<<<WELCOME TO THE APPLICATION>>>>");

    while(TRUE)
    {
        puts("----------------------------------------------------------------------------------------------------");
        printf(" 1: Millimeter(mm)\n 2: Centimeter(cm)\n 3: Meter(m)\n 4: Killometer(km)\n 5: inch(in)\n ");
        printf("6: foot(ft)\n 7: yard(yd)\n 8: mile(mi)\n 9: EXIT_APP\n");

        from_choice = get_choice("Convert from : ",valid_respoce_start,valid_respoce_ends);
        if(from_choice == EXIT_APP)
        {
            exit_application();
        }
        printf("Enter the magnitude : \n");
        scanf("%lf",&Input_number);

        To_choice = get_choice("Convert_to : ",valid_respoce_start,valid_respoce_ends);
        if(To_choice == EXIT_APP)
        {
            exit_application();
        }

        do_conversion(Input_number,from_choice,To_choice);
    }

    return 0;
}

int get_choice(const char* prompt,int choice_start, int choice_ends)
{
    int number_of_tries = 0;
    int Choice = 0;
    int Flag = FALSE;

    for(number_of_tries = 0;number_of_tries < NR_MAX_TRIES;++number_of_tries)
    {
        printf(prompt);
        scanf("%d",&Choice);

        if(Choice >= choice_start && Choice <= choice_ends)
        {
            Flag = TRUE;
            break;
        }
        puts("Please enter valid choice number.");
    }
    if(Flag == FALSE)
    {
        exit_application();
    }
    return Choice;
}

void exit_application()
{
    puts("Thanks for using the application.");
    exit(EXIT_SUCCESS);
}

double millimeter_to_centimeter(double mm)
{
    return (mm / 10.0);
}

double millimeter_to_meter(double mm)
{
    return (mm/1000.0);
}

double millimeter_to_kilometer(double mm)
{
    return (mm/1000000.0);
}

double millimeter_to_inch(double mm)
{
    return (mm / 25.4);
}

double millimeter_to_foot(double mm)
{
    return (mm / 304.8);
}

double millimeter_to_yard(double mm)
{
    return (mm / 914.4);
}

double millimeter_to_mile(double mm)
{
    return (mm / 1.609344e+6);
}

double centimeter_to_millimeter(double cm)
{
	return (cm * 10.0); 
}

double meter_to_millimeter(double m)
{
	return (m * 1000.0); 
}

double kilometer_to_millimeter(double km)
{
	return (km * 1000000.0); 
}

double inch_to_millimeter(double inch)
{
	return (inch * 25.4); 
}

double foot_to_millimeter(double ft)
{
	return (ft * 304.8); 
}

double yard_to_millimeter(double yd)
{
	return (yd * 914.4); 
}

double mile_to_millimeter(double mi)
{
	return (mi * 1.609e+6); 
}


void do_conversion(double input_number,int choice_from,int choice_to)
{
    char* input_unit = NULL;
    char* output_unit = NULL;

    double Answer = 0.0;

    if(choice_from == MILLIMETER && choice_to == MILLIMETER)
    {
        Answer = input_number;
        input_unit = "mm";
        output_unit = "mm";
    }
    else if(choice_from == MILLIMETER && choice_to == CENTIMETER)
    {
        Answer = millimeter_to_centimeter(input_number);
        input_unit = "mm";
        output_unit = "cm";
    }
    else if(choice_from == MILLIMETER && choice_to == METER)
    {
        Answer = millimeter_to_meter(input_number);
        input_unit = "mm";
        output_unit = "m";
    }
    else if(choice_from == MILLIMETER && choice_to == KILOMETER)
    {
        Answer = millimeter_to_kilometer(input_number);
        input_unit = "mm";
        output_unit = "km";
    }
    else if(choice_from == MILLIMETER && choice_to == INCH)
    {
        Answer = millimeter_to_inch(input_number);
        input_unit = "mm";
        output_unit = "in";
    }
    else if(choice_from == MILLIMETER && choice_to == FOOT)
    {
        Answer = millimeter_to_foot(input_number);
        input_unit = "mm";
        output_unit = "ft";
    }
    else if(choice_from == MILLIMETER && choice_to == YARD)
    {
        Answer = millimeter_to_yard(input_number);
        input_unit = "mm";
        output_unit = "yd";
    }
    else if(choice_from == MILLIMETER && choice_to == MILE)
    {
        Answer = millimeter_to_mile(input_number);
        input_unit = "mm";
        output_unit = "mi";
    }
    else if(choice_from == CENTIMETER && choice_to == MILLIMETER)
    {
        Answer = centimeter_to_millimeter(input_number);
        input_unit = "cm";
        output_unit = "mm";
    }
    else if(choice_from == CENTIMETER && choice_to == CENTIMETER)
    {
        Answer = input_number;
        input_unit = "cm";
        output_unit = "cm";
    }
    else if(choice_from == CENTIMETER && choice_to == METER)
    {
        Answer = centimeter_to_millimeter(millimeter_to_meter(input_number));
        input_unit = "cm";
        output_unit = "m";
    }
    else if(choice_from == CENTIMETER && choice_to == KILOMETER)
    {
        Answer = kilometer_to_millimeter(millimeter_to_meter(input_number));
        input_unit = "cm";
        output_unit = "km";
    }
    else if(choice_from == CENTIMETER && choice_to == INCH)
    {
        Answer = inch_to_millimeter(millimeter_to_meter(input_number));
        input_unit = "cm";
        output_unit = "in";
    }
    else if(choice_from == CENTIMETER && choice_to == FOOT)
    {
        Answer = foot_to_millimeter(millimeter_to_meter(input_number));
        input_unit = "cm";
        output_unit = "ft";
    }
    else if(choice_from == CENTIMETER && choice_to == YARD)
    {
        Answer = yard_to_millimeter(millimeter_to_meter(input_number));
        input_unit = "cm";
        output_unit = "yd";
    }
    else if(choice_from == CENTIMETER && choice_to == MILE)
    {
        Answer = mile_to_millimeter(millimeter_to_meter(input_number));
        input_unit = "cm";
        output_unit = "mi";
    }
    else if(choice_from == METER && choice_to == MILLIMETER)
    {
        Answer = meter_to_millimeter(input_number);
        input_unit = "m";
        output_unit = "mm";
    }
    else if(choice_from == METER && choice_to == METER)
    {
        Answer = input_number;
        input_unit = "m";
        output_unit = "m";
    }
    else if(choice_from == METER && choice_to == CENTIMETER)
    {
        Answer = centimeter_to_millimeter(millimeter_to_meter(input_number));
        input_unit = "m";
        output_unit = "cm";
    }
    else if(choice_from == METER && choice_to == KILOMETER)
    {
        Answer = kilometer_to_millimeter(millimeter_to_meter(input_number));
        input_unit = "m";
        output_unit = "km";
    }
    else if(choice_from == METER && choice_to == INCH)
    {
        Answer = inch_to_millimeter(millimeter_to_meter(input_number));
        input_unit = "m";
        output_unit = "in";
    }
    else if(choice_from == METER && choice_to == FOOT)
    {
        Answer = foot_to_millimeter(millimeter_to_meter(input_number));
        input_unit = "m";
        output_unit = "ft";
    }
    else if(choice_from == METER && choice_to == YARD)
    {
        Answer = yard_to_millimeter(millimeter_to_meter(input_number));
        input_unit = "m";
        output_unit = "yd";
    }
    else if(choice_from == METER && choice_to == MILE)
    {
        Answer = mile_to_millimeter(millimeter_to_meter(input_number));
        input_unit = "m";
        output_unit = "mi";
    }
    else if(choice_from == KILOMETER && choice_to == MILLIMETER)
    {
        Answer = kilometer_to_millimeter(input_number);
        input_unit = "km";
        output_unit = "mm";
    }
    else if(choice_from == KILOMETER && choice_to == CENTIMETER)
    {
        Answer = millimeter_to_centimeter(kilometer_to_millimeter(input_number));
        input_unit = "km";
        output_unit = "cm";
    }
    else if(choice_from == KILOMETER && choice_to == METER)
    {
        Answer = millimeter_to_meter(kilometer_to_millimeter(input_number));
        input_unit = "km";
        output_unit = "m";
    }
    else if(choice_from == KILOMETER && choice_to == KILOMETER)
    {
        Answer = input_number;
        input_unit = "km";
        output_unit = "km";
    }
    else if(choice_from == KILOMETER && choice_to == INCH)
    {
        Answer = millimeter_to_inch(kilometer_to_millimeter(input_number));
        input_unit = "km";
        output_unit = "in";
    }
    else if(choice_from == KILOMETER && choice_to == FOOT)
    {
        Answer = millimeter_to_foot(kilometer_to_millimeter(input_number));
        input_unit = "km";
        output_unit = "ft";
    }
    else if(choice_from == KILOMETER && choice_to == YARD)
    {
        Answer = millimeter_to_yard(kilometer_to_millimeter(input_number));
        input_unit = "km";
        output_unit = "yd";
    }
    else if(choice_from == KILOMETER && choice_to == MILE)
    {
        Answer = millimeter_to_mile(kilometer_to_millimeter(input_number));
        input_unit = "km";
        output_unit = "mi";
    }
    else if(choice_from == INCH && choice_to == MILLIMETER)
    {
        Answer = inch_to_millimeter(input_number);
        input_unit = "in";
        output_unit = "mm";
    }
    else if(choice_from == INCH && choice_to == CENTIMETER)
    {
        Answer = millimeter_to_centimeter(inch_to_millimeter(input_number));
        input_unit = "in";
        output_unit = "mm";
    }
    else if(choice_from == INCH && choice_to == METER)
    {
        Answer = millimeter_to_meter(inch_to_millimeter(input_number));
        input_unit = "in";
        output_unit = "m";
    }
    else if(choice_from == INCH && choice_to == KILOMETER)
    {
        Answer = millimeter_to_kilometer(inch_to_millimeter(input_number));
        input_unit = "in";
        output_unit = "km";
    }
    else if(choice_from == INCH && choice_to == INCH)
    {
        Answer = input_number;
        input_unit = "in";
        output_unit = "in";
    }
    else if(choice_from == INCH && choice_to == FOOT)
    {
        Answer = millimeter_to_foot(inch_to_millimeter(input_number));
        input_unit = "in";
        output_unit = "ft";
    }
    else if(choice_from == INCH && choice_to == YARD)
    {
        Answer = millimeter_to_yard(inch_to_millimeter(input_number));
        input_unit = "in";
        output_unit = "yd";
    }
    else if(choice_from == INCH && choice_to == MILE)
    {
        Answer = millimeter_to_mile(inch_to_millimeter(input_number));
        input_unit = "in";
        output_unit = "mi";
    }
    else if(choice_from == FOOT && choice_to == MILLIMETER)
    {
        Answer = foot_to_millimeter(input_number);
        input_unit = "ft";
        output_unit = "mm";
    }
    else if(choice_from == FOOT && choice_to == CENTIMETER)
    {
        Answer = millimeter_to_centimeter(foot_to_millimeter(input_number));
        input_unit = "ft";
        output_unit = "cm";
    }
    else if(choice_from == FOOT && choice_to == METER)
    {
        Answer = millimeter_to_meter(foot_to_millimeter(input_number));
        input_unit = "ft";
        output_unit = "m";
    }
    else if(choice_from == FOOT && choice_to == KILOMETER)
    {
        Answer = millimeter_to_kilometer(foot_to_millimeter(input_number));
        input_unit = "ft";
        output_unit = "km";
    }
    else if(choice_from == FOOT && choice_to == INCH)
    {
        Answer = millimeter_to_inch(foot_to_millimeter(input_number));
        input_unit = "ft";
        output_unit = "in";
    }
    else if(choice_from == FOOT && choice_to == FOOT)
    {
        Answer = input_number;
        input_unit = "ft";
        output_unit = "ft";
    }
    else if(choice_from == FOOT && choice_to == YARD)
    {
        Answer = millimeter_to_yard(foot_to_millimeter(input_number));
        input_unit = "ft";
        output_unit = "yd";
    }
    else if(choice_from == FOOT && choice_to == MILE)
    {
        Answer = millimeter_to_mile(foot_to_millimeter(input_number));
        input_unit = "ft";
        output_unit = "mi";
    }
    else if(choice_from == YARD && choice_to == MILLIMETER)
    {
        Answer = yard_to_millimeter(input_number);
        input_unit = "yd";
        output_unit = "mm";
    }
    else if(choice_from == YARD && choice_to == CENTIMETER)
    {
        Answer = millimeter_to_centimeter(yard_to_millimeter(input_number));
        input_unit = "yd";
        output_unit = "cm";
    }
    else if(choice_from == YARD && choice_to == METER)
    {
        Answer = millimeter_to_meter(yard_to_millimeter(input_number));
        input_unit = "yd";
        output_unit = "m";
    }
    else if(choice_from == YARD && choice_to == KILOMETER)
    {
        Answer = millimeter_to_kilometer(yard_to_millimeter(input_number));
        input_unit = "yd";
        output_unit = "km";
    }
    else if(choice_from == YARD && choice_to == INCH)
    {
        Answer = millimeter_to_inch(yard_to_millimeter(input_number));
        input_unit = "yd";
        output_unit = "in";
    }
    else if(choice_from == YARD && choice_to == FOOT)
    {
        Answer = millimeter_to_foot(yard_to_millimeter(input_number));
        input_unit = "yd";
        output_unit = "ft";
    }
    else if(choice_from == YARD && choice_to == YARD)
    {
        Answer = input_number;
        input_unit = "yd";
        output_unit = "yd";
    }
    else if(choice_from == YARD && choice_to == MILE)
    {
        Answer = millimeter_to_mile(yard_to_millimeter(input_number));
        input_unit = "yd";
        output_unit = "mi";
    }
    else if(choice_from == MILE && choice_to == MILLIMETER)
    {
        Answer = mile_to_millimeter(input_number);
        input_unit = "mi";
        output_unit = "mm";
    }
    else if(choice_from == MILE && choice_to == CENTIMETER)
    {
        Answer = millimeter_to_centimeter(mile_to_millimeter(input_number));
        input_unit = "mi";
        output_unit = "mm";
    }
    else if(choice_from == MILE && choice_to == METER)
    {
        Answer = millimeter_to_meter(mile_to_millimeter(input_number));
        input_unit = "mi";
        output_unit = "m";
    }
    else if(choice_from == MILE && choice_to == KILOMETER)
    {
        Answer = millimeter_to_kilometer(mile_to_millimeter(input_number));
        input_unit = "mi";
        output_unit = "km";
    }
    else if(choice_from == MILE && choice_to == INCH)
    {
        Answer = millimeter_to_inch(mile_to_millimeter(input_number));
        input_unit = "mi";
        output_unit = "in";
    }
    else if(choice_from == MILE && choice_to == FOOT)
    {
        Answer = millimeter_to_foot(mile_to_millimeter(input_number));
        input_unit = "mi";
        output_unit = "ft";
    }
    else if(choice_from == MILE && choice_to == YARD)
    {
        Answer = millimeter_to_yard(mile_to_millimeter(input_number));
        input_unit = "mi";
        output_unit = "yd";
    }
    else if(choice_from == MILE && choice_to == MILE)
    {
        Answer = input_number;
        input_unit = "mi";
        output_unit = "mi";
    }

    printf("%lf(%s) = %lf(%s)\n",input_number,input_unit,Answer,output_unit);
}