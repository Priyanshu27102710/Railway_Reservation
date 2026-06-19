# Railway Management System 🚆

## Overview

The Railway Management System is a simple console-based C++ application that allows users to manage train records. It demonstrates Object-Oriented Programming (OOP) concepts such as **Classes**, **Objects**, **Encapsulation**, **Constructors**, **Destructors**, **Static Members**, and **Arrays of Objects**.

## Features

* Add new train records
* Display all train details
* Search a train by train number
* Count total trains entered using a static variable
* Menu-driven user interface

## Technologies Used

* C++
* Object-Oriented Programming (OOP)
* Standard Libraries:

  * `<iostream>`
  * `<cstring>`

## Classes Used

### 1. Train Class

Stores train-related information:

* Train Number
* Train Name
* Source Station
* Destination Station
* Train Time

#### Functions

* `inputTrainDetails()` – Accept train details from the user.
* `displayTrainDetails()` – Display train information.
* Getter and Setter functions.
* `getTrainCount()` – Returns the total number of trains entered.

### 2. RailwaySystem Class

Manages all train records.

#### Functions

* `addTrain()` – Add a new train.
* `displayAllTrains()` – Display all train records.
* `searchTrainByNumber()` – Search a train using its train number.

## Menu Options

1. Add Train
2. Display All Trains
3. Search Train By Number
4. Display Total Trains
5. Exit

## Sample Output

```
1 = Add Train
2 = Display All Trains
3 = Search Train By Number
4 = Display Total Trains
5 = Exit

Enter Choice: 1

Enter Train Number = 101
Enter Train Name = Rajdhani Express
Enter Source = Delhi
Enter Destination = Mumbai
Enter Train Time = 08:30
```

## OOP Concepts Implemented

* Encapsulation
* Constructors
* Destructors
* Static Data Members
* Arrays of Objects
* Data Hiding
* Member Functions

## How to Compile and Run

### Compile

```bash
g++ railway.cpp -o railway
```

### Run

```bash
./railway
```

## Future Enhancements

* Train ticket booking system
* File handling for data storage
* Update and delete train records
* Passenger management
* Admin login authentication

## Author

Developed as a C++ Object-Oriented Programming Project.
