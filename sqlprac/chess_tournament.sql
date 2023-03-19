/* YOUR QUERY GOES HERE
   Example: SELECT * FROM EMPLOYEE; 
   
SELECT Name

from Players,Matches
where Players.id=Matches.id
group by id;

*/


select Name from Players
 where Id in

(select Id from Matches  group by Id 

having SUM(Result)>0 and count(*)-SUM(Result)<=1);



/* YOUR QUERY GOES HERE
   Example: SELECT * FROM EMPLOYEE; 
   
SELECT Name

from Players,Matches

group by id;


SELECT Name,Players.id as id

from Players,Matches
where Players.id=Matches.id;

/*SELECT Name

from Players,Matches

group by Matches.id;

/*
select Name from Players
 where Id in
(select Id from Matches  group by Id having SUM(Result)>0 and count(*)-SUM(Result)<=1);*/
