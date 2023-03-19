# Write your MySQL query statement below

select distinct(Product.product_id),product_name 
from product inner join sales
on Product.product_id=Sales.product_id
where Product.product_id not in

(
select Product.product_id
from product inner join sales
on Product.product_id=Sales.product_id
where sale_date not between "2019-01-01" and "2019-03-31"
);