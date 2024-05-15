/* ****************************        HopeRise Hospital System        ************************** */
#include <iostream>
using namespace std;
int index = 1, limit = 15;
string QA[10][2];
void fa(int), fq();

class Hospital
{
public:
    string H_name;
    string location;
    int available_beds;
    float rating;
    string contact;
    string doctor_name;
    int price;
} hospitals[4];

class Patient : public Hospital
{
public:
    string P_name;
    int P_id;
} patients[15];

void PrintHospitalData()
    {
        cout << "PRINT hospitals DATA:" << endl;
        cout << "HospitalName     "
            << "Location     "
            << "Beds_Available     "
            << "Rating     "
            << "Hospital_Contact     "
            << "Doctor_Name     "
            << "Price_Per_Bed	 MedicanName\n";

    for (int i = 0; i < 4; i++)
    {
        cout << hospitals[i].H_name;
        for (int a = 0; a < 17 - hospitals[i].H_name.length(); a++)
            cout << " ";
        cout << hospitals[i].location;
        for (int a = 0; a < 13 - hospitals[i].location.length(); a++)
            cout << " ";
        cout << hospitals[i].available_beds;
        for (int a = 0; a < 16; a++)
            cout << " ";
        cout << hospitals[i].rating;
        for (int a = 0; a < 8; a++)
            cout << " ";
        cout << hospitals[i].contact;
        for (int a = 0; a < 21 - hospitals[i].contact.length(); a++)
            cout << " ";
        cout << hospitals[i].doctor_name;
        for (int a = 0; a < 16 - hospitals[i].doctor_name.length(); a++)
            cout << " ";
        cout << hospitals[i].price;
        cout << " ";
        cout << "          Dispensary Medical - " << i + 1 << endl;
    }

    cout << endl
        << endl;
}

    void PrintPatientData()
    {
        cout << "PRINT patients DATA:"
            << endl;
        cout << "Patient_Name     "
            << "Patient_Id     "
            << "Patient_Contact     "
            << "Alloted_Hospital     "
            << "Patient_Expenditure  MedicalName\n";

    for (int a = 14; a >= 0; a--)
    {
        if (patients[a].P_name.length() == 0)
            continue;
        else
        {
            limit = a + 1;
            break;
        }
    }
    for (int i = 0; i < limit; i++)
    {
        cout << patients[i].P_name;
        for (int a = 0; a < 17 - patients[i].P_name.length(); a++)
            cout << " ";
        cout << patients[i].P_id;
        for (int a = 0; a < 12; a++)
            cout << " ";
        cout << patients[i].contact;
        for (int a = 0; a < 20 - patients[i].contact.length(); a++)
            cout << " ";
        cout << hospitals[i].H_name;
        for (int a = 0; a < 21 - hospitals[i].H_name.length(); a++)
            cout << " ";
        cout << patients[i].price;
        cout << " ";
        cout << "                Dispensary medica -" << i + 1 << endl;
    }
    cout << endl
        << endl;   
}

void PrintOnePatientData(int i)
{
    for (int a = 14; a >= 0; a--)
    {
        if (patients[a].P_name.length() == 0)
            continue;
        else
        {
            limit = a + 1;
            break;
        }
    }
    if (i > 15 || i > index || i > limit)
    {
        cout << "No details found\n________________";
    }
    else
    {
        cout << "PRINT patients DATA:"
                << endl;
            cout << "___________________________________________________________________\n";
            cout << "\nPatient_Name - " << patients[i].P_name
                << "\nPatient_Id - " << patients[i].P_id
                << "\nPatient_Contact - " << patients[i].contact
                << "\nAlloted_Hospital - " << hospitals[i].H_name
                << "\nPatient_Expenditure - " << patients[i].price;
            cout << endl
                << "___________________________________________________________________\n"
                << endl;
    }
}

void SetPatientData(int i)
{
    if (i < 15)
    {
        cout << "ENTER DETAILS" << endl;
        cout << "Patient_Name - ";
        cin >> patients[i].P_name;
        cout << "Patient_Id - ";
        cin >> patients[i].P_id;
        cout << "Patient_Contact - ";
        cin >> patients[i].contact;
        cout << "Alloted_Hospital - ";
        cin >> hospitals[i].H_name;
        cout << "Patient_Expenditure - ";
        cin >> patients[i].price;
        cout << "...DONE..." << endl;
    }
    else
    {
        cout << "Max limit reached\n";
    }
}

