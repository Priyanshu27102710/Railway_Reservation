#include <iostream>

#include <cstring>

using namespace std;

class Train
{
private:

    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];

    static int trainCount;

public:
   
    Train()
    {
        trainNumber = 0;
        strcpy(trainName, "");
        strcpy(source, "");
        strcpy(destination, "");
        strcpy(trainTime, "");
    }

    Train(int num, const char name[], const char src[],const char dest[], const char time[])
    {
        trainNumber = num;
        strcpy(trainName, name);
        strcpy(source, src);
        strcpy(destination, dest);
        strcpy(trainTime, time);
        trainCount++;
    }

    ~Train()
    {

    }

    void setTrainNumber(int num)
    {
        trainNumber = num;
    }

    void setTrainName(const char name[])
    {
        strcpy(trainName, name);
    }

    void setSource(const char src[])
    {
        strcpy(source, src);
    }

    void setDestination(const char dest[])
    {
        strcpy(destination, dest);
    }

    void setTrainTime(const char time[])
    {
        strcpy(trainTime, time);
    }

    int getTrainNumber()
    {
        return trainNumber;
    }

    char* getTrainName()
    {
        return trainName;
    }

    char* getSource()
    {
        return source;
    }

    char* getDestination()
    {
        return destination;
    }

    char* getTrainTime()
    {
        return trainTime;
    }

    void inputTrainDetails()
    {
        cout << "\nEnter Train Number = ";
        cin >> trainNumber;
        cin.ignore();

        cout << "Enter Train Name =  ";
        cin.getline(trainName, 50);

        cout << "Enter Source = ";
        cin.getline(source, 50);

        cout << "Enter Destination = ";
        cin.getline(destination, 50);

        cout << "Enter Train Time = ";
        cin.getline(trainTime, 10);

        trainCount++;
    }

    void displayTrainDetails()
    {
        cout << "\nTrain Number  = " << trainNumber;
        cout << "\nTrain Name    =  " << trainName;
        cout << "\nSource        = " << source;
        cout << "\nDestination   = " << destination;
        cout << "\nTrain Time    = " << trainTime;
        
    }

    static int getTrainCount()
    {
        return trainCount;
    }
};

int Train::trainCount = 0;

class RailwaySystem
{
private:
    Train trains[100];
    int trainSize;

public:
    RailwaySystem()
    {
        trainSize = 0;
    }

    void addTrain()
    {
        if (trainSize < 100)
        {
            trains[trainSize].inputTrainDetails();
            trainSize++;
        }
        else
        {
            cout << "\nTrain record limit reached";
        }
    }

    void displayAllTrains()
    {
        if (trainSize == 0)
        {
            cout << "\nNo train records found";
            return;
        }

        cout << "\nTrain Record\n";
        
        for (int i = 0; i < trainSize; i++)
        {
            trains[i].displayTrainDetails();

        }
    }

    void searchTrainByNumber(int number)
    {
        bool found = false;

        for (int i = 0; i < trainSize; i++)
        {
            if (trains[i].getTrainNumber() == number)
            {
                cout << "\nTrain Found:";
                trains[i].displayTrainDetails();
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "\nTrain not found";
        }
    }
};

int main()
{
    RailwaySystem rs;
    int choice, trainNumber;

    do
    {
    
        cout << "\n1 = Add Train";
        cout << "\n2 = Display All Trains";
        cout << "\n3 = Search Train By Number";
        cout << "\n4 = Display Total Trains";
        cout << "\n5 = Exit";
        cout << "\nEnter Choice: ";
        cout << "\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            rs.addTrain();
            break;

        case 2:
            rs.displayAllTrains();
            break;

        case 3:
            cout << "\nEnter Train Number to Search: ";
            cin >> trainNumber;
            rs.searchTrainByNumber(trainNumber);
            break;

        case 4:
            cout << "\nTotal Trains Entered: "
                 << Train::getTrainCount();
            break;

        case 5:
            cout << "\nThank You.... ";
            break;

        default:
            cout << "\nInvalid Choice!";
        }

    } while (choice != 5);

    return 0;
}