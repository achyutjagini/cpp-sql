/* YOUR QUERY GOES HERE
   Example: SELECT * FROM EMPLOYEE; 
*/

/* YOUR QUERY GOES HERE
   Example: SELECT * FROM EMPLOYEE; 
   
   If-Else statements can be emulated in SQL using CASE keyword,
    along with the WHEN and ELSE keywords. Below the CASE keyword, the WHEN
keyword is used to list all the conditionals. If not of the conditions is 
satisfied, then we can tell our code what to do, under the ELSE
clause.

*/


SELECT CASE
WHEN A + B + C = 0 THEN 'Zero'
WHEN A + B + C < 0 THEN 'Negative'
ELSE 'Positive'
END AS A

FROM NUMBERS;