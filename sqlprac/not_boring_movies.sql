
select *
from Cinema
where id not in
(
select id
from Cinema
where description='boring'
)
and MOD(id,2)!=0 
order by rating desc;

    