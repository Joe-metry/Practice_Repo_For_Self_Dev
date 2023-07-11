/*
  For each account, determine the average amount spent per
  order on each paper type. Your result should have four
  columns - one for the account name and one for
  the average amount spent on each paper type.
*/

SELECT a.name account_name, AVG(poster_amt_usd) poster_avg,
        AVG(gloss_amt_usd) gloss_avg, AVG(standard_amt_usd) standard_avg
  FROM accounts a
  JOIN orders o
    ON a.id = o.account_id
GROUP BY account_name;
