//written by Ryley Danielson

#include <iostream>
#include <iomanip>
#include<string>

using namespace std;

int main()
{
	char choice = 'N';
	double midtermExam = 0.0,finalExam = 0.0,assignmentGrade = 0.0,finalGrade = 0.0;
	string studentName, courseName, letterGrade, course;

	do{
		system("cls");//clear the screen
		
		cout << "Enter the student's name: ";
		getline(cin, studentName);

		cout << "Enter the course's name: ";
		getline(cin, courseName);

		cout << "Midterm Grade: ";
		while (!(cin >> midtermExam) || (midtermExam < 0 || midtermExam > 100))
		{
			cout << "Midterm Grade must be a value between 0 and 100 " << endl;

			cin.clear(); //Clear the buffer
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		cout << "Final Exam: ";
		while (!(cin >> finalExam) || (finalExam < 0 || finalExam > 100))
		{
			cout << "Midterm Grade must be a value between 0 and 100 " << endl;

			cin.clear(); //Clear the buffer
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		cout << "Assignment Grade: ";
		while (!(cin >> assignmentGrade) || (assignmentGrade < 0 || assignmentGrade > 100))
		{
			cout << "Midterm Grade must be a value between 0 and 100 " << endl;

			cin.clear(); //Clear the buffer
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		//processing
		finalGrade = ((midtermExam*.20 + finalExam * .20) + (assignmentGrade * .60));
		
		if (finalGrade < 60)
		{
			letterGrade = "F";
		}
		else if (finalGrade < 70)
		{
			letterGrade = "D";
		}
		else if (finalGrade < 80)
		{
			letterGrade = "C";
		}
		else if (finalGrade < 90)
		{
			letterGrade = "B";
		}
		else 
		{
			letterGrade = "A";
		}

		//output
		cout << fixed << setprecision(2);
		cout << "\nStudent Name: " << studentName << endl;
		cout << "Course Name: " << courseName << endl;
		cout << "Final Grade: " << finalGrade << endl;
		cout << "LetterGrade: " << letterGrade << endl;


		//Ask to Continue Program
		cout << "\nDo you want to calculate the grade for another student Y/N?";
		cin >> choice;
		//cin.ignore();
		cin.get();

	} while (toupper(choice) == 'Y');
	
	

	
//END CONTINUE LOOP

//End Program
return 0;
}
