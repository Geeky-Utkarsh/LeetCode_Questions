# Write your MySQL query statement below
SELECT a.id
FROM Weather a, Weather b
WHERE datediff(a.recordDate, b.recordDate) = 1
AND a.temperature > b.temperature;