void swap(int x, int y)
{
    string HNAME = hospitals[x].H_name;
    string LOCATION = hospitals[x].location;
    int AVAILABLEBEDS = hospitals[x].available_beds;
    float RATING = hospitals[x].rating;
    string CONTACT = hospitals[x].contact;
    string DOCTORNAME = hospitals[x].doctor_name;
    int PRICE = hospitals[x].price;

    hospitals[x].H_name = hospitals[y].H_name;
    hospitals[x].location = hospitals[y].location;
    hospitals[x].available_beds = hospitals[y].available_beds;
    hospitals[x].rating = hospitals[y].rating;
    hospitals[x].contact = hospitals[y].contact;
    hospitals[x].doctor_name = hospitals[y].doctor_name;
    hospitals[x].price = hospitals[y].price;

    hospitals[y].H_name = HNAME;
    hospitals[y].location = LOCATION;
    hospitals[y].available_beds = AVAILABLEBEDS;
    hospitals[y].rating = RATING;
    hospitals[y].contact = CONTACT;
    hospitals[y].doctor_name = DOCTORNAME;
    hospitals[y].price = PRICE;
}

void SortHospitalByName()
{

    for (int a = 0; a < 3; a++)
    {
        for (int b = a + 1; b < 4; b++)
        {
            if (hospitals[a].H_name.compare(hospitals[b].H_name) > 0)
            {
                swap(a, b);
            }
        }
    }
}

void SortHospitalByRating()
{
    for (int a = 0; a < 3; a++)
    {
        for (int b = a + 1; b < 4; b++)
        {
            if (hospitals[a].rating < hospitals[b].rating)
            {
                swap(a, b);
            }
        }
    }
}

void SortHospitalByBedsAvailable()
{

    for (int a = 0; a < 3; a++)
    {
        for (int b = a + 1; b < 4; b++)
        {
            if (hospitals[a].available_beds < hospitals[b].available_beds)
            {
                swap(a, b);
            }
        }
    }
}

void SortHospitalByPrice()
{
    // Sort the date
    for (int a = 0; a < 3; a++)
    {
        for (int b = a + 1; b < 4; b++)
        {
            if (hospitals[a].price > hospitals[b].price)
            {
                swap(a, b);
            }
        }
    }
}

void SortHospitalByLocation()
{
    // Sort the date
    for (int a = 0; a < 3; a++)
    {
        for (int b = a + 1; b < 4; b++)
        {
            if (hospitals[a].location.compare(hospitals[b].location) > 0)
            {
                swap(a, b);
            }
        }
    }
}
void fq()
{
    int x;
    string S = "";
    for (int a = 0; a < 9; a++)
    {
        S = QA[a][0];
        cout << a + 1 << "- " << S << endl;
    }
    cout << "Your choice : ";
    cin >> x;
    fa(x - 1);
}
void fa(int a)
{
    cout << QA[a][1] << endl
        << "_________________________________________\n";
}

