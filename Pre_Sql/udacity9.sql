/*
 Find the sales in terms of total dollars for all orders in each year, ordered from greatest to least.
 Do you notice any trends in the yearly sales totals?

*/

SELECT DATE_PART('year', occurred_at) ord_year,  SUM(total_amt_usd) total_spent
FROM orders
GROUP BY 1
ORDER BY 2 DESC;
