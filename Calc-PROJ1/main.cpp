#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>

using namespace std;

class calc {

private:

    double x;
    double y;
    double v;
     

public:

    void SelectorAnimation(const string& text, int delay_ms = 25) {
        for (char c : text) {
            cout << c << flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
        }
    }

    void goodbyeani (const string& message) {
        for (int i = 0; i < message.length(); i++) {
            cout << message[i] << flush;
            // Introduce a delay between characters
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
    }

    void trapezium() {

        cout << "Enter the first base: ";
        cin >> x;
        cout << "Enter the second base: ";
        cin >> y;
        cout << "Enter the Height: ";
        cin >> v;
        cout << "The Area of Trapezium is = " << (x + y) * v / 2 << endl;
    }

    void circle() {

        cout << "Enter the radius of the circle: ";
        cin >> x;
        y = 3.14 * x * x;
        cout << "The area of the  Circle is = " << y << endl;
    }

    void rectangle() {

        cout << "Enter the Length of the Rectangle: ";
        cin >> x;
        cout << "Enter the Width of the Rectangle: ";
        cin >> y;
        v = x * y;
        cout << "The Area of Rectangle is = " << v << endl;
    }

    void triangle() {
        
        cout << "Enter the Base of the Triangle: ";
        cin >> x;
        cout << "Enter the Height of the Triangle: ";
        cin >> y;
        v = (x * y) / 2;
        cout << "The Area of Triangle is = " << v << endl;
    }

    void square() {

        cout << "Enter the Side of the Square: ";
        cin >> x;
        v = x * x;
        cout << "The Area of Square is = " << v << endl;
    }

    void parallelogram() {

        cout << "Enter the Base of the Parallelogram: ";
        cin >> x;
        cout << "Enter the Vertical Height of the Parallelogram: ";
        cin >> y;
        v = x * y;
        cout << "The Area of Parallelogram is = " << v << endl;
    }

    void kite() {

        cout << "Enter the Height of the Kite: ";
        cin >> x;
        cout << "Enter the Lenght of the Kite: ";
        cin >> y;
        v = x * y / 2;
        cout << "The Area of Kite is: " << v << endl;
    }

    void prism() {

        cout << "Enter the Base of the Prism: ";
        cin >> x;
        cout << "Enter the Lateral of the Prism: ";
        cin >> y;
        v = 2 * x + y;
        cout << "The Area of Prism is: " << v << endl;
    }

    void cylinder() {

        cout << "Enter the Radius of the Cylinder: ";
        cin >> x;
        cout << "Enter the Height of the Cylinder: ";
        cin >> y;
        v = 2 * 3.14 * x * y + 2 * 3.14 * x * x;
        cout << "The Area of Cylinder is: " << v << endl;
    }

    void rhombus() {

        cout << "Please Choose an Operation: " << endl;
        cout << "\t1. Diagonal Area of Rhombus. \n";
        cout << "\t2. Base and Height of Rhombus. \n";
        cin >> x;

            if (x == 1) {

                cout << "Enter the Diagonal 1: ";
                cin >> x;
                cout << "Enter the Diagonal 2: ";
                cin >> y;
                v = 0.5 * x * y;
                cout << "The Area of Rhombus is: " << v << endl;
            }

            else if (x == 2) {

                cout << "Enter the Base of Rhombus: ";
                cin >> x;
                cout << "Enter the Height of Rhombus: ";
                cin >> y;
                v = x * y;
                cout << "The Area of Rhombus is: " << v << endl;
            }

            else {
                cout << "INVALID INPUT!!!";
            }
    }

};

int main()
{

    calc c; 

    int choice;
    string mess = "Exiting the program. Goodbye ^_^!";

    while (1)
    {

        c.SelectorAnimation("\n~~~~~~~~~~~~~~~~~~~~~~~~"
            "~~~~~~~~~~~~~~~~~~~~~"
            "~~WELCOME TO AREA CALCULATOR~~~~~~~~~~~~~~~~~"
            "~~~~~~~~~~~~~~~~~~~~~"
            "~~~~~~~~~\n\n");

        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Add a delay after the welcome message

        c.SelectorAnimation("Enter Your Choice\n");
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Add a delay after "Enter Your Choice"

        c.SelectorAnimation("\t1. Area of Trapezium.\n");
        std::this_thread::sleep_for(std::chrono::milliseconds(200)); // Add a shorter delay between options
        c.SelectorAnimation("\t2. Area of Circle.\n");
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        c.SelectorAnimation("\t3. Area of Rectangle.\n");
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        c.SelectorAnimation("\t4. Area of Triangle.\n");
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        c.SelectorAnimation("\t5. Area of Square.\n");
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        c.SelectorAnimation("\t6. Area of Parallelogram.\n");
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        c.SelectorAnimation("\t7. Area of Kite. \n");
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        c.SelectorAnimation("\t8. Area of Prism. \n");
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        c.SelectorAnimation("\t9. Area of Cylinder. \n");
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        c.SelectorAnimation("\t10. Area of Rhomnus. \n");
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        c.SelectorAnimation("\t11. Exit.\n\n");

        cin >> choice;

    switch (choice) {

        case 1:
                c.trapezium();
            break;

        case 2 :
                c.circle();
            break;

        case 3 :
                c.rectangle();
            break;

        case 4 :
                c.triangle();
            break;

        case 5 :
                c.square();
            break;
        
        case 6 :
                c.parallelogram();
            break;

        case 7 :
                c.kite();
            break;

        case 8 : 
                c.prism();
            break;

        case 9 :
                c.cylinder();
            break;

        case 10 :
                c.rhombus();
            break;

        case 11 : 
                c.goodbyeani(mess);
               return 0;
            break;
        default:

            cout << "\nInvalid choice\n";
        }
    }
    return 0;
}
