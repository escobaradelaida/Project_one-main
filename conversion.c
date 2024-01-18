#include <stdio.h>

int main()
{
    //variables
    int choice;
    double celcius_choice, milli_choice, kilo_choice, liter_choice, centi_choice;

        start: //used a start-goto "loop" to repeat the program when an invalid input occurs
    
        printf("\nThe Metric Converter\n");
        printf("___________________________\n");
        printf("\n1. Celcius to Farenheit\n");
        printf("2. Milliliters to Cups\n");
        printf("3. Liters to Gallons\n");
        printf("4. Kilometers to Feet\n");
        printf("5. Centimeter to Inch\n");
        printf("0. Quit");
        printf("\nChoose your option: ");
        scanf("%d", &choice);

        if (choice == 0) //quits the program if option 0 is chosen
        {
            return 0;
        }
//use switch statement to go through all the menu choices and to put in all the conversion equations to their respective areas
    switch(choice){
        case 1:
        printf("How many degrees Celcius?: ");
        scanf("%lf", &celcius_choice);
        double temp_convert = ((celcius_choice * (1.8)) + 32);
        printf("It is %.2f degrees Farenheit.", temp_convert);
            //break;
            goto start;
        case 2:
        printf("How many milliliters?: ");
        scanf("%lf", &milli_choice);
        double liquid1 = (milli_choice / 284.1);
        printf("There are %f cups in %.2f milliliters.", liquid1, milli_choice);
            //break;
            goto start;
        case 3:
        printf("How many liters?: ");
        scanf("%lf", &liter_choice);
        double liquid = (liter_choice / 3.785);
        printf("There are %.4f gallons in %.2f liters.", liquid, liter_choice);
            //break;
            goto start;
        case 4:
        printf("How many kilometers?: ");
        scanf("%lf", &kilo_choice);
        double feet = (kilo_choice * 3281);
        printf("There are %.2f feet in %.2f kilometers.", feet, kilo_choice);
            //break;
            goto start;
        case 5:
        printf("How many centimeters?: ");
        scanf("%lf", &centi_choice);
        double inch = (centi_choice / 2.54);
        printf("There are %.2f inches in %.2f centimeters.", inch, centi_choice);
            //break;
            goto start;
        // the default will occur when the user puts in an invalid input
        //the goto will direct the program to go back to the main menu
        default:
            printf("Please enter a valid choice!\n\n");
            goto start;
    }
    return 0;
}
