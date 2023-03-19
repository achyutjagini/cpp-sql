

/*group by and order by consecutive */

select customer_number
from Orders
group by customer_number
order by count(customer_number) desc
limit 1;

/*
select customer_number
from Orders
where no_orders=
(
select max(no_orders)
from
(
select order_number,customer_number,count(*) as no_orders
from Orders
group by customer_number));

*/