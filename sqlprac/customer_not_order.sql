

select name as "Customers"
from Customers 

where Customers.id not in
(
select Customers.id
from Customers 
inner join Orders
on Customers.id=Orders.customerId  /*on can also be where in this line*/
)

/*
select name as "Customers"
from Customers c1

where c1.id not in
(
select c2.id
from Customers c2
inner join Orders
on c2.id=Orders.customerId
)
*/