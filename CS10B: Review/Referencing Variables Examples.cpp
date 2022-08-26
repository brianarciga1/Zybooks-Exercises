EXAMPLE 1:
-----------
int numAStudents = 12;
int numBStudents = 5;
int& studentsRef = numAStudents;

cout << studentsRef; // outputs 12

___________________________________

EXAMPLE 2:
-----------
int examGrade = 95;
int& gradeRef = examGrade;

examGrade = examGrade + 1;
cout << gradeRef; // outputs 96 whichis the updated value of examGrade

___________________________________

EXAMPLE 3:
-----------
double treeHeightFt = 7.1;
double& heightRef = treeHeightFt;

heightRef = 12.2;
cout << treeHeightFt; // outputs 12.2. Assigning heightRef with 12.2 assigns the referenced variable treeHeightFt with 12.2. So, 12.2 is output.
