#include<iostream>
#include <iomanip>

using namespace std;


struct students{
	string roll;
	string name;
	string course_code;
	string course_name;
};
struct students info[9];

void doBubbleSort(){
	int i, j, n = 9;
	struct students t;

	for (i = 0; i < n-1; i++){
		for (j = 0; j < n-i-1; j++){
			if (info[j].name > info[j + 1].name){

				t = info[j];
				info[j] = info[j+1];
				info[j+1] = t;
		   }
		}
	}
}


void doSelectionSort(){

	int i, j, minIndex, n = 9;
	struct students t;

	for (i = 0; i < n-1; i++){
		minIndex = i;
		for (j = i + 1; j < n; j++){
			if (info[j].name < info[minIndex].name)
				minIndex = j;
		}

		t = info[minIndex];
		info[minIndex] = info[i];
		info[i] = t;
	}
}



void doInsertionSort(){
	int i, j, n= 9;
    struct students k;

    for (i = 1; i < n; i++) {
        k = info[i];
        j = i - 1;
        while (j >= 0 && info[j].name > k.name) {
            info[j + 1] = info[j];
            j = j - 1;
        }
        info[j + 1] = k;
    }
}


void display(){

	int i, j, n = 9;

	cout<<"Roll Number\t name\t\tCourse Code\tCourse Name"<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	for(i = 0; i < 9; i++){
		cout<<info[i].roll<<setw(15)<<info[i].name<<setw(15)
			<<info[i].course_code<<setw(15)<<info[i].course_name<<endl;
	}
}

int main(){
	int choice;

	info[0].roll = "CS13102";
	info[1].roll = "CS10156";
	info[2].roll = "CS56782";
	info[3].roll = "CS12470";
	info[4].roll = "CS10111";
	info[5].roll = "CS13026";
	info[6].roll = "CS13025";
	info[7].roll = "CS10101";
	info[8].roll = "CS16024";

	info[0].name = "Tom";
	info[1].name = "Jerry";
	info[2].name = "Blossom";
	info[3].name = "Buttercup";
	info[4].name = "Bubbles";
	info[5].name = "Sylvester";
	info[6].name = "Bunny";
	info[7].name = "Daffy";
	info[8].name = "Tweety";


	info[0].course_code = "CS102";
	info[1].course_code = "CS306";
	info[2].course_code = "CS404";
	info[3].course_code = "CS102";
	info[4].course_code = "CS404";
	info[5].course_code = "CS102";
	info[6].course_code = "CS404";
	info[7].course_code = "CS101";
	info[8].course_code = "CS236";

	info[0].course_name = "PF";
	info[1].course_name = "DE";
	info[2].course_name = "PIT";
	info[3].course_name = "PF";
	info[4].course_name = "PIT";
	info[5].course_name = "PF";
	info[6].course_name = "PIT";
	info[7].course_name = "ITC";
	info[8].course_name = "CAL";


	cout<<"Student data before sorting:-\n"<<endl;
	display();


	cout<<"\n\nEnter 1 for Bubble Sort"<<endl;
	cout<<"Enter 2 for Selection Sort"<<endl;
	cout<<"Enter 3 for Insertion Sort"<<endl;
	cout<<"Your choice >> ";
	cin>> choice;

	if(choice == 1)
		doBubbleSort();
	else if(choice ==2)
		doSelectionSort();
	else if(choice == 3)
		doInsertionSort();


	cout<<"\n\nStudent data after sorting by name:-\n"<<endl;
	display();

}
