#include <iostream>
using namespace std;

int main()
	{
	double mid,hw,proj; //Grade types, doubles becuase they can have decimals
	char confirm;  //loop confirmation character, character becuase it is a character

	int restartloop=0;
	while (restartloop<1){
    // loop to enter grades//
    int loop=0;
	while (loop<1) {
	cout << "Please enter your midterm grade:" << endl;
		cin >> mid;					
	cout << "Please enter your project average:" << endl;
		cin >> proj;	
	cout << "Please enter your homework average:" << endl;
		cin >> hw;
	if (hw>=0 && hw<=100 && mid>=0 && mid<=100 && proj>=0 && proj <=100){
		}
	else{
		cout<< "One of your inputs was invalid, please try again" << endl;
		cout << endl;
		continue;
		}	
       
	cout << " Your midterm grade is " << mid << ", Your project average is " << proj << ", Your homework average is " << hw << " is this correct Y/N?" << endl;
		cin>>confirm;	
		if (confirm == 'Y' || confirm== 'y'){
		loop=loop+1;
		cout << endl;
		}
	}
		
	//If statement to find highest grade(s)//
	if (mid>hw && mid>proj){
		cout<< "Your midterm grade is the highest at " << mid << endl;
	}
	else if (hw>mid && hw>proj){
		cout<< "Your homework grade is the highest at " << hw << endl;
	}
	else if (proj>mid && proj>hw){
		cout << "Your Project grade is the highest at " << proj << endl;
	}
	else if (mid==hw && mid > proj){
		cout<< "Your midterm && homework grades are your highest at "<< hw << endl;
	}
	else if (mid==proj && mid >hw){
		cout << "Your midterm && project grades are your highest at "<< proj << endl;
	}
	else if (proj==hw && proj>mid) {
		cout << "Your project && homework grades are your highest at "<< proj << endl;
	}
	else if (proj == hw && proj == mid){
		cout << "All of your grades are " << proj << endl;
	}
		
	//If statement to find lowest grade(s)//
	if (mid<hw && mid<proj){
		cout<< "Your midterm grade is the lowest at " << mid << endl;
	}
	else if (hw<mid && hw<proj){
		cout<< "Your homework grade is the lowest at " << hw << endl;
	}
	else if (proj<mid && proj<hw){
		cout << "Your Project grade is the lowest at " << proj << endl;
	}
	else if (mid==hw && mid < proj){
		cout<< "Your midterm && homework grades are your lowest at "<< hw << endl;
	}
	else if (mid==proj && mid < hw){
		cout << "Your midterm && project grades are your lowest at "<< proj << endl;
	}
	else if (proj==hw && proj<mid) {
		cout << "Your project && homew||k grades are your lowest at "<< proj << endl;
	}

	//Calculations for final, need all doubles becuase they can have decimals.
	double midpoints= 20*(mid/100); //midterm point calculation
	double projpoints = 40*(proj/100); // project point calculation
	double hwpoints = 15*(hw/100); // homework point calculation
	double ppoints = midpoints + projpoints + hwpoints; // gradepoints combined
	double pneed = 70 - ppoints; //points needed to pass
	double finalneed = 4*pneed;//points need converted to finalgrade needed
		
	cout << " you got " << projpoints << "/40 points for projects" << endl;
	cout << " you got " << midpoints << "/20 points for the midterm" << endl;
	cout << " you got " << hwpoints << "/15 points for homework" << endl;
	cout << " you current average is " << (ppoints/100)*100 << "%" << endl;
		
	if (pneed<=0){
		cout<< "You do not need to take the final to earn a 70% for the course" << endl;
	}
	else if (pneed>25){
		cout << "No matter what you get on the final exam, you cannot earn a 70% for the course" << endl;
	}
	else {
		cout << "You need to make a grade of " << finalneed <<"% on the final to have a 70% for the course" << endl;
	}
	
	cout << "Would you like to run the program again? Y/N" << endl;
		char x;
		cin >> x;
	if (x == 'Y' || x == 'y'){
		cout << endl;
		cout << endl;
	}
	else{
		restartloop=restartloop+1;
	}
	}
return 0;
}                            
