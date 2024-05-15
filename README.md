# Hospital_management_system
Efficient management of hospital and patient data through key features such as patient data entry, retrieval, and sorting of hospital information based on various criteria like name, rating, available beds, price, and location. 

**Classes:**

  Two classes are defined: Hospital and Patient.
    Hospital class contains attributes such as hospital name, location, available beds, rating, contact information, doctor's name, and price per bed.
    Patient class inherits from the Hospital class and includes attributes for patient's name, ID, and contact information.
  
**Global Variables:**

  Global variables index and limit are defined to manage the number of patients and a limit on the maximum number of patients, respectively.
  A two-dimensional array QA is defined to store questions and answers for frequently asked questions.
  
**Functions:**

  Several functions are defined to perform various operations within the system:
    PrintHospitalData(): Prints data of hospitals including their name, location, available beds, rating, contact, doctor's name, and price per bed.
    PrintPatientData(): Prints data of patients including their name, ID, contact, allotted hospital, and expenditure.
    PrintOnePatientData(int): Prints data of a specific patient based on the given index.
    SetPatientData(int): Sets data for a new patient.
    Sorting functions: SortHospitalByName(), SortHospitalByRating(), SortHospitalByBedsAvailable(), SortHospitalByPrice(), and SortHospitalByLocation() are defined     to sort hospitals based on different criteria.
    fq() and fa(int): Functions related to frequently asked questions.
    inputDetails(): Takes user input to perform various operations like entering patient data, retrieving patient or hospital data, sorting hospitals, and              accessing FAQs.
    
**Main Function:**

  Initializes hospitals and patients with sample data.
  Sets up the FAQs.
  Runs an infinite loop to continuously accept user input and perform corresponding operations based on the input.
