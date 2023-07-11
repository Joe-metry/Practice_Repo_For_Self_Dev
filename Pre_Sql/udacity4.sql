/*
 For each account, determine the average amount of each type of paper
 they purchased across their orders. Your result should have four columns - one for
 the account name and one for the average quantity purchased for each of
 the paper types for each account.

*/

SELECT a.name, AVG(o.standard_qty) avg_stand, AVG(o.gloss_qty) avg_gloss, AVG(o.poster_qty) avg_post
FROM accounts a
JOIN orders o
ON a.id = o.account_id
GROUP BY a.name;
