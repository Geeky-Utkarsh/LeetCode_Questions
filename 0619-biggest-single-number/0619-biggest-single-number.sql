-- SELECT num FROM MyNumbers GROUP BY num HAVING COUNT(num)=1 ORDER BY num DESC limit 1;


--  SELECT num FROM MyNumbers GROUP BY num HAVING COUNT(num)=1)
    --  UNION
--  (SELECT NULL) ORDER BY num DESC limit 1; 

-- SELECT num, COUNT(distinct num) FROM MyNumbers GROUP BY num; 


-- Solution -> 1 [SubQuery Based]
-- SELECT MAX(num) AS num FROM (SELECT num FROM MyNumbers GROUP BY num HAVING COUNT(num)=1) AS F;


-- Solution -> 2 [Using CTE]
with cte_name AS (
    SELECT num FROM (SELECT num FROM MyNumbers GROUP BY num HAVING COUNT(num)=1) AS F
)

SELECT MAX(num) as num FROM cte_name;