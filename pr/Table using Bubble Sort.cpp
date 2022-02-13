#include <iostream>
using namespace std;

void swap_string(int str, int s, string **studentsList)
{
    for (int i = 0; i < 4; i++)
    {
        string temp;
        temp = studentsList[str][i];
        studentsList[str][i] = studentsList[s][i];
        studentsList[s][i] = temp;
    }
}
void print_info(string **studentsList, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << i + 1<< ")\t\t" << studentsList[i][0]  << "\t\t" << studentsList[i][1] << "\t\t" << studentsList[i][2] << "\t\t" << studentsList[i][3] << "\t\t" << endl;            
    }
}
void bubbleSort(string **studentsList, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (((int)toupper(studentsList[j][1][0])) > ((int)toupper(studentsList[j + 1][1][0])))
                swap_string(j, j + 1, studentsList);
}

int main()
{
    int num_of_students = 9;

    string *studentsList[num_of_students];
    for (int i = 0; i < num_of_students; i++)
        studentsList[i] = new string[4];

    studentsList[0][0] = "CS13102";
    studentsList[0][1] = "Tom";
    studentsList[1][2] = "CS102";
    studentsList[1][2] = "PF";

    studentsList[1][0] = "CS10156";
    studentsList[1][1] = "Jerry";
    studentsList[1][2] = "CS306";
    studentsList[1][2] = "DE";

    studentsList[2][0] = "CS56782";
    studentsList[2][1] = "Blossom";
    studentsList[2][2] = "CS404";
    studentsList[2][2] = "PIT";

    studentsList[3][0] = "CS12470";
    studentsList[3][1] = "Buttercup";
    studentsList[3][2] = "CS102";
    studentsList[3][2] = "PF";

    studentsList[4][0] = "CS10111";
    studentsList[4][1] = "Bubbles";
    studentsList[4][2] = "CS404";
    studentsList[4][2] = "PIT";

    studentsList[5][0] = "CS13026";
    studentsList[5][1] = "Sylvester";
    studentsList[5][2] = "CS102";
    studentsList[5][2] = "PF";

    studentsList[6][0] = "CS13025";
    studentsList[6][1] = "Bunny";
    studentsList[6][2] = "CS404";
    studentsList[6][2] ="PIT";
    
    studentsList[7][0] = "CS10101";
    studentsList[7][1] = "Daffy";
    studentsList[7][2] = "CS101";
    studentsList[7][2] = "ITC";

    studentsList[8][0] = "CS16024";
    studentsList[8][1] = "Tweety";
    studentsList[8][2] = "CS236";
    studentsList[8][2] = "CAL";

    cout << " String before Sorting" << endl<<endl;
    print_info(studentsList, num_of_students);

    bubbleSort(studentsList, num_of_students);
    cout << " String after Sorting :" <<endl<<endl;
    print_info(studentsList, num_of_students);
    return 0;
}
