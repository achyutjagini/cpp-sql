
/* YOUR QUERY GOES HERE
   Example: SELECT * FROM EMPLOYEE; 
also correct

select Id 
from Books
where Id in

(select BooksId
from BoughtBooks
group by BOoksId
having count(BooksId)>2
);

*/

select Books.Id 
from Books
where Books.Id in

(select BooksId
from BoughtBooks
group by BOoksId
having count(*)>2
);
