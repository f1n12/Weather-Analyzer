# Weather Analyzer

A simple C++ program that analyzes weekly temperature data.

## Features

- Input temperatures for 7 days
- Calculate average temperature
- Find hottest and coldest days
- Count days above average
- Count days below freezing (32°F)

## How to Compile and Run

### Windows (MinGW):
```bash
g++ main.cpp -o weather.exe
./weather.exe
```
### Mac/Linux:
```bash
g++ main.cpp -o weather
./weather
```
________________________________

### Sample Output


|| WEATHER ANALYZER ||

Start program? (Yes/No): Yes
Please enter all data in fahrenheit
Enter temperature for day 1: 72
Enter temperature for day 2: 68
Enter temperature for day 3: 65
Enter temperature for day 4: 32
Enter temperature for day 5: 30
Enter temperature for day 6: 70
Enter temperature for day 7: 75

|| END REPORT ||

Full array: 72 68 65 32 30 70 75

Hottest day: Day 7 with 75°F

Coldest day: Day 5 with 30°F

Average temp: 58.8571°F

Number of days above average: 3

Number of days below 32°F: 2
________________________________
Concepts Used

- Arrays (size 7)
- For loops and while loops
- Finding max/min values
- Calculating averages
- Input validation

Author
F1n12
