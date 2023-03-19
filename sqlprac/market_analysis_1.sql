
select user_id as buyer_id, join_date, (select count(buyer_id)
                                        from orders
                                        where user_id = buyer_id and year(order_date) = 2019
                                       ) as orders_in_2019                                       
from users