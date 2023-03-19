
select Department.name as "Department",Employee.name as "Employee",Employee.salary as "salary"

from Employee inner join  Department
on Employee.departmentId=Department.id

WHERE (Employee.departmentId,salary) in
(
select Employee.departmentId,MAX(salary)
from Employee    
group by departmentID
)