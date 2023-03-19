# Write your MySQL query statement below

SELECT DISTINCT name, IF( SUM(r.distance) OVER(PARTITION BY r.user_id) IS NULL, 0, SUM(r.distance) OVER(PARTITION BY r.user_id) ) AS travelled_distance

FROM Users u LEFT JOIN Rides r 
ON u.id = r.user_id

ORDER BY travelled_distance DESC, name;


/*
select name,Rides.distance as travelled_distance
from users left join rides
on users.id=Rides.user_id 
*/
/*
order by travelled_distance desc;
*/


