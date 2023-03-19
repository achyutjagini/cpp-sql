
drop database student;
create database student;

use student;

CREATE TABLE student
(ID int,
name varchar(10),
college_name varchar(10)
);

/*correct command
mysql -u root -p
mysql> source file_name
mysql> source file_name
source C:\Users\achyu\Desktop\cloudera\q5\q5.sql
*/

INSERT into student values(101,'Ram','MIT');
INSERT into student values(110,'Steve','PES');

select lower(concat(name,'_',ID%100,'@',college_name,'.com')) as ans
from student;
