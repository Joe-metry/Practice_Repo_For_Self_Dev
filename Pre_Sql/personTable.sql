-- Creating my first ever SQL table called Person

CREATE TABLE Person (
	id BIGSERIAL PRIMARY KEY NOT NULL,
	first_name VARCHAR(50) NOT NULL,
	last_name VARCHAR(50) NOT NULL,
	gender VARCHAR(7) NOT NULL,
	date_of_birth DATE NOT NULL,
	email VARCHAR(150)
);
