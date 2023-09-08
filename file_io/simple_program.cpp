#include <iostream>
#include <fstream>
using namespace std;

// in this program data will be saved inside a text folder and then retreived with the same class 
class student
{
    private:
        char name[30];
        int age;
        public:
        void get_data(void)
        {
            cout<<"Enter name: ";
            cin.getline(name,30);
            cout<<"Enter age:";
            cin>>age;
        }
        void show_data(void)
        {
            cout<<"Name: "<<name<<", Age:"<<age<<endl;
        }

};

int main()
{
    student s;
    ofstream file;
    file.open("data.txt",ios::out);
    if(!file)
    {
        cout<<"Error while creating the file"<<endl;
        return 0;
    }
    cout <<"File created successfully."<<endl;
    s.get_data();
    file.write((char*)&s, sizeof(s));   //write the whole object in the file
    file.close();
    cout<<"Finished"<<endl;
    ifstream file1;
    file1.open("data.txt",ios:: in);
    if(!file)
    {
        cout<<"error in opening the file"<<endl;
    }
    file1.read((char*)&s,sizeof(s));    //read the whole object from the file and store it inside the object in this program
    s.show_data();
    file1.close();
    return 0;
}