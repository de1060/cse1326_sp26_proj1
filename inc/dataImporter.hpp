#include "grade.hpp"
#include <fstream>
#include <string>
#include "json.hpp"
#include <array>
using json = nlohmann::json;



struct dataImporter
{
    dataImporter(const std::string& _filename);
    void load(std::array<grade, 10000>& arr);


    std::string filename;
    std::ifstream file;

};
