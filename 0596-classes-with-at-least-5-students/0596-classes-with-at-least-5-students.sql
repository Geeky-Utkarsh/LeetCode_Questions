# Write your MySQL query statement below

-- Solution -> 1 [GROUP BY + Aggregate Function]
-- SELECT class /* COUNT(class) */ FROM Courses WHERE COUNT(class)>5 GROUP BY class ORDER BY class DESC LIMIT 1; 

-- Solution--> 1 [GROUP BY + Aggregate Fn] based approach  
-- SELECT class FROM Courses GROUP BY class HAVING COUNT(class)>=5 ORDER BY COUNT(class); 

-- Solution--> 2 [cte based approach]

with cte_name AS (
   SELECT class FROM Courses GROUP BY class HAVING COUNT(class)>=5 ORDER BY COUNT(class) 
)

SELECT class FROM cte_name;