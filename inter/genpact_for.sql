/*
table -student table
other -teacher

alter student
add foreign (teacherid)
from teacher;

*/

ALTER TABLE student
ADD CONSTRAINT FK_PersonOrder
FOREIGN KEY (PersonID) REFERENCES Persons(PersonID);


ALTER TABLE student
ADD FOREIGN KEY (TeacherID) REFERENCES teacher(TeacherID);

