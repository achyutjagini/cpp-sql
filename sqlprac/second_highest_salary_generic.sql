# Write your MySQL query statement below

SELECT IFNULL((Select distinct(salary) 
from employee e1
where 1=(select count(distinct(salary)) from employee e2 where e2.salary>e1.salary)),NULL) 
as SecondHighestSalary



SELECT IFNULL((Select distinct(salary)
from employee e1
order by salary desc
limit 1
offset 1),NULL) as SecondHighestSalary
