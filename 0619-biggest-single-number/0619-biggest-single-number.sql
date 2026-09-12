-- SELECT num FROM MyNumbers GROUP BY num HAVING COUNT(num)=1 ORDER BY num DESC limit 1;


--  SELECT num FROM MyNumbers GROUP BY num HAVING COUNT(num)=1)
    --  UNION
--  (SELECT NULL) ORDER BY num DESC limit 1; 

-- SELECT num, COUNT(distinct num) FROM MyNumbers GROUP BY num; 


SELECT MAX(num) AS num FROM (SELECT num FROM MyNumbers GROUP BY num HAVING COUNT(num)=1) AS F;

