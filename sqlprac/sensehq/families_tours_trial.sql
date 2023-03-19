drop database tours;
create database tours;

use tours;

CREATE TABLE FAMILIES
(ID int,
NAME varchar(30),
FAMILY_SIZE int
);


CREATE TABLE COUNTRIES
(ID int,
NAME varchar(30),
MIN_SIZE int
);

INSERT into FAMILIES values(1,"Alex Thomas",9);
INSERT into FAMILIES values(2,"Chris Gray",2);

INSERT into COUNTRIES values(3,"Bolivia",2);
INSERT into COUNTRIES values(4,"Cook Islands",4);
INSERT into COUNTRIES values(5,"Brazil",4);


/*correct command
mysql -u root -p
mysql> source file_name
mysql> source file_name

source C:\Users\achyu\Desktop\sqlprac\sensehq\families_tours_trial.sql
*/

SELECT ( SELECT COUNT(*) AS num 
FROM COUNTRIES c 
WHERE c.MIN_SIZE <= a.FAMILY_SIZE )
AS tours FROM FAMILIES a ;














