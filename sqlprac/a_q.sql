/*correct command
mysql -u root -p
mysql> source file_name
mysql> source file_name
source C:\Users\achyu\Desktop\cloudera\q5\q5.sql
*/


SELECT TOP 1 C.NAME, O.PRICE 
FROM CUSTOMERS C INNER JOIN ORDERS O 
ON C.ORDER_ID = O.ID

WHERE O.ORDER_DATE <= DATEADD(year, 10, (SELECT MIN(ORDER_DATE) FROM ORDERS))
ORDER BY O.PRICE DESC