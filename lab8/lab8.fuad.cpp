/*
md imad fuad
June 3, 2026
lab 8: Getting Help from AI to Build a Temperature Converter
*/

#include <iostream>
#include <iomanip>
using namespace std;

// function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius){
    double fahrenheit = (1.8 * celsius) + 32;
    return fahrenheit;
}

// function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit){
    double celsius = (5.0 / 9.0) * (fahrenheit - 32);
    return celsius;
}

// function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius){
    double kelvin = celsius + 273.15;
    return kelvin;
}

// function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit){
    double kelvin = (fahrenheit - 32) * (5.0 / 9.0) + 273.15;
    return kelvin;
}

int main(){

    int choice;
    double temperature;
    double result;

    cout << fixed << setprecision(1);

    cout << "\nChoose conversion type:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Fahrenheit to Kelvin" << endl;

    cout << "\nEnter choice: ";
    cin >> choice;

    if(choice == 1){
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;

        result = celsiusToFahrenheit(temperature);
        cout << temperature << " C is " << result << " F" << endl;
    }
    else if(choice == 2){
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;

        result = fahrenheitToCelsius(temperature);
        cout << temperature << " F is " << result << " C" << endl;
    }
    else if(choice == 3){
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;

        result = celsiusToKelvin(temperature);
        cout << temperature << " C is " << result << " K" << endl;
    }
    else if(choice == 4){
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;

        result = fahrenheitToKelvin(temperature);
        cout << temperature << " F is " << result << " K" << endl;
    }
    else{
        cout << "Invalid choice." << endl;
    }

    return 0;
}

/*
Review and Understand:

1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
The AI used functions and setprecision. I understand that functions help organize the program,
and setprecision helps display the answer with one decimal place.

2. Are there any issues or improvements you noticed? Explain.
The first AI code only converted Celsius to Fahrenheit. I improved it by adding user input,
a menu choice, and more conversion options.

3. What methods did you use to test if the AI code was working as it should? Explain.
I tested the program with different values. For example, I tested 25 Celsius and got 77.0 Fahrenheit.
I also tested 98.6 Fahrenheit and got 37.0 Celsius.
*/