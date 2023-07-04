day2.sql

--aggregating the number of countries using the COUNT function on the person table.

SELECT country_of_birth, COUNT(*)
	FROM person
	GROUP BY country_of_birth
ORDER BY country_of_birth;
