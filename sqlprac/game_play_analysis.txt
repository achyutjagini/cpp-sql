# Write your MySQL query statement below

/*min can be applied to date */

select player_id,min(event_date) as first_login
from Activity
group by player_id;