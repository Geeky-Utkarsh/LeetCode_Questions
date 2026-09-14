-- SELECT customer_number FROM Orders WHRERE cusomter_number=(SELECT DISTINCT COUNT(o.order_number) AS customer_num FROM Orders AS o ORDER BY customer_number GROUP BY customer_number); 

-- SELECT o.customer_name AS customer_number FROM orders AS o WHERE COUNT(customer_number)=(MAX(SELECT COUNT(customer_count) FROM orders GROUP BY customer_name));

-- SOLUTION -> 1 

-- SELECT /*customer_number, */ COUNT(customer_number)  AS occurrence  FROM Orders GROUP BY customer_number;

-- SELECT customer_number, COUNT(customer_number) AS occurrence  FROM Orders GROUP BY customer_number;




-- Solution -> 1 [GROUP BY + COUNT(*) + ORDER BY approach]
-- SELECT  /* o.customer_number */ o.customer_number AS customer_number FROM Orders as o 
--  GROUP BY customer_number ORDER BY COUNT(*) DESC LIMIT 1;


-- Solution ->2 [Using SubQuery]
-- SELECT MAX(customer_number) AS customer_number FROM ( SELECT  customer_number /* COUNT(customer_number) AS customers */ FROM Orders GROUP BY customer_number) AS T;


-- Solution -> 3rd [Using CTE]

WITH cte_name AS (
    SELECT customer_number, occurrence FROM (SELECT customer_number, COUNT(*) as Occurrence FROM Orders GROUP BY customer_number) AS F
)

SELECT MAX(customer_number) AS customer_number FROM cte_name WHERE occurrence=(SELECT MAX(occurrence) FROM cte_name);