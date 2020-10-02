# Enrollment-Sim

This project is from my Semester Programming Project from the Fall 2019 Semester CS 231 Course
Starting off I included the neccesary packages for the project. This includes iostream, string, iomanip, fstream, ctime.
As well as including a using namespace std; line to avoid lengthy code when writing in and outputs.
The next step was to create all of my strings for the student themselves as well as the courses with a maximum of 6.
After that I initialized some strings to hold all of my month names and days of the week, as well as a small snippet to grab the current year, month, day, day of the week, and time.
then the main function is started. It starts by initializing some integers for the date and time etc while using the getTm function to fill those variables.
Next was to use IFStream to grab an input file from the StudentSchedule.txt file and get the lines for the student number, last name, first name, major, and SSN. Then I close the file.
Initialize a Boolean value, cont, that is vital for the project so it can tell when to continue and when to stop running the program.
The next 21 lines are an artificial GUI made through the use of ASCII art displaying the name of the University as well as the semeseter, student name, and title of the application "Course Enrollment SImulation"
The user is then asked whether they would like to continue with the application. If they enter y then the cont boolean is set to true and the program will continue.
If they select n then the cont boolean is set to false and the program will terminate.
If the user selects Yes then the console window is wiped and another ASCII art style GUI is presented
This asks the user for their student number, last name, major, and SSN and allows them to input it in the command line as well.
The application then compares the information that the user has input into the system to the information that is in the .txt file as a key.
Each line in the text file represents a variable that the user will input and if they dont match exactly then the user will b prompted with a screen asking them to retry as their information was incorrect.
If the student inputs the information correctly, a screen will print telling them that they have correctly input their information and they will now proceed to a location where they can input information for the classes they are enrolling in.
Next a boolean, conFinal, is setup and initialized to false. Then a while loop is presented where the condition is conFinal == false
A for loop is then created with a variable i and a statement not allowing the user to create more than 6 classes.
Switch statements are setup so that if the user adds more than one one class it will ask them for the appropriate information
ie. "Course 1 Number, Course 1 Section" etc. This allows the user the get a clear understanding of which information they are being asked to present
The switch statements are repeated three times with corresponding cases for classes 1-6.
After the user has input the respective information for one class, they are asked if they have another class that they would like to input information for. If they select N then the i variable is set to 7 and the for loop ends. If the user selects y then the loop continues and asks for the next respective classes information.
The final output page in the application is another ASCII art page displaying the university information, semester as well as the class schedule.
This is output by displaying the current date and time that was recieved earlier in the application, then the students SSN, name, and major are displayed.
Finally all 6 classes are displayed with course numbers, sections, and names. As well as displaying the total number of course hours determined by multiplying the number of classes by 3 (assuming each class was equivalent to 3 credit hours.
The final prompt asks the user if they would like to reenter their classes, perhaps if they made a mistake or forgot a class. Once again if they say yes then the whole application repeats and if they say no then the application continues.
Before closing, the application will take the input key file and turn it into an output file. It adds lines including the students name, number, SSN, and major. As well as all of the classes that they input including the course hours at the end as well. The file is then closed and application terminates
