SELECT t.id FROM Weather AS t, Weather AS y
WHERE DATEDIFF(t.recordDate, y.recordDate) = 1
AND t.Temperature > y.temperature
