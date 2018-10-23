#include <QDir>
#include <QtCore>
#include <iostream>
using namespace std;


void showSettings(){
    int point;
    cout<<"1. Choose EumetSat receiving folder"<<endl;
    cout<<"2. Choose workspace"<<endl;
    cout<<"3. Set Timeout"<<endl;
    cout<<"4. Close"<<endl;
    cin>>point;

    switch(point){
        case 1: {
            cout << "Choose EumetSat receiving folder"<<endl;
            showSettings();
            break;
        }
        case 2: {
            cout << "Choose workspace"<<endl;
            break;
        }
        case 3: {
            cout << "Set Timeout"<<endl;
            break;
        }
        default: {
            cout << "Error!"<<endl;
            break;
        }
    }

}


void showMainMenu(){
    int point;
    cout<<"Menu"<<endl;
    cout<<"1. Setting"<<endl;
    cout<<"2. Run program"<<endl;
    cout<<"3. Quit"<<endl;
    cin>>point;

    switch(point){
        case 1: {
            cout << "Setting"<<endl;
            showSettings();
            break;
        }
        case 2: {
            cout << "Run program"<<endl;
            break;
        }
        case 3: {
            cout << "Quit. Press any key"<<endl;
            break;
        }
        default: {
            cout << "Error!"<<endl;
            break;
        }
    }
}


int main(){
    showMainMenu();

    return 0;
}
