/*
We are making a program for children vaccination system in which under 12 childrens must have to get vaccine
*/

#include <iostream> // Include the input/output library
#include <map>      // Include the map library
#include <string>   // Include the string library
#include <vector>   // Include the vector library

using namespace std; // Use the standard namespace

struct Patient // Define a structure for patient data
{
    string name;    // Name of the patient in alphabets or digits
    int age;        // Age of the patient in digits
    string vaccine; // Vaccine received by the patient
    string gender;  // Gender of the patient
};

vector<Patient> patients;        // Declare a vector to store all patients
vector<Patient> recent_patients; // Declare a vector to store recent patients

void add_new_patient() // Function to display add new patients
{
    system("cls");
    cout << "\t\n----- Children Vaccination Management LogIn -----\n"
         << endl;
    Patient p;                        // Declare a variable to store the patient's data
    cout << "\nEnter patient name: "; // Prompt the user to enter the patient's
    // cin.ignore();   // Ignore any previous input
    getline(cin, p.name);                   // Read the patient's name from the input. getline is used because we use name in structure function
    cout << "Choose your gender (M/F/P): "; // Prompt the user to choose the patient's gender
    cin >> p.gender;                        // Read the patient's gender from the input
    switch (p.gender[0])                    // Use [0] with p.gender to get the first character
    {
    case 'M': // If the first character is M or m
    case 'm':
        p.gender = "Male"; // Set the patient's gender to Male
        break;             // Exit the switch statement
    case 'F':              // If the first character is F or f
    case 'f':
        p.gender = "Female"; // Set the patient's gender to Female
        break;               // Exit the switch statement
    case 'P':                // If the first character is P or p
    case 'p':
        p.gender = "Prefer not";                                           // Set the patient's gender to Prefer not
        break;                                                             // Exit the switch statement
    default:                                                               // If the first character is none of the above
        cout << "Invalid input. Please enter the correct gender." << endl; // Print an error message
        return;                                                            // Return from the function in case of invalid input.
    }
    cout << "Enter patient age: "; // Prompt the user to enter patient age
    cin >> p.age;                  // Read and store the patient's age
    cin.ignore();                  // Ignore any previous input
    if (p.age <= 12)               // Check if the patient's age is 12 or below
    {
        cout << "You are eligible for vaccination" << endl;     // Display eligibility message for vaccination
        cout << "Select Vaccine from the following:- " << endl; // Display the available vaccine options
        cout << "\t1.  Hep-A"
             << "\t2.  Hep-B" << endl;
        cout << "\t3.  RV"
             << "\t\t4.  DTaP" << endl;
        cout << "\t5.  Hib"
             << "\t\t6.  PCV-13" << endl;
        cout << "\t7.  IPV"
             << "\t\t8.  IIV" << endl;
        cout << "\t9.  MMR"
             << "\t\t10. VAR" << endl;
        cout << "\t11. MenACWY"
             << "\t12. HPV" << endl;
        int choice;     // Declare a variable to store the user's choice
        cin >> choice;  // Read and store the user's vaccine choice
        switch (choice) // switch statement to choose 1 option from above vaccines.
        {
        case 1:                                                  // if choice is 1
            p.vaccine = "Hep-A";                                 // set patiens's vaccine to Hep-A
            break;                                               // Exit the switch statement
        case 2:                                                  // if choice is 2
            p.vaccine = "Hep-B";                                 // set patiens's vaccine to Hep-B
            break;                                               // Exit the switch statement
        case 3:                                                  // if choice is 3
            p.vaccine = "RV";                                    // set patiens's vaccine to RV
            break;                                               // Exit the switch statement
        case 4:                                                  // if choice is 4
            p.vaccine = "DTaP";                                  // set patiens's vaccine to DTaP
            break;                                               // Exit the switch statement
        case 5:                                                  // if choice is 5
            p.vaccine = "Hib";                                   // set patiens's vaccine to Hib
            break;                                               // Exit the switch statement
        case 6:                                                  // if choice is 6
            p.vaccine = "PCV-13";                                // set patiens's vaccine to PCV-13
            break;                                               // Exit the switch statement
        case 7:                                                  // if choice is 7
            p.vaccine = "IPV";                                   // set patiens's vaccine to IPV
            break;                                               // Exit the switch statement
        case 8:                                                  // if choice is 8
            p.vaccine = "IIV";                                   // set patiens's vaccine to IIV
            break;                                               // Exit the switch statement
        case 9:                                                  // if choice is 9
            p.vaccine = "MMR";                                   // set patiens's vaccine to MMR
            break;                                               // Exit the switch statement
        case 10:                                                 // if choice is 10
            p.vaccine = "VAR";                                   // set patiens's vaccine to VAR
            break;                                               // Exit the switch statement
        case 11:                                                 // if choice is 11
            p.vaccine = "MenACWY";                               // set patiens's vaccine to MenACWY
            break;                                               // Exit the switch statement
        case 12:                                                 // if choice is 12
            p.vaccine = "HPV";                                   // set patiens's vaccine to HPV
            break;                                               // Exit the switch statement
        default:                                                 // if choice is not 1 to 12
            cout << "Invalid choice. Please try again." << endl; // print invalid choice
            return;                                              // Return from the function in case of invalid choice
        }
    }
    else // if the patient's age above 12
    {
        cout << "You are not eligible for vaccination. You are over 12." << endl; // print not eligilbe message
        return;                                                                   // Return from the function if the patient is not eligible.
    }
    patients.push_back(p);           // add record to (vector) patients
    recent_patients.push_back(p);    // add record to (vector) recent_patients
    if (recent_patients.size() > 10) // if the size of the recent_patients(vector) is greater than 10 then it is used in void ten_most_recent_patients
    {
        recent_patients.erase(recent_patients.begin()); // it removes the first element of the (vector)recent_patients using the erase() method
    }
    else // if upper conditions true for vaccination
    {
        system("cls");
        cout << "    Patient record added successfully.\n"
             << endl; // print record added
    }
}

