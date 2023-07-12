/*
  Which month did Parch & Posey have the greatest sales in terms of total dollars?
  Are all months evenly represented by the dataset?

*/

SELECT DATE_PART('month', occurred_at) ord_month, SUM(total_amt_usd) total_spent
FROM orders
WHERE occurred_at BETWEEN '2014-01-01' AND '2017-01-01'
GROUP BY 1
ORDER BY 2 DESC; 
