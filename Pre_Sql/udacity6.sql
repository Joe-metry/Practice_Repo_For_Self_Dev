
/*
  Which month did Parch & Posey have the greatest sales in terms of total number of orders?
  Are all months evenly represented by the dataset?
*/

SELECT DATE_PART('month', occurred_at) ord_month, COUNT(*) total_sales
FROM orders
WHERE occurred_at BETWEEN '2014-01-01' AND '2017-01-01'
GROUP BY 1
ORDER BY 2 DESC;

