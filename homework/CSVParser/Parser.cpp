
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int Parser(){
        ///mnt/c/Users/Jazib/source/repos/JShakeelCPP2/homework/CSVParser/build
    ifstream file("../data.csv");

    string line;
    
    if (!file.is_open()) {
        cout << "Error!!!" << endl;
        return 1;
    }
    cout << "File opened" << endl;
    string delimiter = ",";
    //Restauraunt resList= new []Restaurant()
    bool firstLine = true;
    while(getline(file, line)) {
        //Rest res= new Rest()
        if(firstLine) {
            firstLine = false;
            continue;
            }   
        size_t pos = 0;
        std::string token;
        while ((pos = line.find(delimiter)) != std::string::npos) {
            token = line.substr(0, pos);
            //res.inspectionId = token.
            std::cout << token << std::endl;
            line.erase(0, pos + delimiter.length());
        }
        //resList.add(res)
        
        // cout << line.substr(0, line.find(",")) << endl;
        break;
        //cout << line << endl;
    }
    file.close();
    return 0;
}

struct FacilityRecords{
    public:
    FacilityRecords(string id, string dba, string aka, string licsenese, string facility, string risk,
    string address, string city, string state, string zip, string inspectionDate, string inspectionType,
    string results, string violations, string latitude, string longitude, string location)
    {
        ID = id;
        DBA = dba;
        AKA = aka;
        License = licsenese;
        Facility = facility;
        Risk = risk;
        Address = address;
        City = city;
        State = state;
        Zip = zip;
        InscpectionDate = inspectionDate;
        InscpectionType = inspectionType;
        Results = results;
        Violations = violations;
        Latitude = latitude;
        Longitude = longitude;
        Location = location;
    }

    void Display(){
        cout << "Inspection ID: " << ID << endl;
        cout << "DBA Name: " << DBA << endl;
        cout << "AKA Name: " << AKA << endl;
        cout << "Liscense #: " << License << endl;
        cout << "Facility: " << Facility << endl;
        cout << "Risks: " << Risk << endl;
        cout << "Address: " << Address << endl;
        cout << "City: " << City << endl;
        cout << "State: " << State << endl;
        cout << "Zip: " << Zip << endl;
        cout << "Inscpection Date: " << InscpectionDate << endl;
        cout << "Inspection Type: " << InscpectionType << endl;
        cout << "Results: " << Results << endl;
        cout << "Violations: " << Violations << endl;
        cout << "Latitude: " << Latitude << endl;
        cout << "Longitude: " << Longitude << endl;
        cout << "Location: " << Location << endl;
        cout << "===============" << endl;
    }
    string ID;
    string DBA;
    string AKA;
    string License;
    string Facility;
    string Risk;
    string Address;
    string City;
    string State;
    string Zip;
    string InscpectionDate;
    string InscpectionType;
    string Results;
    string Violations;
    string Latitude;
    string Longitude;
    string Location;
};

void DisplayRecords(vector<FacilityRecords>& records){
    for (auto record : records)
    {
        record.Display();
    }
    
}
int main(){
    //FirstLine firstRow;
    //firstRow.main();
    //Parser();  
    ifstream file("../data.csv");

    string line;
    bool firstLine = true;
    
    if (!file.is_open()) {
        cout << "Error!!!" << endl;
        return 1;
    }
    vector<FacilityRecords> records;
    while (getline(file, line))
    {
         if(firstLine) {
            firstLine = false;
            continue;
            } 
        stringstream inputString(line);

        string ID;
        string DBA;
        string AKA;
        string License;
        string Facility;
        string Risk;
        string Address;
        string City;
        string State;
        string Zip;
        string InscpectionDate;
        string InscpectionType;
        string Results;
        string Violations;
        string Latitude;
        string Longitude;
        string Location;

        getline(inputString, ID, ',');
        getline(inputString, DBA, ',');
        getline(inputString, AKA, ',');
        getline(inputString, License, ',');
        getline(inputString, Facility, ',');
        getline(inputString, Risk, ',');
        getline(inputString, Address, ',');
        getline(inputString, City, ',');
        getline(inputString, State, ',');
        getline(inputString, Zip, ',');
        getline(inputString, InscpectionDate, ',');
        getline(inputString, InscpectionType, ',');
        getline(inputString, Results, ',');
        getline(inputString, Violations, ',');
        getline(inputString, Latitude, ',');
        getline(inputString, Longitude, ',');
        getline(inputString, Location, ',');

        FacilityRecords record(ID, DBA, AKA, License, Facility,
        Risk, Address, City, State, Zip, InscpectionDate, InscpectionType,
        Results, Violations, Latitude, Longitude, Location);
        records.push_back(record);
        line = "";
    }

    DisplayRecords(records);
    
    
}