void inputDetails()
{
    int opt = 0, opt2 = 0, opt3 = 0, Sin = 0;
    cout << "1-Enter Patient's data" << endl;
    cout << "2-Get Patient's data" << endl;
    cout << "3-Get Hospital's data" << endl;
    cout << "4-Frequently asked Questions" << endl;
    cout << "Press any other number to EXIT " << endl;
    cin >> opt;
    int index = 2;
    if (opt == 1)
    {
        ++index;
        SetPatientData(index);
    }

    else if (opt == 2)
    {
        while (true)
        {
            cout << " 1-one patient's data \n 2-all patient's data";
            cin >> opt2;
            if (opt2 == 1)
            {
                cout << "enter serial number - ";
                cin >> Sin;
                PrintOnePatientData(Sin);
                break;
            }
            if (opt2 == 2)
            {
                PrintPatientData();
                break;
            }
            else
            {
                cout << "wrong choice \n RE-ENTER\n";
            }
        }
    }

    else if (opt == 3)
    {
        cout << "1 -> Sort by name\n 2 -> Sort by Rating\n 3 -> Sort by Beds available\n 4 -> Sort by bed price\n 5 -> Sort by city\n";
        cin >> opt3;
        if (opt3 == 1)
        {
            SortHospitalByName();
        }
        else if (opt3 == 2)
        {
            SortHospitalByRating();
        }
        else if (opt3 == 3)
        {
            SortHospitalByBedsAvailable();
        }
        else if (opt3 == 4)
        {
            SortHospitalByPrice();
        }
        else if (opt3 == 5)
        {
            SortHospitalByLocation();
        }
        else
        {
            cout << "WRONG CHOICE\n";
        }
        PrintHospitalData();
    }
    else if (opt == 4)
    {
        fq();
    }
    else
    {
        cout << "Wrong choice\n";
        exit(0);
    }
}
int main()
{

    cout << "/*************** HopeRise Hospital *****************/" << endl;
    hospitals[0].H_name = "RIMS";
    hospitals[0].location = "Ranchi";
    hospitals[0].available_beds = 18;
    hospitals[0].rating = 4.5;
    hospitals[0].contact = "3211932119";
    hospitals[0].doctor_name = "Dr. P.K. Das";
    hospitals[0].price = 25000;

    hospitals[1].H_name = "Aiims";
    hospitals[1].location = "Delhi";
    hospitals[1].available_beds = 25;
    hospitals[1].rating = 4.6;
    hospitals[1].contact = "6211062110";
    hospitals[1].doctor_name = "Dr. H.R. Sen";
    hospitals[1].price = 35000;

    hospitals[2].H_name = "Fortis";
    hospitals[2].location = "Chandigarh";
    hospitals[2].available_beds = 12;
    hospitals[2].rating = 4.5;
    hospitals[2].contact = "5266352663";
    hospitals[2].doctor_name = "Dr. N.A. Mishra";
    hospitals[2].price = 15000;

    hospitals[3].H_name = "Aqua";
    hospitals[3].location = "Kolkata";
    hospitals[3].available_beds = 26;
    hospitals[3].rating = 4.8;
    hospitals[3].contact = "1120511205";
    hospitals[3].doctor_name = "Dr. P. Banerjee";
    hospitals[3].price = 40000;

    patients[0].P_name = "Light Yagame";
    patients[0].P_id = 265;
    patients[0].contact = "2378967356";
    patients[0].price = 35000;

    patients[1].P_name = "Loid Forger";
    patients[1].P_id = 152;
    patients[1].contact = "5238565445";
    patients[1].price = 23000;

    patients[2].P_name = "Loid jack";
    patients[2].P_id = 192;
    patients[2].contact = "5289865445";
    patients[2].price = 29000;

    QA[0][0] = "How to get admitted in case of emergency ?\n";
    QA[0][1] = "Visit the reception and sign form no. . \n";
    QA[1][0] = "How much is the average bed charge for the person with the patient ?\n";
    QA[1][1] = "Its free of cost . \n";
    QA[2][0] = "What if the prescribed medicines are not available in the medical below ?\n";
    QA[2][1] = "You may get the medicines form anywhere but remember to take the same medicines as prescribed .\n";
    QA[3][0] = "What if the patient is ill ?\n";
    QA[3][1] = "Checkk the body temperature and call doctor\n";
    QA[4][0] = "What happens once I am admitted?\n";
    QA[4][1] = "The interdisciplinary team does a full assessment of every patient and establishes a comprehensive list of medical issues and challenges.\n";
    QA[5][0] = "Does the daily hospital fee include doctor and therapist visits?\n";
    QA[5][1] = "No, it does not. It is your responsibility to familiarise yourself with the rules of your medical aid scheme.\n";
    QA[6][0] = "What infection control measures are in place?\n";
    QA[6][1] = "It is very important that you follow the  strict handwashing and infection control programme.\n";
    QA[7][0] = "What does hospital billing cover?\n";
    QA[7][1] = "Hospital billing only covers the hospitalisation itself. It excludes services such as:\nDoctors\nAnaesthetist\nRadiology\nLaboratories\n";
    QA[8][0] = "Who will have access to my information?\n";
    QA[8][1] = "All information contained in your patient file is confidential and may not be divulged to anyone beyond your treating team without your permission.\n";

    while (true)
    {
        inputDetails();
    }
}
