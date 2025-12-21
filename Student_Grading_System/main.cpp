#include<iostream>
#include<vector>
#include<string>
#include<utility>

using namespace std;

class Student{
    private:
        string name;
        int ID;
        vector<pair<string, int>> marks;

    public:
        


};

int main(){
    int sub;
    cout<<"how many subjects exits\n";
    cin>>sub;

    vector<char> grade;
    while(sub--){
        int marks;
        cout<<"Enter marks for subject out of 100\n";
        cin>>marks;

        if(!cin){
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Invalid input\n\n";
            sub++;
            continue;
        }

        if(marks>90){
            grade.push_back('A');
            cout<<"you got A grade\n\n";
        }else if(marks>80){
            grade.push_back('B');
            cout<<"you got B grade\n\n";
        }else if(marks>70){
            grade.push_back('C');
            cout<<"you got C grade\n\n";
        }else if(marks>60){
            grade.push_back('D');
            cout<<"you got D grade\n\n";
        }else{
            grade.push_back('F');
            cout<<"you have Failed\n\n";
        }
    }

    for(char c : grade){
        int i = 1;
        cout<<"grade in "<<i<<"th subject is "<<c<<endl;
        i++;
    }
    return 0;
}