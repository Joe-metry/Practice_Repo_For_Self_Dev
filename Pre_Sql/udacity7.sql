
/*
  Which year did Parch & Posey have the greatest sales in terms of total number of orders?
  Are all years evenly represented by the dataset?

*/

SELECT DATE_PART('year', occurred_at) ord_year,  COUNT(*) total_sales
FROM orders
GROUP BY 1
ORDER BY 2 DESC;
