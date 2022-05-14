
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;


std::vector<std::string> readRecordFromFile(std::string file_name, std::string search_zipCode);
    
int main()
{

    std::vector<std::string> data = readRecordFromFile("data", "60614");

    return 0;

}

std::vector<std::string> readRecordFromFile(std::string file_name, std::string search_zipCode)
{
    std::vector<std::string> record;

    std::ifstream file;
    file.open(file_name);

    bool found_record = false;

    std::string ID;
    std::string DBA;
    std::string AKA;
    std::string License;
    std::string Facility;
    std::string Risk;
    std::string Address;
    std::string City;
    std::string State;
    std::string Zip;
    std::string InscpectionDate;
    std::string InscpectionType;
    std::string Results;
    std::string Violations;
    std::string Latitude;
    std::string Longitude;
    std::string Location;


    while (getline(file, ID, ',') && !found_record)
    {
        getline(file,DBA, ',');
        getline(file,AKA, ',');
        getline(file,License, ',');
        getline(file,Facility, ',');
        getline(file,Risk, ',');
        getline(file,Address, ',');
        getline(file,City, ',');
        getline(file,State, ',');
        getline(file,Zip, ',');
        getline(file,InscpectionDate, ',');
        getline(file,InscpectionType, ',');
        getline(file,Results, ',');
        getline(file,Violations, ',');
        getline(file,Latitude, ',');
        getline(file,Longitude, ',');
        getline(file,Location, '\n');
        if(Zip == search_zipCode)
        {
            found_record = true;
            record.push_back(ID);
            record.push_back(DBA);
            record.push_back(AKA);
            record.push_back(License);
            record.push_back(Facility);
            record.push_back(Risk);
            record.push_back(Address);
            record.push_back(City);
            record.push_back(State);
            record.push_back(Zip);
            record.push_back(InscpectionDate);
            record.push_back(InscpectionType);
            record.push_back(Results);
            record.push_back(Violations);
            record.push_back(Latitude);
            record.push_back(Longitude);
            record.push_back(Location);


        }
    }
    std::cout <<record[0] << " " << record[1] << " " << record[2];
    
    return record;
}