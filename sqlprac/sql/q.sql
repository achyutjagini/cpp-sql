
/*SELECT Name,"$"+inter
FROM 
*/
drop database account;
create database account;

use account;

CREATE TABLE accounts
(id int,
account_holder varchar(30),
amount varchar(10)
);

INSERT into accounts values(1,"Ellis","$5582.03");
INSERT into accounts values(2,"Drew","$2400");
INSERT into accounts values(3,"Asia","$4300");


/*SELECT account_holder,"$"+ CAST(5/100*CONVERT(int,SUBSTRING(amount,1)) as varchar) 


*/
CREATE TABLE n as
SELECT account_holder,concat("$",ROUND(5/100*CONVERT(SUBSTRING(amount,2),DECIMAL) , 2)) as interest
FROM accounts
order by account_holder;

SELECT * from n;
SHOW COLUMNS FROM n;

