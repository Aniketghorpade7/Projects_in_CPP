#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Student{
    private:
        string name;
        int ID;
        vector<pair<string, int>> marks;

    public:
        //Default constructor
        Student(){
            name = "not_assign";
            ID = 007;
            marks = {};
        }

        //parametarised constructor
        Student(string Name, int id, vector<pair<string, int>> grade){
            setter_name(Name);
            setter_ID(id);
            setter_marks(grade);
        } 


        //Getter for job
        string getName(){
            return name;
        }

        int getID(){
            return ID;
        }

        vector<pair<string, int>> getMarks(){
            return marks;
        }

        //Setter for job
        void setter_name(string aName){
            name = aName;
        }

        void setter_ID(int aID){
            if (aID > 0){
                ID = aID;
            }else{
                ID = 0;
            }
        }

        void setter_marks(vector<pair<string, int>> aMarks){
            marks = aMarks;
        }

        //Calculating AVG
        float GetAvg(){
            int sum = 0;
            for(int i = 0 ; i < marks.size() ; i++){
                sum += marks[i].second;
            }

            float avg = (float)sum/marks.size();
            return avg;
        }

        //Grading

        char grading(float average){
            if(average > 90)    return 'A';
            else if(average > 80)   return 'B';
            else if(average > 70)   return 'C';
            else if(average > 60)   return 'D';
            else    return 'F';
        }

        //Displaying student info
        void Display(){
            cout<<"-------------------------------------------------\n";
            cout<<"Stucdent Name : "<<getName()<<"  (ID : "<<getID()<<")\n";
            cout<<"-------------------------------------------------\n";
            for(int i = 0 ; i < marks.size() ; i++){
                cout<<marks[i].first<<"     "<<marks[i].second<<"\n";
            }
            cout<<"-------------------------------------------------\n";
            cout<<"Average marks : "<<GetAvg()<<"   Student's grade : "<<grading(GetAvg())<<"\n";
            cout<<"-------------------------------------------------\n";
        }
};


int main() {

    cout << "===== Test Case 1: Default Student =====" << endl;
    Student s1;
    s1.Display();


    cout << "\n===== Test Case 2: Valid Student with Marks =====" << endl;
    vector<pair<string, int>> marks1 = {
        {"Math", 95},
        {"Physics", 88},
        {"Chemistry", 91}
    };

    Student s2("Aniket", 101, marks1);
    s2.Display();


    cout << "\n===== Test Case 3: Boundary Case for Grade =====" << endl;
    vector<pair<string, int>> marks2 = {
        {"Math", 80},
        {"Science", 80},
        {"English", 80}
    };

    Student s3("Rahul", 102, marks2);
    s3.Display();


    cout << "\n===== Test Case 4: Low Marks (Fail Case) =====" << endl;
    vector<pair<string, int>> marks3 = {
        {"Math", 40},
        {"Physics", 35},
        {"Chemistry", 45}
    };

    Student s4("Sneha", 103, marks3);
    s4.Display();


    cout << "\n===== Test Case 5: Empty Marks (IMPORTANT EDGE CASE) =====" << endl;
    vector<pair<string, int>> emptyMarks = {};
    Student s5("NoExamStudent", 104, emptyMarks);

    // ⚠️ This will CRASH in current code
    // s5.Display();

    cout << "Marks are empty, average cannot be calculated safely.\n";

    return 0;
}
