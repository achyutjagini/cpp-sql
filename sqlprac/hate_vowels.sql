/* YOUR QUERY GOES HERE
   Example: SELECT * FROM EMPLOYEE; 
   select name
from Students
where name in
(
case
when 
select marks1 from student

    
)
*/

select Name
from Students
order by case when (Name LIKE 'a%' OR Name LIKE 'e%' OR Name LIKE 'i%'
OR Name LIKE 'o%' OR Name LIKE 'u%') then case when(Marks1<=Marks2) then 
Marks1 else Marks2 end else case when(Marks1>=Marks1) then Marks1 else Marks2 end end desc;
