#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i = 0;
    string in;
    cout <<"########Program 1.34######### "<<endl;

    while (i <= 100) {


        if(i == 0){
            cout <<"program is ready to run. quit or run?(type run or quit)"<<endl;
            cin >> in;
            i++;
             if (in == "quit") {
             break;
             }
             else if(in =="run"){
             cout <<"PROGRESSING......... "<<endl;
             continue;

             }
        }

        if(i == 50){
            cout <<"PROGRESSING.........("<< i << "%) \n";
            cout <<"you are at 50%. Do you want quit or continue?(type run or quit)"<<endl;
            cin >> in;
            i++;
             if (in == "quit") {
             break;
             }
             else if(in =="run"){
             continue;
             }
        }
        else if(i == 100){
            cout <<"PROGRESSING.........("<< i << "%) \n";
            cout<<"Progress complete"<<endl;
            break;

        }
        else{
            cout <<"PROGRESSING.........("<< i << "%) \n";
            i++;
        }



    }
    return 0;
}