void record_of_old_patients() // Function to display records of old patients
{
    system("cls");
    cout << "\t\n----- Children Vaccination Management LogIn -----\n"
         << endl;
    if (patients.empty()) // Check if the 'patients' vector is empty
    {
        system("cls");
        cout << "\n  No patient records found." << endl; // Display a message if no patient records are found
        return; // Exit the function if no records are found
    }
    else
    {
        system("cls");
        cout << "\n----> Patient records:\n"
             << endl;                             // Display header for patient records
        for (int i = 0; i < patients.size(); i++) // Loop through the 'patients' vector to display individual records
        {
            cout << "Name: " << patients[i].name << endl;       // Display patient name
            cout << "Gender: " << patients[i].gender << endl;   // Display patient gender
            cout << "Age: " << patients[i].age << endl;         // Display patient age
            cout << "Vaccine: " << patients[i].vaccine << endl; // Display vaccine information
            cout << endl;                                       // Add an empty line for better readability
        }
    }
}

void ten_most_recent_patients() // Function to display the ten most recent patient records
{
    if (recent_patients.empty()) // Check if the 'recent_patients' vector is empty
    {
        system("cls");
        cout << "\n  No patient records found." << endl; // Display a message if no recent patient records are found
        return;                                          // Exit the function if no records are found
    }
    else
    {
        system("cls");
        cout << "\n----> Ten most recent patient records:\n"
             << endl;                                    // Display header for the ten most recent patient records
        for (int i = 0; i < recent_patients.size(); i++) // Loop through the 'recent_patients' vector to display individual records
        {
            cout << "Name: " << recent_patients[i].name << endl;       // Display patient name
            cout << "Gender: " << recent_patients[i].gender << endl;   // Display patient gender
            cout << "Age: " << recent_patients[i].age << endl;         // Display patient age
            cout << "Vaccine: " << recent_patients[i].vaccine << endl; // Display vaccine information
            cout << endl;                                              // Add an empty line for better readability
        }
    }
}

int main()
{

    map<string, string> userPasswords = // Map datatype used to store username-password pairs
        {
            {"tayyab", "2024"},
            {"wajeeh", "2024"},
            {"awais", "2024"},
            {"ali", "2024"},
            {"mohib", "2024"},
            {"sharique", "2024"},
        };
    string username;  // Variable for user input
    string passwords; // Variable for user input
    // Display login prompt
    cout << "\t\n----- Children Vaccination Management LogIn -----\n"
         << endl;
    cout << "LogIn Your ID:- \n"
         << endl;
    cout << "\tEnter username: ";
    cin >> username; // user input username
    cout << "\tEnter Password: ";
    cin >> passwords; // user input password

    if (userPasswords.find(username) != userPasswords.end() && userPasswords[username] == passwords)
    // Check if the entered username and password are valid
    {
        system("cls");
        cout << " \n  Login Successful!" << endl; // print login successful!
    }
    else // if username or password does not mattch
    {
        cout << "  \nInvalid Username or Password\n"
             << endl; // print invalid username or password
        return 1;     // Exit the program due to invalid username or password.
    }
    int choice; // Variable for user input
    do
    {
        // Display main menu
        cout << "\t\n----- Children Vaccination Management System -----\n"
             << endl;
        cout << "ENTER YOUR CHOICE: \n";
        cout << "1. Enter new patient record" << endl;
        cout << "2. Record of old patients" << endl;
        cout << "3. Ten most recent patients" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;  // user input a no. to choose what he/she want from main menu
        cin.ignore();   // Ignore any remaining newline characters
        switch (choice) // switch based on user's choice
        {
        case 1:                         // if choice is 1
            add_new_patient();          // go to the void add_new_patient function
            break;                      // Exit the switch statement
        case 2:                         // if choice is 2
            record_of_old_patients();   // go to the void record_of_old_patients function
            break;                      // Exit the switch statement
        case 3:                         // if choice is 3
            ten_most_recent_patients(); // go to the void ten_most_recent_patients function
            break;                      // Exit the switch statement
        case 4:                         // if choice is 4
            system("cls");                         
            cout << "Exiting..." << endl;
            break;                                               // Exit the switch statement
        default:                                                 // if choice is not from 1 to 4
            cout << "Invalid choice. Please try again." << endl; // print invalid choice
            break;                                               // Return from the function in case of invalid choice
        }
    } while (choice != 4); // Continue the loop until the user chooses to exit
    return 0;
}