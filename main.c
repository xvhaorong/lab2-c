// Author: Haorong Xu hxx5086@psu.edu 
// Collaborator: 
// Collaborator: 
// Collaborator: 
// Section: 12
// Breakout: 

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char*gd1=readline("Enter your CMPSC 131 grade: ");
  double gd2=atof(gd1);
  char*lettergd= "A";

if(gd2>=93.0){
  lettergd ="A";
}
else if (gd2>=90.0){
  lettergd="A-";
}
else if (gd2>=87.0){
  lettergd="B+";
}
else if (gd2>=83.0){
  lettergd="B";
}
else if (gd2>=80.0){
  lettergd="B-";
}
else if (gd2>=77.0){
  lettergd="C+";
}
else if (gd2>=70.0){
  lettergd="C";
}
else if (gd2>=60.0){
  lettergd="D";
}
else{
  lettergd="F";
}

printf("Your letter grade for CMPSC 131 is %s.\n" ,lettergd);
return 0;
}