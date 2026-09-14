-- SELECT num FROM MyNumbers GROUP BY num HAVING COUNT(num)=1 ORDER BY num DESC limit 1;


-- Solution -> 1 [UNION Based to Deal with NULL]
--  SELECT num FROM MyNumbers GROUP BY num HAVING COUNT(num)=1)
    --  UNION
--  (SELECT NULL) ORDER BY num DESC limit 1; 


-- Solution -> 2 [SubQuery Based]
-- SELECT MAX(num) AS num FROM (SELECT num FROM MyNumbers GROUP BY num HAVING COUNT(num)=1) AS F;


-- Solution -> 3 [Using CTE]
with cte_name AS (
    SELECT num FROM (SELECT num FROM MyNumbers GROUP BY num HAVING COUNT(num)=1) AS F
)

SELECT MAX(num) as num FROM cte_name;