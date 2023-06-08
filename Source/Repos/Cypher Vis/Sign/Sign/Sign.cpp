#include "iostream"
#include "fstream"
#include "string"

using namespace std;

class Sign
{
public:

    int Sign_up()
    {
        string sign = "sign.txt";
        fstream vxod;
        vxod.open(sign, fstream::in | fstream::out | fstream::app);

        if (!vxod.is_open())
        {
            cout << "Error!" << endl;
        }
        else
        {
            string vxod_cheker;

            cout << "Enter your login: " <<  endl ;
            cin >> vxod_cheker;
            cout << "Enter your password: " << endl;
            cin >> vxod_cheker;
            vxod << vxod_cheker;
            vxod << vxod_cheker;
            cout << "Registration was successful!" << endl;
            return 0;
        }
    }
    int Sign_in()
    {
        string sign = "sign.txt";
        fstream vxod;
        vxod.open(sign, fstream::in | fstream::out | fstream::app);

        if (!vxod.is_open())
        {
            cout << "Error!" << endl;
        }
        else
        {
            string vxod_cheker;
            while (!vxod.eof())
            {
                vxod_cheker = " ";
                vxod >> vxod_cheker;
            }
            string correct;

            cout << "Enter your login: " << endl ;
            cin >> correct;
            cout << "Enter your password: " << endl;
            cin >> correct;
            if (correct != vxod_cheker)
            {
                cout << "The password or login is entered incorrectly!" << endl;
            }
            else
            {
                cout << "The password or login is entered correctly!" << endl;
            }
            return 0;
        }

    }
};

    int main()
    {
        int number;
        cout << "Sign up (1)" << endl << "Sign in (2)" << endl;
        cin >> number;

        if (number != 1 && number != 2) cout << "Error";

        if (number == 1) {
            system("cls");
            Sign pass;
            pass.Sign_up();
        }

        if (number == 2) {
            system("cls");
            Sign pass;
            pass.Sign_in();
        }
        return 0;

    }