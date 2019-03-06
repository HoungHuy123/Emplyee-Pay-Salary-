 
 #include <fstream>
 #include <string>
 #include <iostream> 
 #include "person.cpp"
 using namespace std;




int readData(Person arr[], int size){
    //int count =0;
    string firstname;
    string lastname;
    float p_rate;
    float t_hour;
    int i=0;
    int sizearr;
    ifstream infile;
    string tmp;
    infile.open("input.txt");
    
    while (!infile.eof() && i != size){
        //count++;
        infile >> firstname >> lastname >> t_hour >> p_rate; 
        getline(infile, tmp);
        arr[i].setFirstName(firstname);
        arr[i].setLastName(lastname);
        arr[i].setHoursWorked(t_hour);
        arr[i].setPayRate(p_rate);
        i++;
    }
    sizearr = i-1;

    infile.close();
    return sizearr;
};

void writeData (int N, Person arr[]){
    ofstream outfile;

    int i=0;
    outfile.open("output.txt");
    
    while (i != N ){
        outfile << arr[i].fullName() << " " << arr[i].totalPay() << endl;
        i++;
    }
    outfile.close();
};

int main() {


Person employee[20];
int arr_size;
arr_size = readData(employee, arr_size);
writeData(arr_size, employee);



    return 0;
}