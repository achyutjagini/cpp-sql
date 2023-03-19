/* YOUR QUERY GOES HERE
   Example: SELECT * FROM EMPLOYEE; 
   LIMIT will retrieve only the number 
   of records specified after the LIMIT keyword, unless 
   the query itself returns fewer records than the
    number specified by LIMIT.
   The OFFSET argument is used to identify
    the starting point to return rows from a result set. 
    Basically, it exclude the first set of records. Note:
     OFFSET can only be used with ORDER BY clause. It cannot
      be used on its own
*/

SELECT MARKS
FROM STUDENTS
ORDER BY MARKS DESC
LIMIT 1 OFFSET 4
;