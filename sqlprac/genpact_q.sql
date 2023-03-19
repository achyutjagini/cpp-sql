
drop database student;
create database student;

use student;

CREATE TABLE employee
(id int,
name varchar(10)
);


CREATE TABLE salary
(empid int,
amount int
);


/*correct command
mysql -u root -p
mysql> source file_name
mysql> source file_name
\. C:\Users\achyu\Desktop\sqlprac\genpact_q.sql
source C:\Users\achyu\Desktop\sqlprac\genpact_q.sql

*/

INSERT into employee values(101,'John');
INSERT into employee values(102,'Ram');

INSERT into salary values(101,3400);
INSERT into salary values(102,3600);



select salary.amount
from employee inner join salary
on employee.id=salary.empid
where employee.name='John';

/*
both work
select salary.amount
from employee inner join salary
where employee.id=salary.empid and employee.name='John';
*/


