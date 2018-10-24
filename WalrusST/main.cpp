#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>

using namespace std;

void sortFiles(){
    MoveFile(L"D:\\myProgramms\\C++\\Eumetsat_files\\1\\1.l2_bufr", L"D:\\myProgramms\\C++\\Eumetsat_files\\2\\1.txt");

}

int main(){
    sortFiles();

    Sleep(10000); // timeout to 10 000 ms
    cout<<"10s was going"<<endl;

}


//void showSettings(){
//    int point;
//    cout<<"1. Choose EumetSat receiving folder"<<endl;
//    cout<<"2. Choose workspace"<<endl;
//    cout<<"3. Set Timeout"<<endl;
//    cout<<"4. Close"<<endl;
//    cin>>point;

//    switch(point){
//        case 1: {
//            cout << "Choose EumetSat receiving folder"<<endl;
//            showSettings();
//            break;
//        }
//        case 2: {
//            cout << "Choose workspace"<<endl;
//            break;
//        }
//        case 3: {
//            cout << "Set Timeout"<<endl;
//            break;
//        }
//        default: {
//            cout << "Error!"<<endl;
//            break;
//        }
//    }

//}


//void showMainMenu(){
//    int point;
//    cout<<"Menu"<<endl;
//    cout<<"1. Setting"<<endl;
//    cout<<"2. Run program"<<endl;
//    cout<<"3. Quit"<<endl;
//    cin>>point;

//    switch(point){
//        case 1: {
//            cout << "Setting"<<endl;
//            showSettings();
//            break;
//        }
//        case 2: {
//            cout << "Run program"<<endl;
//            break;
//        }
//        case 3: {
//            cout << "Quit. Press any key"<<endl;
//            break;
//        }
//        default: {
//            cout << "Error!"<<endl;
//            break;
//        }
//    }
//}

