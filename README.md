# Enrollment-Sim

This project is from my Semester Programming Project from the Fall 2019 Semester CS 231 Course
Starting off I included the neccesary packages for the project. This includes iostream, string, iomanip, fstream, ctime.
As well as including a using namespace std; line to avoid lengthy code when writing in and outputs.
The next step was to create all of my strings for the student themselves as well as the courses with a maximum of 6.
After that I initialized some strings to hold all of my month names and days of the week, as well as a small snippet to grab the current year, month, day, day of the week, and time.
then the main function is started. It starts by initializing some integers for the date and time etc while using the getTm function to fill those variables.
Next was to use IFStream to grab an input file from the StudentSchedule.txt file and get the lines for the student number, last name, first name, major, and SSN. Then I close the file.
Initialize a Boolean value, cont, that is vital for the project so it can tell when to continue and when to stop running the program.
