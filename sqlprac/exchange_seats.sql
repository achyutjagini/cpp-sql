# Write your MySQL query statement below

SELECT
(CASE WHEN MOD(id, 2) != 0 AND counts != id THEN id + 1

WHEN MOD(id, 2) != 0 AND counts = id THEN id  /*odd id, the last one in the table, don't change anything*/
ELSE id - 1                                    /*even id, subtract 1 from it.      */
END 
) AS id,student
    
FROM seat,
(SELECT COUNT(*) AS counts   /* seat cross join with seat_counts */
FROM seat) as seat_counts   /*seat counts-derived table must have alias error if removed*/

ORDER BY id ASC;