#include <iostream>
#include <string>
using namespace std;

int main () {
    bool y = true;
    while (y == true) {
        cout << "|| WEATHER ANALYZER ||" << endl;
        string start_choice;
        cout << "\nStart program? (Yes/No): ";
        cin >> start_choice;

        if (start_choice == "Yes") {
            // Variables declared outside the loop
            double arr_temperatures[7];
            double average_temperatures = 0;

            cout << "Please enter numbers in Fahreinheit" << endl;

            for (int i = 0; i < 7; i++) {
                double temperature = 0;
    
                cout << "Enter the temperature for day " << i + 1 << ": ";
                cin >> temperature;
                arr_temperatures[i] = temperature;

                average_temperatures += temperature;
            }
            average_temperatures /= 7;  

            // Finding max number
            double max_number = arr_temperatures[0]; 
            int max_day = 0; 
            double max_number_celsius;
            for (int i = 1; i < 7; i++) { 
                if (arr_temperatures[i] > max_number) {  
                    max_number = arr_temperatures[i];
                    max_number_celsius = (max_number - 32) * 5/9;
                    max_day = i;
                }
            }

            // Finding min number
            double min_number = arr_temperatures[0];  
            int min_day = 0;
            double min_number_celsius;
            for (int i = 1; i < 7; i++) {  
                if (arr_temperatures[i] < min_number) {  
                    min_number = arr_temperatures[i];
                    min_number_celsius = (min_number - 32) * 5/9;
                    min_day = i;
                }
            }

            // Finding amount of days above average
            int num_days_above_average = 0;
            for (int i = 0; i < 7; i++) {
                if (arr_temperatures[i] > average_temperatures) {
                    num_days_above_average += 1;
                } 
            }

            // Finding amount of days below 32
            int num_days_below_32 = 0;
            for (int i = 0; i < 7; i++) {
                if (arr_temperatures[i] < 32) {
                    num_days_below_32 += 1;
                } 
            }

            // Final report
            cout << "\n|| END REPORT ||\n\n";

            cout << "Full array: ";
            for (int i = 0; i < 7; i++) {  
                cout << arr_temperatures[i] << " ";
            }
            cout << endl << endl;

            cout << "Hottest day: Day " << max_day + 1 << " with " << max_number << "°F" << " or " << max_number_celsius << "°C" << endl << endl;

            cout << "Hottest day: Day " << min_day + 1 << " with " << min_number << "°F" << " or " << min_number_celsius << "°C" << endl << endl;

            cout << "Average temp: " << average_temperatures << " or " << ((average_temperatures - 32) * 5.0 / 9.0) << endl << endl;

            cout << "Number of days above average: " << num_days_above_average << endl << endl;

            cout << "Number of days below 32°F: " << num_days_below_32 << endl << endl;

        } else if (start_choice == "No" || start_choice == "no") {
            y = false;
            continue;
        } else {
            cout << "Invalid input, terminating program ...";
            y = false;
            return 0;
            
        }
    }
    cout << "Terminating program ...";
    return 0;
}
                        