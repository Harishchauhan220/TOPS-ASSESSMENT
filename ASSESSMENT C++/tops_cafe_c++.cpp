#include <iostream>
#include <string>
using namespace std;
class Details
{
protected:
    int p1 = 300, p2 = 250, p3 = 270;
    int b1 = 50, b2 = 200, b3 = 250;
    int s1 = 180, s2 = 100, s3 = 130;
    int r1 = 150, r2 = 200, r3 = 175;
    int d1 = 100, d2 = 160, d3 = 140;
    int order;
    int quantity;
    int total_bill;
    char ch;
    int no;
    int price;
    int bill = 0;
    int pizza_bill = 0;
    int burger_bill = 0;
    int sandwich_bill = 0;
    int rolls_bill = 0;
    int dosa_bill = 0;

public:
    void food()
    {
        cout << "press for your order: ";
        cin >> order;

        cout << "your order is: " << order << endl;
        if (order == 1)
        {
            cout << "1. cheese burst pizza..Rs.." << p1 << endl;
            cout << "2. Maxican pizza..Rs.." << p2 << endl;
            cout << "3. Italian pizza..Rs." << p3 << endl;

            cout << "please enter which type of pizza you want... ";
            cin >> no;

            switch (no == 1)
            {
            case 1:
                cout << "please enter quantity of cheese burst pizza..  ";
                cin >> quantity;
                price = p1 * quantity;
                pizza_bill = bill + price;
                cout << "bill is.." << pizza_bill << endl;
                break;
            }

            switch (no == 2)
            {
            case 1:
                cout << "please enter quantity of maxican pizza..  ";
                cin >> quantity;
                price = p2 * quantity;
                pizza_bill = bill + price;
                cout << " bill is: " << pizza_bill << endl;
                break;
            }

            switch (no == 3)
            {
            case 1:
                cout << "please enter quantity of italian pizza..  ";
                cin >> quantity;
                price = p3 * quantity;
                pizza_bill = bill + price;
                cout << " bill is: " << pizza_bill << endl;
                break;
            }
        }
    }

    void burger()
    {
        cout << "your order: ";
        cin >> order;

        cout << "your order is: " << order << endl;
        if (order == 2)
        {
            cout << "1. Aloo tikki burger..Rs." << b1 << endl;
            cout << "2. American supreme burger..Rs." << b2 << endl;
            cout << "3. Maharaja mac Burger..Rs." << b3 << endl;

            cout << "please enter which type of burger you want... ";
            cin >> no;

            switch (no == 1)
            {
            case 1:
                cout << "please enter quantity of Aloo tikki burger..  ";
                cin >> quantity;
                price = b1 * quantity;
                burger_bill = bill + price;
                cout << " bill is: " << burger_bill << endl;
                break;
            }

            switch (no == 2)
            {
            case 1:
                cout << "please enter quantity of American supreme burger..  ";
                cin >> quantity;
                price = b2 * quantity;
                burger_bill = bill + price;

                cout << " bill is: " << burger_bill << endl;
                break;
            }

            switch (no == 3)
            {
            case 1:
                cout << "please enter quantity of Maharaja mac Burger..  ";
                cin >> quantity;
                price = b3 * quantity;
                burger_bill = bill + price;
                cout << " bill is: " << burger_bill << endl;
                break;
            }
        }
    }

    void sandwich()
    {
        cout << "your order: ";
        cin >> order;

        cout << "your order is: " << order << endl;
        if (order == 3)
        {
            cout << "1. paneer sandwich..Rs." << s1 << endl;
            cout << "2. cheese sandwich..Rs." << s2 << endl;
            cout << "3. grill sandwich..Rs." << s3 << endl;

            cout << "please enter which type of sandwich you want... ";
            cin >> no;

            switch (no == 1)
            {
            case 1:
                cout << "please enter quantity of paneer sandwich..  ";
                cin >> quantity;
                price = s1 * quantity;
                sandwich_bill = bill + price;
                cout << " bill is: " << sandwich_bill << endl;
                break;
            }

            switch (no == 2)
            {
            case 1:
                cout << "please enter quantity of chesse sandwich..  ";
                cin >> quantity;
                price = s2 * quantity;
                sandwich_bill = bill + price;
                cout << " bill is: " << sandwich_bill << endl;
                break;
            }

            switch (no == 3)
            {
            case 1:
                cout << "please enter quantity of grill sandwich..  ";
                cin >> quantity;
                price = s3 * quantity;
                sandwich_bill = bill + price;
                cout << " bill is: " << sandwich_bill << endl;
                break;
            }
        }
    }

