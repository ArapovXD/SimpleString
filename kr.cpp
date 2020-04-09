//Arapov Denis
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(int argc, char *argv[]){
    string pre;
    string out;
    ifstream a(argv[1]);
    int len = 0;

    if (!a || (argc != 2)){
        cout << "Nepravilno vvedeny argumenti ili file ne sushestvuet!";
        return 1;
    }

    if (a >> out) while (++len && a >> pre) out = pre + " " + out;

    cout << "Kol-vo slov: " << len << endl;
    cout << out << endl;

    a.close();
    return 0;
}
