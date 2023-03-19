# Write your MySQL query statement below


with a as (select distinct(score) score from Scores),

a1 as (select score, rank() over(order by score desc) 'rank' from a)

select s.score, a1.rank from Scores s 

join a1 on s.score = a1.score order by score desc;