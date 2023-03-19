
SELECT d.Name AS 'Department', e1.Name AS 'Employee', e1.Salary

FROM Employee e1 JOIN

Department d ON e1.DepartmentId = d.Id

/*for 3rd highest salry 2 greater ones- rhs ans */
/*for 2nd highest salry 1 greater one- rhs ans */

WHERE 3 > (SELECT COUNT(DISTINCT e2.Salary)
           FROM Employee e2
           WHERE e2.Salary > e1.Salary AND e1.DepartmentId = e2.DepartmentId
        );