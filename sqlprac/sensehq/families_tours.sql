

/* sql nested query- 

creates a new table tour_count
and select max value of tours in tour_count


split into parts
1st-
SELECT COUNT(*) AS num FROM COUNTRIES c 
WHERE c.MIN_SIZE <= a.FAMILY_SIZE



*/


/*correct command
mysql -u root -p
mysql> source file_name
mysql> source file_name
source C:\Users\achyu\Desktop\cloudera\q5\q5.sql
*/


SELECT MAX(tour_count.tours) 
FROM ( 

SELECT ( SELECT COUNT(*) AS num 
FROM COUNTRIES c 
WHERE c.MIN_SIZE <= a.FAMILY_SIZE )

AS tours FROM FAMILIES a ) AS tour_count;
 
