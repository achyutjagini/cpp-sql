/* YOUR QUERY GOES HERE
   Example: SELECT * FROM EMPLOYEE; 
*/

SET @h=0, @a=0, @d=0, @t=0;

SELECT MIN(Healer),MIN(Attacker),MIN(Defender),MIN(Tactician)
FROM
(SELECT IF(Role='Healer',Player,NULL) AS Healer,
        IF(Role='Attacker',Player,NULL) AS Attacker,
        IF(Role='Defender',Player,NULL) AS Defender,
        IF(Role='Tactician',Player,NULL) AS Tactician,
 CASE Role
    WHEN 'Healer' THEN @h:=@h+1
    WHEN 'Attacker' THEN @a:=@a+1
    WHEN 'Defender' THEN @d:=@d+1
    WHEN 'Tactician' THEN @t:=@t+1
 END
 
AS idn FROM GAMERS ORDER BY Player )
AS temp GROUP BY temp.idn;