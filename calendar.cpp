#include<bits/stdc++.h>
using namespace std;
//Gregorian Calendar
int getfirstdayoftheyear(int year)
{
    int day=(year*365+((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
    return day;
}
void leap_year(int year,int daysinmonth[])
{
    if((year%4==0&&year%100!=0)||year%400==0)
    {
        daysinmonth[1]=29;
    }
}
void calendar()
{
    system("cls||clear");
    int weekday=0,spacecount=0,year;
    cout<<"Enter Your Favorite Year : "<<endl;
    cin>>year;
    int daysinmonth[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    leap_year(year,daysinmonth);
    weekday=getfirstdayoftheyear(year);
    string months[]= {"January","February","March","April","May","June","July","August","September","October","November","December"};
    cout<<"\n---------------------Welcome to "<<year<<"---------------------"<<endl;;
    for(int i=0; i<12; i++)
    {
        cout<<"\n\n-------------------------"<<months[i]<<"-------------------------"<<endl<<endl;
        cout<<"\n   Sun   Mon   Tues   Wed   Thu   Fri   Sat"<<endl<<endl;
        for(spacecount=1; spacecount<=weekday; spacecount++)
        {
            cout<<"      ";
        }
        for(int j=1; j<=daysinmonth[i]; j++)
        {
            printf("%6d",j);
            weekday++;
            if(weekday>6)
            {
                cout<<endl;
                weekday=0;
            }
        }
    }
    cout<<endl<<endl;
}
//Age Calculation
void age(int pd, int pm, int py,int bd, int bm, int by)
{
    int d, m, y;
    int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    y = py - by;
    if (pm < bm)
    {
        y--;
        m = 12 - (bm - pm);
    }
    else
    {
        m = pm - bm;
    }
    if (pd < bd)
    {
        m--;
        d = md[pm - 1] - (bd - pd);
    }
    else
    {
        d = pd - bd;
    }
    cout << "your age is : \n";
    cout << y << " years " << m << " months " << d << " days. ";
}
void agecalculate()
{
    system("cls||clear");

    int pd, pm, py, bd, bm, by;
    cout << " Enter the present date in the format dd mm yy : "<<endl;
    cin >> pd >> pm >> py;
    cout << " Enter the birth date in the format dd mm yy : "<<endl;
    cin >> bd >> bm >> by;
    age(pd, pm, py, bd, bm, by);
    cout<<endl<<endl;
}
//Length Convert
void convertMeterToCm(double meter)
{
    double cm = meter * 100;
    cout << meter << " meter = " << cm << " centimeters" << endl;
}

void convertCmToMeter(double cm)
{
    double meter = cm / 100;
    cout << cm << " centimeters = " << meter << " meter" << endl;
}

void convertMeterToMm(double meter)
{
    double mm = meter * 1000;
    cout << meter << " meter = " << mm << " millimeters" << endl;
}

void convertMmToMeter(double mm)
{
    double meter = mm / 1000;
    cout << mm << " millimeters = " << meter << " meter" << endl;
}

void convertCmToMm(double cm)
{
    double mm = cm * 10;
    cout << cm << " centimeters = " << mm << " millimeters" << endl;
}

void convertMmToCm(double mm)
{
    double cm = mm / 10;
    cout << mm << " millimeters = " << cm << " centimeters" << endl;
}

void convertMeterToFoot(double meter)
{
    double foot = meter * 3.28084;
    cout << meter << " meter = " << foot << " feet" << endl;
}

void convertFootToMeter(double foot)
{
    double meter = foot / 3.28084;
    cout << foot << " feet = " << meter << " meter" << endl;
}
void lengthconv()
{
    system("cls||clear");
    int choice;
    double input;

    cout << "Converter Menu:" << endl;
    cout << "1. Meter to Centimeter" << endl;
    cout << "2. Centimeter to Meter" << endl;
    cout << "3. Meter to Millimeter" << endl;
    cout << "4. Millimeter to Meter" << endl;
    cout << "5. Centimeter to Millimeter" << endl;
    cout << "6. Millimeter to Centimeter" << endl;
    cout << "7. Meter to Foot" << endl;
    cout << "8. Foot to Meter" << endl;
    cout << "Enter your choice (1-8): ";
    cin >> choice;

    cout << "Enter the value to convert: ";
    cin >> input;

    switch (choice)
    {
    case 1:
        convertMeterToCm(input);
        break;
    case 2:
        convertCmToMeter(input);
        break;
    case 3:
        convertMeterToMm(input);
        break;
    case 4:
        convertMmToMeter(input);
        break;
    case 5:
        convertCmToMm(input);
        break;
    case 6:
        convertMmToCm(input);
        break;
    case 7:
        convertMeterToFoot(input);
        break;
    case 8:
        convertFootToMeter(input);
        break;
    default:
        cout << "Invalid choice!" << endl;
    }
    cout<<endl<<endl;
}
//Time Convert
void timeconv()
{
    system("cls||clear");
    int t;
    cout << "Converter Menu:" << endl;
    cout << "1. Second to Minute" << endl;
    cout << "2. Second to Hour" << endl;
    cout << "3. Minute to Second" << endl;
    cout << "4. Minute to Hour" << endl;
    cout << "5. Hour to Second" << endl;
    cout << "6. Hour to Minute" << endl;
    cout << "Enter your choice (1-6): ";
    cin>>t;
    if(t==1)
    {
        double s;
        cout<<"Enter Second :"<<endl;
        cin>>s;
        cout<<s<<" Second = "<<s/60<<" Minute"<<endl;
    }
    else if(t==2)
    {
        double s;
        cout<<"Enter Second :"<<endl;
        cin>>s;
        cout<<s<<" Second = "<<s/3600<<" Hour"<<endl;
    }
    else if(t==3)
    {
        double m;
        cout<<"Enter Minute :"<<endl;
        cin>>m;
        cout<<m<<" Minute = "<<m*60<<" Second"<<endl;
    }
    else if(t==4)
    {
        double m;
        cout<<"Enter Minute :"<<endl;
        cin>>m;
        cout<<m<<" Minute = "<<m/60<<" Hour"<<endl;
    }
    else if(t==5)
    {
        double h;
        cout<<"Enter Hour :"<<endl;
        cin>>h;
        cout<<h<<" Hour = "<<h*3600<<" Second"<<endl;
    }
    else if(t==6)
    {
        double h;
        cout<<"Enter Hour :"<<endl;
        cin>>h;
        cout<<h<<" Hour = "<<h*60<<" Minute"<<endl;
    }
    cout<<endl<<endl;
}
//Temperature Convert
float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}
float fahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
float celsiusToKelvin(float celsius)
{
    return celsius + 273.15;
}
float kelvinToCelsius(float kelvin)
{
    return kelvin - 273.15;
}
float fahrenheitToKelvin(float fahrenheit)
{
    return (fahrenheit + 459.67) * 5 / 9;
}
float kelvinToFahrenheit(float kelvin)
{
    return (kelvin * 9 / 5) - 459.67;
}
void tempconv()
{
    system("cls||clear");
    float temperature;
    int choice;

    printf("Temperature Converter\n");
    printf("---------------------\n");

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    printf("Available conversions:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");

    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, celsiusToFahrenheit(temperature));
        break;
    case 2:
        printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, fahrenheitToCelsius(temperature));
        break;
    case 3:
        printf("%.2f Celsius = %.2f Kelvin\n", temperature, celsiusToKelvin(temperature));
        break;
    case 4:
        printf("%.2f Kelvin = %.2f Celsius\n", temperature, kelvinToCelsius(temperature));
        break;
    case 5:
        printf("%.2f Fahrenheit = %.2f Kelvin\n", temperature, fahrenheitToKelvin(temperature));
        break;
    case 6:
        printf("%.2f Kelvin = %.2f Fahrenheit\n", temperature, kelvinToFahrenheit(temperature));
        break;


    default:
        printf("Invalid choice\n");
    }
    cout<<endl<<endl;
}
//Currency Convert
void currencyconv()
{
    system("cls||clear");
    int choice;
    float amount;

    cout << "\t<======================================================================>" << endl;
    cout << "\t                  WELCOME TO CURRENCY CONVERTER                         " << endl;
    cout << "\t      Please NOTE that the currency value fluctuates frequently         " << endl;
    cout << "\tSo if you find the conversion to be inaccurate, that might be the cause " << endl;
    cout << "\t<======================================================================>" << endl;

    cout << "Currency Converter Menu:" << endl;
    cout << "1. BDT to USD" << endl;
    cout << "2. USD to BDT" << endl;
    cout << "3. BDT to EUR" << endl;
    cout << "4. EUR to BDT" << endl;
    cout << "5. BDT to INR" << endl;
    cout << "6. INR to BDT" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter amount in BDT: ";
        cin >> amount;
        cout << "USD: " << amount * 0.0093 << endl;
        break;

    case 2:
        cout << "Enter amount in USD: ";
        cin >> amount;
        cout << "BDT: " << amount * 107.79 << endl;
        break;

    case 3:
        cout << "Enter amount in BDT: ";
        cin >> amount;
        cout << "EUR: " << amount * 0.0085 << endl;
        break;

    case 4:
        cout << "Enter amount in EUR: ";
        cin >> amount;
        cout << "BDT: " << amount * 118.25 << endl;
        break;

    case 5:
        cout << "Enter amount in BDT: ";
        cin >> amount;
        cout << "INR: " << amount * 0.77 << endl;
        break;

    case 6:
        cout << "Enter amount in INR: ";
        cin >> amount;
        cout << "BDT: " << amount * 1.30 << endl;
        break;

    default:
        cout << "Invalid choice." << endl;
        break;
    }
    cout<<endl<<endl;
}
void menu()
{
    cout<<"Enter 1 for Calendar"<<endl;
    cout<<"Enter 2 for Age Calculation"<<endl;
    cout<<"Enter 3 for Length Convert"<<endl;
    cout<<"Enter 4 for Time Convert"<<endl;
    cout<<"Enter 5 for Temperature Convert"<<endl;
    cout<<"Enter 6 for Currency Convert"<<endl;
    cout<<"Enter 7 for Exit"<<endl;
    int choice;
    cout<<"Enter your choice (1-6): ";
    cin>>choice;
    if(choice==1)
    {
        calendar();
    }
    else if(choice==2)
    {
        agecalculate();
    }
    else if(choice==3)
    {
        lengthconv();
    }
    else if(choice==4)
    {
        timeconv();
    }
    else if(choice==5)
    {
        tempconv();
    }
    else if(choice==6)
    {
        currencyconv();
    }
    else
    {
        cout<<"Wrong Input Entered"<<endl;
        return;
    }
}
int main()
{
    menu();
    int flag;
    while(1)
    {
        cout<<"Enter 1 for main menu & any other key to exit : "<<endl;
        cin>>flag;
        system("cls||clear");
        if(flag==1)
        {
            menu();
        }
        else
        {
            return 0;
        }
    }
    return 0;
}
