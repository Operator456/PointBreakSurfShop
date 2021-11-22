#include<iostream>
using namespace std;
//global constants
#define SMALL 175.00
#define MEDIUM 190.00
#define LARGE 200.00
#define XLARGE 250.00
//function prototypes
void showUsage();
void MakePurchase(int&, int&, int&, int&);
void DisplayPurchase(const int, const int, const int, const int);
void DisplayTotal(const int, const int, const int, const int);
//main function
int main()
{
    //declare integer variables
    int iTotalSmall = 0;
    int iTotalMedium = 0;
    int iTotalLarge = 0;
    int iTotalXlarge = 0;
    char userchoice = ' ';
    bool repeat = true;
    showUsage();
    /*Loop repeats until repeat is true*/
    while (repeat)
    {
        //read user choice for selection
        cout << "Please enter selection: ";
        cin >> userchoice;
        //if else if statement to select the appropriate function
        if (userchoice == 'S' || userchoice == 's')
        {
            //call function, showUsage
            showUsage();
        }
        else if (userchoice == 'p' || userchoice == 'P')
        {
            //call function, MakePurchase
            MakePurchase(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXlarge);
        }
        else if (userchoice == 'c' || userchoice == 'C')
        {
            //call function, DisplayPurchase
            DisplayPurchase(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXlarge);
        }
        else if (userchoice == 't' || userchoice == 'T')
        {
            //call function, DisplayTotal
            DisplayTotal(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXlarge);
        }
        else if (userchoice == 'q' || userchoice == 'Q')
        {
            //set repeat to false
            repeat = false;
        }
        else
        {
            cout << "Invalid input" << endl;
        }
        cout << endl;
    }
    cout << "Thank you" << endl;
    system("pause");
    return 0;
}
/*
Function MakePurchase takes the reference arguments as input
and then prompt for quantity and type as input and then add
the quantity to the corresponding reference variable
*/
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXlarge)
{
    int quantity;
    char type;
    cout << "Please enter the quantity and type(S=small, M=medium, L=large, XL=XLarge) of surfboard you" <<
        endl << "would like to purchase: ";
    cin >> quantity >> type;

    if (type == 's' || type == 'S')
        iTotalSmall = iTotalSmall + quantity;
    if (type == 'm' || type == 'M')
        iTotalMedium = iTotalMedium + quantity;
    if (type == 'l' || type == 'L')
        iTotalLarge = iTotalLarge + quantity;
    if (type == 'x' || type == 'X')
        iTotalXlarge = iTotalXlarge + quantity;
}
/*
Function DisplayTotal takes the integer arguments as input
and then display the amount of total value for small, medium, large, and xlarge snowboards
purchase
*/
void DisplayTotal(int iTotalSmall, int iTotalMedium, int iTotalLarge, int iTotalXlarge)
{

    if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXlarge == 0)
        cout << "No purchases yet" << endl << endl;
    else
    {
        if (iTotalSmall != 0)
            cout << "The total number of small surf boards is " << iTotalSmall <<
            " at a total of $" << (iTotalSmall * SMALL) << endl;

        if (iTotalMedium != 0)
            cout << "The total number of medium surf boards is " << iTotalMedium <<
            " at a total of $" << (iTotalMedium * MEDIUM) << endl;

        if (iTotalLarge != 0)
            cout << "The total number of large surf boards is " << iTotalLarge <<
            " at a total of $" << (iTotalLarge * LARGE) << endl << endl;

        if (iTotalXlarge != 0)
            cout << "The total number of xlarge surf boards is " << iTotalXlarge <<
            " at a total of $" << (iTotalXlarge * XLARGE) << endl << endl;
    }
}
/*
Function DisplayPurchase takes the integer arguments as input
and then display the number of small, medium and large snowboards
purchase
*/
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXlarge)
{
    if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXlarge == 0)
        cout << "No purchases yet" << endl << endl;
    else
    {
        if (iTotalSmall != 0)
            cout << "The total number of small surf boards is " << iTotalSmall << endl;

        if (iTotalMedium != 0)
            cout << "The total number of medium surf boards is " << iTotalMedium << endl;

        if (iTotalLarge != 0)
            cout << "The total number of large surf boards is " << iTotalLarge << endl;

        if (iTotalXlarge != 0)
            cout << "The total number of xlarge surf boards is " << iTotalXlarge << endl;
    }
}
/*
Function showUsage that display the options to choose
*/
void showUsage()
{
    cout << "**********************************************************" << endl;
    cout << "*****Welcome to my Johny Utah's PointBreak Surf Shop*****" << endl;
    cout << "**********************************************************" << endl;
    cout << endl;
    cout << endl;
    cout << "To show program usage 'S'" << endl;
    cout << "To purchase a surfboard press 'P'" << endl;
    cout << "To display current purchases press 'C'" << endl;
    cout << "To display total amount due press 'T'" << endl;
    cout << "To quit the program press 'Q'" << endl << endl;
}