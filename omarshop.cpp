#include <iostream>

using namespace std;

int sellItem(int money, int mansion, int farm, int car);

int main()
{
    int money = 100;

    cout << "\t\t\tWelcome to My shopping World Store.\t\t\n"
         << "\t\t\t(You have 100$)\n\n\n\n" << endl;
    cout << "What is it that you would like to buy?" << endl << endl;
    cout << "1. Mansion : 40 Money" << endl << "2. Farm: 20 Money" << endl;
    cout << "3. Car: 20 Money" << endl << "4. Sell" << endl
         << "5. Exit\n\nResponse: ";

    int choice;
    int mansion = 1;
    int farm = 1;
    int car = 1;

    cin >> choice;
    cout << endl;

    while (choice != 5)
    {
    switch (choice)
    {
    case 1:
           if (money >= 40)
                {
                money = money - 40;
                mansion++;
                cout << "Your quantity of Mansion is now : " << mansion << endl;
                cout << "You now have " << money << " dollars." << endl << endl << "Anything else?" << endl << endl;
                cout << "1. Mansion: 40 Money" << endl << "2. Farm: 20 Money" << endl;
                cout << "3. Car: 20 Money" << endl
                << "4. Sell" << endl << "5. Exit\n\nResponse: ";
                cin >> choice;
                }
           else
                {
                cout << "Sorry, but you don't have enough money." << endl;
                cin >> choice;
                }
           break;
    case 2:
           if (money >= 20)
                {
                money = money - 20;
                farm++;
                cout << "You have " << farm << " farm "<< endl;
                cout << "You now have " << money << " dollars." << endl << endl << "Anything else?" << endl << endl;
                cout << "1. Mansion: 40 Money" << endl << "2. Farm: 20 Money" << endl;
                cout << "3. Car: 20 Money" << endl
                    << "4. Sell" << endl << "5. Exit\n\nResponse: ";
                cin >> choice;
                }
           else
                {
                cout << "Sorry, but you don't have enough money." << endl;
                cin >> choice;
                }
           break;
    case 3:
           if (money >= 20)
                {
                money = money - 20;
                car++;
                cout << "You have " << car << "cars "<< endl;
                cout << "You now have " << money << " dollars." << endl << endl << "Anything else?" << endl << endl;
                cout << "1. Mansion: 40 Money" << endl << "2. Farm: 20 Money" << endl;
                cout << "3. Car: 20 Money" << endl
                << "4. Sell" << endl << "5. Exit\n\nResponse: ";
                cin >> choice;
                }
           else
                {
                cout << "Sorry, but you don't have enough money." << endl;
                cin >> choice;
                }
           break;
    case 4:
           sellItem(money, mansion, farm, car);
                cout << "1. Mansion: 40 Money" << endl << "2. Farm: 20 Money" << endl;
                cout << "3. Car: 20 Money" << endl
                << "4. Sell" << endl << "5. Exit\n\nResponse: ";
           cin >> choice;
           break;
    default:
            cout << "I'm sorry. I didn't get that." << endl;
            cin >> choice;
    }
    };

    cout << "Alright. See ya around.";

    return 0;
}

int sellItem(int money, int mansion, int farm, int car)
{
    cout << "Alright, what do ya have?(depreciation will occur on some stuff)" << endl << endl;
    cout << "1. Mansion: 30 Money" << endl << "2. Farm: 30 Money" << endl;
    cout << "3. Car: 10 Money" << endl
         << "4. Return\n\nResponse: ";

    int choice;
    cin >> choice;
    cout << endl;

   while (choice != 4)
   {
   switch (choice)
   {
   case 1:
          if (mansion > 1)
               {
               money = money + 30;
               mansion--;
               cout << "Your Mansion is now: " << mansion << endl;
               cout << "You now have " << money << " dollars." << endl << endl << "Anything else?" << endl << endl;
               cout << "1. Mansion: 30 Money" << endl << "2. Farm: 30 Money" << endl;
               cout << "3. Car: 10 Money" << endl
               << "4. Return\n\nResponse: ";
               cin >> choice;
               }
          else
               {
               cout << "Hmmm, it doesn't look like you have enough of this stuff to sell.";
               cin >> choice;
               }
          break;
   case 2:
          if (farm > 1)
               {
               money = money + 30;
               farm--;
               cout << "Your Farm is now: " << farm << endl;
               cout << "You now have " << money << " dollars." << endl << endl << "Anything else?" << endl << endl;
               cout << "1. Mansion: 30 Money" << endl << "2. Farm: 30 Money" << endl;
               cout << "3. Car: 10 Money" << endl
               << "4. Return\n\nResponse: ";
               cin >> choice;
               }
          else
               {
               cout << "Hmmm, it doesn't look like you have enough of this stuff to sell.";
               cin >> choice;
               }
          break;
   case 3:
          if (car > 1)
               {
               money = money + 10;
               car--;
               cout << "Your Car is now: " << car << endl;
               cout << "You now have " << money << " dollars." << endl << endl << "Anything else?" << endl << endl;
               cout << "1. Mansion: 30 Money" << endl << "2. Farm: 10 Money" << endl;
               cout << "3. Car: 10 Money" << endl
               << "4. Return\n\nResponse: ";
               cin >> choice;
               }
          else

               {
               cout << "Hmmm, it doesn't look like you have enough of this stuff to sell.";
               cin >> choice;
               }
          break;
   default:
           cout << "I'm sorry. I didn't get that." << endl;
           cin >> choice;
   }
   }
   return money, mansion, farm, car;
}