    void rolls()
    {
        cout << "your order: ";
        cin >> order;

        cout << "your order is: " << order << endl;
        if (order == 4)
        {
            cout << "1. cheese panner roll..Rs." << r1 << endl;
            cout << "2. American roll..Rs." << r2 << endl;
            cout << "3. italian roll..Rs." << r3 << endl;

            cout << "please enter which type of roll you want... ";
            cin >> no;

            switch (no == 1)
            {
            case 1:
                cout << "please enter quantity of chesse paneer roll..  ";
                cin >> quantity;
                price = r1 * quantity;
                rolls_bill = bill + price;
                cout << "bill is: " << rolls_bill << endl;
                break;
            }

            switch (no == 2)
            {
            case 1:
                cout << "please enter quantity of American roll..  ";
                cin >> quantity;
                price = r2 * quantity;
                rolls_bill = bill + price;
                cout << " bill is: " << rolls_bill << endl;
                break;
            }

            switch (no == 3)
            {
            case 1:
                cout << "please enter quantity of italian roll..  ";
                cin >> quantity;
                price = r3 * quantity;
                rolls_bill = bill + price;
                cout << " bill is: " << rolls_bill << endl;
                break;
            }
        }
    }

    void dosa()
    {
        cout << "your order: ";
        cin >> order;

        cout << "your order is: " << order << endl;
        if (order == 5)
        {
            cout << "1. masala dosa..Rs." << d1 << endl;
            cout << "2. mysore dosa..Rs." << d2 << endl;
            cout << "3. cheese dosa..Rs." << d3 << endl;

            cout << "please enter which type of dosa you want... ";
            cin >> no;

            switch (no == 1)
            {
            case 1:
                cout << "please enter quantity of masala dosa..  ";
                cin >> quantity;
                price = d1 * quantity;
                dosa_bill = bill + price;
                cout << " bill is: " << dosa_bill << endl;
                break;
            }

            switch (no == 2)
            {
            case 1:
                cout << "please enter quantity of mysore dosa..  ";
                cin >> quantity;
                price = d2 * quantity;
                dosa_bill = bill + price;
                cout << " bill is: " << dosa_bill << endl;
                break;
            }

            switch (no == 3)
            {
            case 1:
                cout << "please enter quantity of cheese dosa..  ";
                cin >> quantity;
                price = d3 * quantity;
                dosa_bill = bill + price;
                cout << " bill is: " << dosa_bill << endl;
                break;
            }
        }
    }

    void amount()
    {
        total_bill = pizza_bill + burger_bill + sandwich_bill + rolls_bill + dosa_bill;
        cout << "Total bill is : " << total_bill << endl;
    }
};

int main()
{

    Details z;
    string name;
    int repeat;
    int choice;
    cout << " ----------NAMASTE WELCOME TO TOPS CAFE--------- " << endl;
    cout << "NAME IS : ";
    getline(cin, name);
    cout << "your name is: " << name << endl;
here:

    cout << "1. Pizza" << endl;
    cout << "2. Burger" << endl;
    cout << "3. Sandwich" << endl;
    cout << "4. Rolls" << endl;
    cout << "5. Dosa" << endl;

    cout << "0. final bill" << endl;

    cout << "please enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        z.food();
        break;

    case 2:
        z.burger();
        break;

    case 3:
        z.sandwich();
        break;

    case 4:
        z.rolls();
        break;

    case 5:
        z.dosa();
        break;

    case 6:
        z.amount();
        break;
    }
    cout << "do you want more ?(1.y/2.n):";
    cin >> repeat;
    if (repeat == 1)
    {
        goto here;
    }
    else
    {
        cout << "----------------------------" << endl;
        z.amount();
        cout << "----------------------------" << endl;
        cout << "---------THANK YOU------------" << endl;
        cout << "---------VISIT AGAIN------------" << endl;
    }
}
