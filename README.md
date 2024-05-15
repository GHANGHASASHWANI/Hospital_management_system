# Hospital_management_system
Efficient management of hospital and patient data through key features such as patient data entry, retrieval, and sorting of hospital information based on various criteria like name, rating, available beds, price, and location.  <br>

**Classes:**

  Two classes are defined: Hospital and Patient. <br>
   &nbsp; Hospital class contains attributes such as hospital name, location, available beds, rating, contact information, doctor's name, and price per bed. <br>
   &nbsp; Patient class inherits from the Hospital class and includes attributes for patient's name, ID, and contact information. <br>
  
**Global Variables:**

  Global variables index and limit are defined to manage the number of patients and a limit on the maximum number of patients, respectively. <br>
  A two-dimensional array QA is defined to store questions and answers for frequently asked questions. <br>
  
**Functions:**

  Several functions are defined to perform various operations within the system: <br>
  1. PrintHospitalData(): Prints data of hospitals including their name, location, available beds, rating, contact, doctor's name, and price per bed. <br>
  2. PrintPatientData(): Prints data of patients including their name, ID, contact, allotted hospital, and expenditure. <br>
  3. PrintOnePatientData(int): Prints data of a specific patient based on the given index. <br>
  4. SetPatientData(int): Sets data for a new patient. <br>
  5. Sorting functions: SortHospitalByName(), SortHospitalByRating(), SortHospitalByBedsAvailable(), SortHospitalByPrice(), and SortHospitalByLocation() are defined to sort hospitals. <br>
  6. fq() and fa(int): Functions related to frequently asked questions. <br>
  7. inputDetails(): Takes user input to perform various operations like entering patient data, retrieving patient or hospital data, sorting hospitals, and accessing FAQs. <br>
    
**Main Function:**

  Initializes hospitals and patients with sample data. <br>
  Sets up the FAQs. <br>
  Runs an infinite loop to continuously accept user input and perform corresponding operations based on the input.
