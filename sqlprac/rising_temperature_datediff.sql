
select w2.id
from weather w1 inner join weather w2
on datediff(w2.recorddate,w1.recorddate)=1

where w1.temperature<w2.temperature;

