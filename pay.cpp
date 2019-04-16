 
 #include <fstream>
 #include <string>
 #include <iostream> 
 #include <vector>
 #include "person.cpp"
 using namespace std;




void readData(vector<Person> &employee){
    //int count =0;
    string firstname;
    string lastname;
    float p_rate;
    float t_hour;
    int i=0;
    //int sizearr;
    ifstream infile;
    string tmp;
    infile.open("input.txt");
    
    while (infile >> firstname >> lastname >> t_hour >> p_rate){
        //count++;
        //getline(infile, tmp);
        employee.emplace_back(firstname,lastname,t_hour,p_rate);

        /*arr[i].setFirstName(firstname);
        arr[i].setLastName(lastname);
        arr[i].setHoursWorked(t_hour);
        arr[i].setPayRate(p_rate);
        i++;
        */
    }
    //sizearr = i-1;

    infile.close();
    //return sizearr;
    

};

void writeData (vector<Person> employee){
    ofstream outfile;

    //int i=0;
    outfile.open("output.txt");
    
    //while (i != N ){
    for (int i =0; i < employee.size(); i++){
        //outfile << arr[i].fullName() << " " << arr[i].totalPay() << endl;
        outfile << employee.at(i).fullName() << " " << employee.at(i).totalPay() << endl;
    }
    outfile.close();
};

int main() {

vector<Person> employee;
//Person employee[20];
//int arr_size;
//arr_size = readData(employee, arr_size);
//writeData(arr_size, employee);
readData(employee);
writeData(employee);


    return 0;
}